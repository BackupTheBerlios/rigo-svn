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
#include "filewriter.h"
namespace std{
FileWriter::FileWriter(string aFilename)
{
	filename = aFilename;
}

/*FileWriter::writeFile(string writeThis)
{
	ofstream myfile;
	myfile.open(filename);
	myfile << writeThis;
	myfile.close();
}*/ 

HTML::writeFile(xmlDoc writeMe)
{
	htmlDocument = "<html>";
	
	//parse out the xml elements 
	
	//Write the elements to htmlDocument 
	
	htmlDocument += "</html>";
	
	//write xmlDoc to the filename. 
	write(htmlDocument);
	
	
}
}
