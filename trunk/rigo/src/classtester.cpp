
#include <iostream>
#include "note.h"
#include "topic.h"
#include "notebook.h"
#include "source.h"
#include "toolbox.h"
using namespace std;



int main(){
	//Create a new notebook
	Notebook* LinuxTest = new Notebook("LinuxTest");
	
	//Create 4 new sources
	Source* source1 = new Source("Source 1");
	Source* source2 = new Source("Source 2");
	Source* source3 = new Source("Source 3");
	Source* source4 = new Source("Source 4");
	
	//Create 4 new topics
	Topic* topic1 = new Topic("Topic 1");
	Topic* topic2 = new Topic("Topic 2");
	Topic* topic3 = new Topic("Topic 3");
	Topic* topic4 = new Topic("Topic 4");
	
	//Create 16 new notes
	Note* note1 = new Note("Note 1", "Linux Test 1");
	Note* note2 = new Note("Note 2", "Linux Test 2");
	Note* note3 = new Note("Note 3", "Linux Test 3");
	Note* note4 = new Note("Note 4", "Linux Test 4");
	Note* note5 = new Note("Note 5", "Linux Test 5");
	Note* note6 = new Note("Note 6", "Linux Test 6");
	Note* note7 = new Note("Note 7", "Linux Test 7");
	Note* note8 = new Note("Note 8", "Linux Test 8");
	Note* note9 = new Note("Note 9", "Linux Test 9");
	Note* note10 = new Note("Note 10", "Linux Test 10");
	Note* note11 = new Note("Note 11", "Linux Test 11");
	Note* note12 = new Note("Note 12", "Linux Test 12");
	Note* note13 = new Note("Note 13", "Linux Test 13");
	Note* note14 = new Note("Note 14", "Linux Test 14");
	Note* note15 = new Note("Note 15", "Linux Test 15");
	Note* note16 = new Note("Note 16", "Linux Test 16");
	
	//Add the notes to the topics
	topic1->addNote(*note1);
	delete note1;
	topic1->addNote(*note2);
	delete note2;
	topic1->addNote(*note3);
	delete note3;
	topic1->addNote(*note4);
	delete note4;
	
	topic2->addNote(*note5);
	delete note5;
	topic2->addNote(*note6);
	delete note6;
	topic2->addNote(*note7);
	delete note7;
	topic2->addNote(*note8);
	delete note8;
	
	topic3->addNote(*note9);
	delete note9;
	topic3->addNote(*note10);
	delete note10;
	topic3->addNote(*note11);
	delete note11;
	topic3->addNote(*note12);
	delete note12;
	
	topic4->addNote(*note13);
	delete note13;
	topic4->addNote(*note14);
	delete note14;
	topic4->addNote(*note15);
	delete note15;
	topic4->addNote(*note16);
	delete note16;
	//Add the topics to the sources
	source1->addTopic(*topic1);
	delete topic1;
	source2->addTopic(*topic2);
	delete topic2;
	source3->addTopic(*topic3);
	delete topic3;
	source4->addTopic(*topic4);
	delete topic4;
	//Add the sources to the notebook
	LinuxTest->addSource(*source1);
	delete source1;
	LinuxTest->addSource(*source2);
	delete source2;
	LinuxTest->addSource(*source3);
	delete source3;
	LinuxTest->addSource(*source4);
	delete source4;
	//Export it.
	cout << LinuxTest->writeToXml();
	
	cout << "Finished" << endl;
	return 0;
}
