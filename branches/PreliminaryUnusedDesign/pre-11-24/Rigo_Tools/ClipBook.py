class ClipBook:
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