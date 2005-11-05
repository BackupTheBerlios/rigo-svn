extern "C" {
	#include <gtk/gtk.h>
	#include <glib.h>
	#include <glade/glade.h>
	#include <string.h>
	#include <stdlib.h>
}


int main(int argc, char* argv[]){
	
GladeXML* xml;
GtkTextView* text = NULL;
GtkTextBuffer* textBuffer = NULL;
GtkTextIter* endIter = (GtkTextIter*)malloc(sizeof(GtkTextIter));
char* Jeremy = "Jeremy is Bad A$$";
// initialize GTK
gtk_init(&argc, &argv);

// create GUI
xml = glade_xml_new("RigoUI/rigoui.glade", NULL, NULL);
glade_xml_signal_autoconnect(xml);


text = GTK_TEXT_VIEW(glade_xml_get_widget(xml, "textview1"));

textBuffer = gtk_text_view_get_buffer(text);
gtk_text_buffer_get_end_iter(textBuffer, endIter);
	
gtk_text_buffer_insert(textBuffer, endIter , Jeremy, strlen(Jeremy));
	
// start main
gtk_main();

	

	
	
return 0;
}
