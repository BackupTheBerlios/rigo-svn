/////////////////////////////////////////////////////////////////////////////
// Name:        rigo.cpp
// Purpose:     
// Author:      Jeremy Wright
// Modified by: 
// Created:     Thu 16 Feb 2006 08:06:14 PM PST
// RCS-ID:      
// Copyright:   GPL v2
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

