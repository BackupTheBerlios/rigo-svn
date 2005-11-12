#include <string>
#include <iostream>
#include <vector>


using namespace std;
typedef string xmlDoc;
//template <vector noteV>;
//template <vector topicV>;

class Note {
	public:
		string getTitle(){
			return title;
		}
		
		string getQuote(){
			return quote;
		}
		
		Note(string newtitle, string newquote){
			//Note = new Note;
			title = newtitle;
			quote = newquote;
		}
			
	private:
		string title;
		string quote;
};
	
class Topic {
	public:
		Topic(string aTitle){
			title = aTitle;
			noteV.reserve(10);
		}
		
		/*~Topic(){
			noteV.~vector<Note>();
		}*/
		
		string toString(){
			string tempString;
			for(unsigned int i=0; i < noteV.size(); i++){
				tempString += "Title: ";
				tempString += noteV.at(i).getTitle()+"\n";
				tempString += "Quotation: ";
				tempString += noteV.at(i).getQuote()+"\n";
				
			}
			return tempString;
		}
		
		void addNote(Note aNote){
			noteV.push_back(aNote);
		}
		
		bool rmNoteByTitle(string aTitle){
			/** attempts to search to a given Title and
			* if found deletes the Note from the vector
			*
			* Return 0 for success
		 	* Return 1 for Fail
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
		
		string getTitle(){
			return title;
		}
		
		string getNote(int index){
			return noteV.at(index);
			
		}
		
	private:
		string title;
		vector<Note> noteV;
	};
	
class Source {
	public:
		Source(aTitle){
			title = aTitle;
			topicV.reserve(5);
		}
		
		string toString(){
			/**grabs the titles of all the Topics contained in its
			* Vector.
			*/
			string tempString = null;
			for(unsigned int i=0; i < topicV.size(); i++){
				tempString += topicV.at(i).getTitle()+", ";
			}
			return tempString;
		}
		
		void addTopic(Topic aTopic){
			topicV.push_back(aTopic);
		}
	
		bool rmTopicByTitle(string aTitle){
			/** attempts to search to a given Title and
			* if found deletes the Topic from the vector
			*
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
	
		Topic getTopic(int index){
			return topicV.at(index);
			
		}
		
		string getTitle(){
			return title;
		}
		
	private:
		vector<Topic> topicV;
		string title;
		
	};
	

class NoteBook{
	public:
		NoteBook(aTitle){
			title = aTitle;
			sourceV.reserve(5);
		}
		
		void addSource(Source aSource){
			sourceV.push_back(aSource);
		}
		
		xmlDoc writeToXml(){
			/**calls get"Item" on each element recursivly, starting at Source 0
			* grabs Topic 0, then all Notes within it, then Topic 1 and all Notes within it...
			*/
			
			xmlDoc tempDoc = "<title>"+title+"</title>";
			
			string tempString = null;
			Source tempSource = new Source("null");
			Topic  tempTopic  = new Topic("null");
			
			for(unsigned int i=0; i < sourceV.size(); i++){
				//Get Source Title 0
				tempDoc += "<SourceTitle>"+sourceV.at(i).getTitle()+"</SourceTitle>";
				//Get Topic 0
				tempDoc += "<TopicTitle>"+sourceV.at(i).getTopic(i).getTitle()+"</TopicTitle>";
				for(unsigned int j=0; j < sourceV.at(i).getTopic(i).topicV.size(); j++){
					tempDoc += "<NoteTitle>"+sourceV.at(i).getTopic(i).getNote(j).getTitle()+"</NoteTitle>";
					tempDoc += "<NoteQuote>"+sourceV.at(i).getTopic(i).getNote(j).getQuote()+"</NoteQuote>";
				}
			
			}
			return tempDoc;
		}
			
			
	private:
		vector<Source> sourceV;
		string title;
	
	
	};
	
int sourceTest(){
	Source myBook;
	Note myQuote("My Note Title", "My Quote");
	Note my2Quote("My Note2", "My Quote2");
	Note my3Quote("My Note3", "My Quote3");
	Topic mySection("My Topic Title");
	Topic my2Section("My Topic 2");
	Topic my3Section("My Topic 3");
	
	Test Section
	//Note Tester
	cout << "My Note's Quote is: " << myQuote.getQuote() << endl;
	cout << "My Note's Title is: " << myQuote.getTitle() << endl;
	cout << "End of Note Test section" << endl << endl;
	//Source Tester
	mySection.addNote(myQuote);
	my2Section.addNote(my2Quote);
	my3Section.addNote(my3Quote);
	
	cout << "My Topic Test: " << mySection.toString() << endl;
	
	myBook.addTopic(mySection);
	myBook.addTopic(my2Section);
	myBook.addTopic(my3Section);
	cout << "My Source contains: " << myBook.toString() << endl;
	
	cout << mySection.rmNoteByTitle("My Note Title") << endl;
	//cout << "Pause" << endl;
	cout << "My Topic Test: " << mySection.toString() << endl;
	return 0;
}

