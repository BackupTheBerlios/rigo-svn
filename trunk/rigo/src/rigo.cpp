#include <wx/wx.h>
#include "rigo.h"

BEGIN_EVENT_TABLE( RigoFrame, wxFrame )
	EVT_MENU( Menu_File_Quit, RigoFrame::OnQuit )
	EVT_MENU( Menu_File_About, RigoFrame::OnAbout )
END_EVENT_TABLE()

IMPLEMENT_APP(Rigoapp)
	

bool 
Rigoapp::OnInit()
{
	RigoFrame *frame = new RigoFrame( wxT( ".:R.I.G.O.:." ), wxPoint(50,50), wxSize(450,340) );

	frame->Show(TRUE);
	SetTopWindow(frame);
	return TRUE;
} 

RigoFrame::RigoFrame( const wxString& title, const wxPoint& pos, const wxSize& size )
	: wxFrame((wxFrame *)NULL, -1, title, pos, size)
{
	wxMenu *menuFile = new wxMenu;
	
	menuFile->Append( Menu_File_About, wxT( "&About..." ) );
	menuFile->AppendSeparator();
	menuFile->Append( Menu_File_Quit, wxT( "E&xit" ) );
	
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append( menuFile, wxT( "&File" ) );
	
	SetMenuBar( menuBar );
	
	CreateStatusBar();
	SetStatusText( wxT( "Welcome to Rigo" ) );
}

void 
RigoFrame::OnQuit( wxCommandEvent& WXUNUSED( event ) )
{
	Close(TRUE);
}

void 
RigoFrame::OnAbout( wxCommandEvent& WXUNUSED( event ) )
{
	SetStatusText( wxT("The Open Research Suite"));
	wxMessageBox( wxT( "Rigo: Research Information Gathering Optimizer" ),
			wxT( "Rigo" ), wxOK | wxICON_INFORMATION, this );
	
}
