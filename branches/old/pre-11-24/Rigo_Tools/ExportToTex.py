import Export

#
# Export to a Text Document
#
class ExportToTex(Export.Export):
	
	def __init__(self, filename):
		self.file = open(filename, "w")
		self.lvl = -1
		self.writeHeader()
		
	def writeFolio(self, folio):
		self.lvl += 1
		self.file.write( self.getSection() + "{Folio " + folio.getName() + "}\n" )
		self.file.write( "\\label{Folio " + folio.getName() + "}\n" )
		for x in folio.getClipBooks():
			self.writeClipBook(x)
		self.lvl -= 1
		pass
		
	def writeClipBook(self, book):
		self.lvl += 1
		self.file.write( self.getSection() + "{ClipBook " + book.getName() + "}\n" )
		self.file.write( "\\label{ClipBook " + book.getName() + "}\n" )
		for x in book.getNodes():
			self.writeNode(x)
		self.lvl -= 1
		pass
	
	def writeNode(self, node):
		self.lvl += 1
		self.file.write( self.getSection() + "{Node " + node.getName() + "}\n" )
		self.file.write( "\\label{Node " + node.getName() + "}\n" )
		self.file.write( node.getClip() + "\n")
		self.lvl -= 1
		pass

	def finish(self):
		self.writeCloser()
		self.file.close()
	
	def writeHeader(self):
		self.file.write("\\documentclass[11pt]{article}\n")
		self.file.write("\\topmargin -1.5cm        % read Lamport p.163\n")
		self.file.write("\\oddsidemargin -0.04cm   % read Lamport p.163\n")
		self.file.write("\\evensidemargin -0.04cm  % same as oddsidemargin but for left-hand pages\n")
		self.file.write("\\textwidth 16.59cm\n")
		self.file.write("\\textheight 21.94cm \n")
		self.file.write("%\\pagestyle{empty}       % Uncomment if don't want page numbers\n")
		self.file.write("\\parskip 7.2pt           % sets spacing between paragraphs\n")
		self.file.write("%\\renewcommand{\\baselinestretch}{1.5} % Uncomment for 1.5 spacing between lines\n")
		self.file.write("\\parindent 0pt		 % sets leading space for paragraphs\n\n")
		
		self.file.write("\\begin{document}\n")
		self.file.write("% Start your text\n")
		pass
	
	def writeCloser(self):
		self.file.write("% Stop your text\n")
		self.file.write("\\end{document}\n")
		pass
	
	def getSection(self):
		if self.lvl == 2:
			return "\\subsubsection"
		elif self.lvl == 1:
			return "\\subsection"
		else:
			return "\\section"
		
# italics: {\it word}
# bold: {\bf word}

# \section{Introduction}
# \label{Introduction}

# \subsection{The Label Statement}
# \label{labelStatement}
