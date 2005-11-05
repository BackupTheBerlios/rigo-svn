#include "myconst.h"
#include <iostream>
#include <string>



using namespace std;


class Note{
	
	public:
	
		Note()
		{
			this->itsQuote = "NO_QUOTE";	
		}
	
		void chng_name(string new_name)
		{
			itsQuote = new_name;
		}
		
		string to_string()
		{
			return itsQuote;
		}
	
		string get_name()
		{
			return this->itsQuote;
		}
		
	private:
		string itsQuote;
		
};


