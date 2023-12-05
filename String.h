#include<iostream>
using namespace std;
class String
{
private:
	char * data;
	int size;
public:
	String();
	String(char*);
	String(const String&);
	String(const String& , int, int);
	String(const char* , int );
	String(int, char);
	String(const char*);
	int length();
	char at(int i);

	// Inside String.h, add the following declaration in the public section of your class
	String substr(int pos, int len);


	friend ostream& operator<< (ostream& os, const String& str);



	~String();
};

