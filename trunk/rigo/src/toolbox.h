/***************************************************************************
 *   Copyright (C) 2005 by Siafu86   *
 *   siafu86@rigo.berlios.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef STDTOOLBOX_H
#define STDTOOLBOX_H
#include <iostream>
#include <string>
#include <fstream>
//#include <gzip>
#include "note.h"
#include "source.h"
#include "topic.h"
#include "notebook.h"


namespace std {
//to be redefined later
typedef string Document;
//End redefinition
/**
@author Siafu86
*/
class Toolbox{
public:
    Toolbox();
	
	~Toolbox();
	/*
	void save(Notebook myBook, string filename);
	
	fstream open(string filename);
	
	void writeOutline(string filetype, int style);
	
	void Recover();
	
	void import(Notebook aNotebook);
	
	void import(Document aPaper);
	
	void writeCompilation(string filetype, int style);

*/
};
}
#endif
