
class Node(object):
	def __init__(self, name, data):
		self.name = name
		self.data = data
	
	def getName(self):
		return self.name

	def getClip(self):
		return self.data

class ClipBook(object):
	def __init__(self, name):
		self.name = name
		self.nodes = []

	def addNode(self, node):
		self.nodes.append(node)
		pass
	
	def getNodes(self):
		return self.nodes
		
	def getName(self):
		return self.name

class Folio(object):
	def __init__(self, name):
		self.name = name
		self.books = []
	
	def addBook(self, book):
		self.books.append(book)
		pass
	
	def getClipBooks(self):
		return self.books
		
	def getName(self):
		return self.name