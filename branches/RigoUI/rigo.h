/////////////////////////////////////////////////////////////////////////////
// Name:        rigo.h
// Purpose:     
// Author:      Jeremy Wright
// Modified by: 
// Created:     Thu 16 Feb 2006 08:06:14 PM PST
// RCS-ID:      
// Copyright:   GPL v2
// Licence:     
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
