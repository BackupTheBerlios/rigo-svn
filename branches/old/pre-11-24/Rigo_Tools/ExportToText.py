import Export

#
# Export to a Text Document
#
class ExportToText(Export.Export):
	
	def __init__(self, filename):
		self.file = open(filename, "w")
		self.lvl = -1
	
	def writeFolio(self, folio):
		self.lvl += 1
		self.file.write( self.lvl * "\t" + "Folio " + folio.getName() + ":\n")
		for x in folio.getClipBooks():
			self.writeClipBook(x)
		self.lvl -= 1
		pass
		
	def writeClipBook(self, book):
		self.lvl += 1
		self.file.write( self.lvl * "\t" + "ClipBook " + book.getName() + ":\n")
		for x in book.getNodes():
			self.writeNode(x)
		self.lvl -= 1
		pass
	
	def writeNode(self, node):
		self.lvl += 1
		self.file.write( self.lvl * "\t" + "Node " + node.getName() + ":\n")
		self.file.write( self.lvl * "\t" + "\t" + node.getClip() + "\n")
		self.lvl -= 1
		pass

	def finish(self):
		self.file.close()
