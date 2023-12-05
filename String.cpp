#include "String.h"

//Defult constructor
//we make s(1)

String::String()
{
	data = nullptr;
	size = 0;
}

// s(0)    & s(4)Paramaterize constructor

String::String(char* str)
{
	
	 size=0;
	for (const char* i = str; *i != '\0'; i++)
	{
		size++;
	}

	data = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		data[i] = str[i];
	}
	data[size] = '\0';

}


//Constructs an empty string, with a length of zero characters.
//we make s(2)
String::String(const String & str)
{
	//data = str;  Wrong way


	size=0;
	for (const char* i = str.data; *i != '\0'; i++)
	{
		size++;
	}
	data = new char[size+1];
	for (int i = 0; i < size; i++)
	{
		data[i] = str.data[i];
	}
	data[size] = '\0';
	
}

// we make s(3)
String::String(const String& str, int pos, int len)
{
	
	size = len;
	data = new char[len + 1];
	int k = 0;
	for (int i = pos; i < pos + len; i++)
	{
		data[k] = str.data[i];
		k++;
	}
	data[k] = '\0';

}


// we make s(5)
String::String(const char* s, int n)
{
	
	size= n;
	
	data = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		data[i] = s[i];
	}
	data[size] = '\0';

	
}

//s(6)a & s(b)
String::String(int n, char s)
{
	size = n;

	data = new char[size + 1];

	for (int i = 0; i < size; i++)
	{
		data[i] = s;
	}
	data[size] = '\0';
}

String::String(const char* test){

	size = 0;
	for (const char* i = test; *i != '\0'; i++){
		size++;
	}
	data = new char[size + 1];

	for (int i = 0; i < size; i++){
		data[i] = test[i];
	}
	data[size] = '\0';
}

int String:: length(){
	size = 0;
	for (const char* i = data; *i != '\0'; i++){
		size++;
	}
	return size;
}



// Inside String.cpp, add the following implementation for the substr function
String String::substr(int pos, int len) 
{


	return String(data + pos,len);

}
char String::at(int i)
{
	return data[i];
}



ostream& operator<<(ostream& os, const String& str) {
	for (int i = 0; i < str.size; i++) {
		os << str.data[i];
	}
	return os;
}


String::~String()
{
	delete[] data;
}
