/////////////////////////////////////////////////////////////////////////////
// Name:        rigo.h
// Purpose:     
// Author:      Jeremy W
// Modified by: 
// Created:     07/17/06 22:30:36
// RCS-ID:      
// Copyright:   Copyright (C) 2006
// Licence:     GPL v2
/////////////////////////////////////////////////////////////////////////////

#ifndef _RIGO_H_
#define _RIGO_H_

#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface "rigo.cpp"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "mainFrame.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * RigoApp class declaration
 */

class RigoApp: public wxApp
{    
    DECLARE_CLASS( RigoApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    RigoApp();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin RigoApp event handler declarations

    /// wxEVT_IDLE event handler for ID_UNIDENTIFIED
    void OnIdle( wxIdleEvent& event );

////@end RigoApp event handler declarations

////@begin RigoApp member function declarations

////@end RigoApp member function declarations

////@begin RigoApp member variables
////@end RigoApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(RigoApp)
////@end declare app

#endif
    // _RIGO_H_
