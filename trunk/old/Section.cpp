#include "myconst.h"
#include <iostream>
#include <string>
#include <vector>
#include "Note.cpp"

using namespace std;


class Section{
	
	public:
	
		Section()
		{
			itsTitle = "NO_TITLE";	
		}
	
		void chng_name(string new_name)
		{
			itsTitle = new_name;
		}
		
		string to_string()
		{//prints its title
		//prints calls to_string on each note
			string section_s;
			string temp;
			//cout << "Size of Vector is" << note_v.size();
			section_s = (itsTitle + NEWLINE);
			for(unsigned int j=0; j < note_v.size(); j++)
			{
				temp = note_v.at(j).to_string();
				section_s.append(temp);
			}
			return section_s;
				
		}
	
		bool add_Note(Note to_connect)
		{
			note_v.push_back(to_connect);
			return 1; 
		}
		
		vector<Note> get_sections()
		{
			return note_v;
		}
	
		string get_name()
		{
			return this->itsTitle;
		}
		
	private:
		string itsTitle;
		vector<Note> note_v;
		
};
