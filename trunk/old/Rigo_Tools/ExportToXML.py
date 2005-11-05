import Export

#
# Export to a XML Document
#
class ExportToXML(Export.Export):
	
	def __init__(self, filename):
		self.file = open(filename,"w")
		self.file.write( '<?xml version="1.0"?>\n' )
		self.lvl = -1
	
	def writeFolio(self, folio):
		self.lvl += 1
		self.file.write( self.lvl * " " + '<folio Name="' + folio.getName() + '">\n' )
		for x in folio.getClipBooks():
			self.writeClipBook(x)
		self.file.write( self.lvl * " " + "</folio>\n" )
		self.lvl -= 1
		pass
		
	def writeClipBook(self, book):
		self.lvl += 1
		self.file.write( self.lvl * " " + '<clipBook Name="' + book.getName() + '">\n' )
		for x in book.getNodes():
			self.writeNode(x)
		self.file.write( self.lvl * " " + "</clipbook>\n" )
		self.lvl -= 1
		pass
	
	def writeNode(self, node):
		self.lvl += 1
		self.file.write( self.lvl * " " + '<node Name="' + node.getName() + '">\n' )
		self.lvl += 1
		self.file.write( self.lvl * " " + "<data>\n")
		self.file.write( self.lvl * " " + node.getClip() + "\n")
		self.file.write( self.lvl * " " + "</data>\n")
		self.lvl -= 1
		self.file.write( self.lvl * " " + "</node>\n" )
		self.lvl -= 1
		pass

	def finish(self):
		self.file.close()
