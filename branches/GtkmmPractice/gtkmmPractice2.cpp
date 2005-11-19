#include <gtkmm/main.h>
#include <gtkmm/window.h>

int main(int argc, char* argv[]){
	
	Gtk::Main kit (argc, argv);
	Gtk::Window win;
	
	win.set_title("Hello Jeremy");
	win.destroy.connect(Gtk::Main::quit.slot());
	win.show();
	kit.run();
	
	return 0;
	
}