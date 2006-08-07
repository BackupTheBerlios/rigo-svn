/////////////////////////////////////////////////////////////////////////////
// Name:        rigo.cpp
// Purpose:     
// Author:      Jeremy W
// Modified by: 
// Created:     07/17/06 22:30:36
// RCS-ID:      
// Copyright:   Copyright (C) 2006
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma implementation "rigo.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "rigo.h"

////@begin XPM images
////@end XPM images

/*!
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( RigoApp )
////@end implement app

/*!
 * RigoApp type definition
 */

IMPLEMENT_CLASS( RigoApp, wxApp )

/*!
 * RigoApp event table definition
 */

BEGIN_EVENT_TABLE( RigoApp, wxApp )

////@begin RigoApp event table entries
    EVT_IDLE( RigoApp::OnIdle )

////@end RigoApp event table entries

END_EVENT_TABLE()

/*!
 * Constructor for RigoApp
 */

RigoApp::RigoApp()
{
////@begin RigoApp member initialisation
////@end RigoApp member initialisation
}

/*!
 * Initialisation for RigoApp
 */

bool RigoApp::OnInit()
{    
////@begin RigoApp initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler( new wxXPMHandler );
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler( new wxPNGHandler );
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler( new wxJPEGHandler );
#endif
#if wxUSE_GIF
    wxImage::AddHandler( new wxGIFHandler );
#endif
    rigoMainFrame* mainWindow = new rigoMainFrame( NULL, Rigo );
    mainWindow->Show(true);
////@end RigoApp initialisation

    return true;
}

/*!
 * Cleanup for RigoApp
 */
int RigoApp::OnExit()
{    
////@begin RigoApp cleanup
    return wxApp::OnExit();
////@end RigoApp cleanup
}

/*!
 * wxEVT_IDLE event handler
 */

void RigoApp::OnIdle( wxIdleEvent& event )
{
////@begin wxEVT_IDLE event handler in RigoApp.
    // Before editing this code, remove the block markers.
    event.Skip();
////@end wxEVT_IDLE event handler in RigoApp. 
}


