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
#include "source.h"

namespace std {

	Source::Source(string aTitle){
			title = aTitle;
			topicV.reserve(5);
		}


	Source::~Source()
	{
	}

	xmlDoc Source::writeToXml(){
			xmlDoc tempDoc = "<SourceTitle>"+title+"</SourceTitle>";
			for(unsigned int i = 0; i < topicV.size(); i++){
			/** i is the index of the vector*/
				tempDoc += getTopic(i).writeToXml();
			}
			return tempDoc;
		}
		
	string Source::toString(){
			/**grabs the titles of all the Topics contained in its
			* Vector.
			*/
			string tempString = NULL;
			for(unsigned int i=0; i < topicV.size(); i++){
				tempString += topicV.at(i).getTitle()+", ";
			}
			return tempString;
		}
		
	void Source::addTopic(Topic aTopic){
			topicV.push_back(aTopic);
		}
	
	bool Source::rmTopicByTitle(string aTitle){
			/** attempts to search to a given Title and
			* if found deletes the Topic from the vector
			*c
			* Return 0 for success
		 	* Return 1 for Fail
			*/
			vector<Topic>::iterator vIter;
			string tempTitle;
			for(vIter=topicV.begin(); vIter < topicV.end(); ++vIter){
				
				tempTitle = vIter->getTitle();
				
				if (tempTitle == aTitle){
					topicV.erase(vIter);
					return 0;
				}
			}
			return 1;
		}
	
	Topic Source::getTopic(int index){
			return topicV.at(index);
			
		}
		
	string Source::getTitle(){
			return title;
		}
	};
