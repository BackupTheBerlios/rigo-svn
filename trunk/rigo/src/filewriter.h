/***************************************************************************
 *   Copyright (C) 2005 by Jeremy W   					   *
 *   siafu86@rigo.berlios.de   						   *
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
#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <string>
#include <fstream>



namespace std{
	typedef string xmlDoc;
class FileWriter{
	public:
		FileWriter(string aFilename);
		
		virtual void writeFile(xmlDoc writeMe);
		
	private:
		
	protected:
		void write(string writeThis);
		
		string filename;
		
		
		
		

};

/*class Latex{
	
};*/

class HTML:public FileWriter{
	public:
		void writeFile(xmlDoc writeMe);
	private:
		xmlDoc htmlDocument;
};

/*class PDF:public FileWriter{
	
};*/

}
#endif