//#include "mondrian.xpm"
#include "wx/wx.h"

class MyApp : public wxApp
{
	public:
	//Called on application startup
		virtual bool OnInit();
		
};

class MyFrame : public wxFrame
{
	public:
		//Constructor
		MyFrame(const wxString& title);
		
		//Event Handlers
		void OnQuit(wxCommandEvent& event);
		void OnAbout(wxCommandEvent& event);
		void OnSize(wxSizeEvent& event);
		void OnButtonOK(wxCommandEvent& event);
		
	private:
		//This class handles events
		DECLARE_EVENT_TABLE()
		
};

//Implements MyApp& GetApp()
DECLARE_APP(MyApp)

//Give wxWidgets the means to create a myApp object
IMPLEMENT_APP(MyApp)

//Initalize the aplication
bool MyApp::OnInit()
{
	//Create the main applicaton window
	MyFrame *frame = new MyFrame(wxT("Minimal wxWidgets App"));
	
	//Show it
	frame -> Show(true);
	
	//Strart the event loop
	return true;
}

//Event Table for MyFrame
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
	EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
	EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
	//EVT_SIZE(MYFRAME::OnSize)
	EVT_BUTTON(wxID_OK, MyFrame::OnButtonOK)
END_EVENT_TABLE()

void MyFrame::OnAbout(wxCommandEvent& event)
{
	wxString msg;
	msg.Printf(wxT("Hello and Welcome to %s"), wxVERSION_STRING);
	
	wxMessageBox(msg, wxT("About Minimal"), wxOK | wxICON_INFORMATION, this);
	
}

void MyFrame::OnQuit(wxCommandEvent& event)
{
	//Destroy the frame
	Close();
}

void MyFrame::OnButtonOK(wxCommandEvent& event)
{
	//Destroy the frame
	Close();
}

MyFrame::MyFrame(const wxString& title)
		:wxFrame(NULL, wxID_ANY, title)
{
	//Set the frame icon
	//SetIcon(wxIcon(mondrian_xpm));
	
	//Create a menu bar
	wxMenu *fileMenu = new wxMenu;
	//Create a button
	wxButton* button = new wxButton(this, wxID_OK, wxT("OK"), wxPoint(200,200));
	
	//The "About item should be in the help menu
	wxMenu *helpMenu = new wxMenu;
	helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"),
								wxT("Show about dialog"));
	
	fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-X"),
								wxT("Quit this Program"));
	
	//Now append the freshly created menu to the menu bar...
	wxMenuBar *menuBar = new wxMenuBar();
	menuBar->Append(fileMenu, wxT("&File"));
	menuBar->Append(helpMenu, wxT("&Help"));
	
	//and attach this bar to the frame
	SetMenuBar(menuBar);
	
	//Create a status bar just for fun
	CreateStatusBar(2);
	SetStatusText(wxT("Welcome to wxWidgets!"));
	
}
