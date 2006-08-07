
#ifndef _RIGO_H_
#define _RIGO_H_
#include <string>



/**
 * @short Application Main Window
 * @author Siafu86 <siafu86@rigo.berlios.de>
 * @version 0.1
 */

class 
Rigoapp : public wxApp
{
	public:
		virtual bool OnInit();
};

class 
RigoFrame : public wxFrame
{
	public:
		RigoFrame( const wxString& title, const wxPoint& pos, const wxSize& pos );
		void OnQuit( wxCommandEvent& event );
		void OnAbout( wxCommandEvent& event );

	private:
		DECLARE_EVENT_TABLE()
};

enum
{
	Menu_File_Quit = 100,
	Menu_File_About
};

#endif // _RIGO_H_
