class Folio:
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