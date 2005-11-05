#include "myconst.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include "Section.cpp"

using namespace std;


class Notebook{
	
	public:
	
		Notebook()
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
			string notebook_s;
			string temp, temp2;
			//cout << "Size of Vector is" << note_v.size();
			notebook_s = (itsTitle + NEWLINE);
			for(unsigned int i=0; i < section_v.size(); i++)
			{
				temp = section_v.at(i).to_string();
				notebook_s.append(temp);
			}
			return notebook_s;
				
		}
		
		/*string to_string()
		{//prints its title
		//calls to_string on each Section
			string notebook_s = (itsTitle + NEWLINE);
			for(unsigned int i=0; i < section_v.size() + 1; i++)
			{
				notebook_s.append((section_v.at(i)).to_string());
			}
			return notebook_s;
		}*/
	
		bool add_Section(Section to_connect)
		{
			if (section_v.capacity() == 1)
				section_v.resize(section_v.size()+5);
			section_v.push_back(to_connect);	
			return 1;
		}
		
		vector<Section> get_sections()
		{
			return section_v;	
		}
	
		string get_name()
		{
			return this->itsTitle;
		}
		
	private:
		string itsTitle;
		vector<Section> section_v;
		
};

int main()
{
	string name;
	string note;
	string section;
	string notebook;
	string sec_name;
	Notebook my_notebook;
	Section my_section;
	Note my_note;
	
	my_notebook.chng_name("My Notebook");
	my_section.chng_name("My Section");
	my_note.chng_name("This is my quote");
	
	my_notebook.add_Section(my_section);
	my_section.add_Note(my_note);
	
	name = my_notebook.get_name();
	sec_name = my_section.get_name();

	note = my_note.to_string();
	section = my_section.to_string();
	notebook = my_notebook.to_string();
	
	
	cout << "1) My Notebook: " << notebook;
	cout << "2) My NoteBook Name is: " << name << endl;
	cout << "3) My Section Name is: " <<  sec_name << endl;

	cout << "4) My Section Contains: " << section << endl;
	cout << "5) My Note is: " << note << endl; 
	
	
	return 0;
}
	


/*int main() 
{	string name;
	Notebook *my_notebookp;
	my_notebookp = new Notebook("Mine");
	
	name = (*my_notebookp).get_name();
	cout << name;
	
	delete my_notebookp;
	
	return 0;
	
}
*/

