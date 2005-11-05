import Node, ClipBook, Folio
#import Export, ExportToXML, ExportToText, ExportToTex
import pickle

folio = Folio.Folio("MYFOLIO")
cb1 = ClipBook.ClipBook("CB1")
cb2 = ClipBook.ClipBook("CB2")

n1 = Node.Node("n1", "d1")
n2 = Node.Node("n2", "d2")
n3 = Node.Node("n3", "d3")
n4 = Node.Node("n4", "d4")

n5 = Node.Node("n5", "d5")
n6 = Node.Node("n6", "d6")
n7 = Node.Node("n7", "d7")
n8 = Node.Node("n8", "d8")

cb1.addNode(n1)
cb1.addNode(n2)
cb1.addNode(n3)
cb1.addNode(n4)

cb2.addNode(n5)
cb2.addNode(n6)
cb2.addNode(n7)
cb2.addNode(n8)

folio.addBook(cb1)
folio.addBook(cb2)

f = open("out.pickle","w")
p = pickle.Pickler(f, True)
p.dump(folio)
f.close()

#xmlxpt = ExportToXML.ExportToXML("out.xml")
#xmlxpt.writeFolio(folio)
#xmlxpt.finish()

#txtxpt = ExportToText.ExportToText("out.txt")
#txtxpt.writeFolio(folio)
#txtxpt.finish()

#texxpt = ExportToTex.ExportToTex("out.tex")
#texxpt.writeFolio(folio)
#texxpt.finish()