#include <gtkmm.h>
#include <libglademm.h>

int main(int argc, char* argv[]){
	
	GLib::RefPtr<Gnome::Glade::Xml> refXml = Gnome::Glade::Xml::create("../../trunk/RigoUI/rigoui.glade");
	
	return 0;
	
}