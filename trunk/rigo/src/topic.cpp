/***************************************************************************
 *   Copyright (C) 2005 by Siafu86                                         *
 *   siafu86@rigo.berlios.de                                               *
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
#include "topic.h"

namespace std {

Topic::~Topic()
{
}

	Topic::Topic(string aTitle){
		title = aTitle;
		noteV.reserve(10);
	}
		
	Note Topic::getNote(int index){
			return noteV.at(index);
			
		}	
		
	xmlDoc Topic::writeToXml(){
		xmlDoc tempDoc = "<TopicTitle>"+title+"</TopicTitle>";
		for(unsigned int i = 0; i < noteV.size(); i++){
		/** i is the index of the vector*/
			tempDoc += getNote(i).writeToXml();
		}
		return tempDoc;
	}
		
	string Topic::toString(){
		string tempString;
		for(unsigned int i=0; i < noteV.size(); i++){
			tempString += "Title: ";
			tempString += noteV.at(i).getTitle()+"\n";
			tempString += "Quotation: ";
			tempString += noteV.at(i).getQuote()+"\n";
			
		}
		return tempString;
	}
		
	void Topic::addNote(Note aNote){
		noteV.push_back(aNote);
	}
		
	bool Topic::rmNoteByTitle(string aTitle){
		/** attempts to search to a given Title and
		* if found deletes the Note from the vector
		*
		* @returns 0 for success
		* @returns 1 for Fail
		*/
		vector<Note>::iterator vIter;
		string tempTitle;
		for(vIter=noteV.begin(); vIter < noteV.end(); ++vIter){
			
			tempTitle = vIter->getTitle();
			
			if (tempTitle == aTitle){
				noteV.erase(vIter);
				return 0;
			}
		}
		return 1;
	}
		
	string Topic::getTitle(){
			return title;
		}
		
	
	};