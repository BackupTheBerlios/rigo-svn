import Node, ClipBook, Folio
import Export, ExportToXML, ExportToText, ExportToTex
import pickle

f = open("out.pickle","r")
u = pickle.Unpickler(f)
folio = u.load()
f.close()

xmlxpt = ExportToXML.ExportToXML("out-pickle.xml")
xmlxpt.writeFolio(folio)
xmlxpt.finish()
