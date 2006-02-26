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
#ifndef STDNOTEBOOK_H
#define STDNOTEBOOK_H
#define NEWLINE \n
#include "note.h"
#include "topic.h"
#include "source.h"
#include <string>
#include <vector>
#include <iostream>




namespace std {
typedef string xmlDoc;
/**
@author Siafu86
*/
class Notebook{
public:
		Notebook(string aTitle);
		
		~Notebook();
		
		void addSource(Source aSource);
		
		xmlDoc writeToXml();
		
		Source getSource(int index);
	private:
		vector<Source> sourceV;
		string title;
	protected:
		bool dirtyFlag;
		int autosaveTime;
		string defaultStyle;
	
};

}

#endif
