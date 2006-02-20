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
		
		xmlDoc writeToXml(){
			xmlDoc tempDoc = "<NoteTitle>"+title+"</NoteTitle>";
			tempDoc += "<NoteQuote>"+quote+"</NoteQuote>";
			return tempDoc;
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
		
		xmlDoc writeToXml(){
			xmlDoc tempDoc = "<TopicTitle>"+title+"</TopicTitle>";
			for(unsigned int i = 0; i < noteV.size(); i++){
			/** i is the index of the vector*/
				tempDoc += getNote(i).writeToXml();
			}
			return tempDoc;
		}
		
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
		
		Note getNote(int index){
			return noteV.at(index);
			
		}
		
	private:
		string title;
		vector<Note> noteV;
	};
	
class Source {
	public:
		Source(string aTitle){
			title = aTitle;
			topicV.reserve(5);
		}
		
		xmlDoc writeToXml(){
			xmlDoc tempDoc = "<SourceTitle>"+title+"</SourceTitle>";
			for(unsigned int i = 0; i < topicV.size(); i++){
			/** i is the index of the vector*/
				tempDoc += getTopic(i).writeToXml();
			}
			return tempDoc;
		}
		
		string toString(){
			/**grabs the titles of all the Topics contained in its
			* Vector.
			*/
			string tempString = NULL;
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
		NoteBook(string aTitle){
			title = aTitle;
			sourceV.reserve(5);
			dirtyFlag = 0;
			autosaveTime = 0;
			defaultStyle = "MLA";
			
		}
		
		void addSource(Source aSource){
			sourceV.push_back(aSource);
		}
		
		xmlDoc writeToXml(){
			xmlDoc tempDoc = "<NoteBook>";
			for(unsigned int i = 0; i < sourceV.size(); i++){
			/** i is the index of the vector*/
				tempDoc += getSource(i).writeToXml();
			}
			tempDoc += "</NoteBook>";
			return tempDoc;
		}
			
		Source getSource(int index){
			return sourceV.at(index);
		}
			
	private:
		vector<Source> sourceV;
		string title;
	protected:
		bool dirtyFlag;
		int autosaveTime;
		string defaultStyle;
	
	};
	
int main(){
	
	
	
	return 0;
	}
