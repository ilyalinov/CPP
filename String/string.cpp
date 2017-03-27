#include <iostream>

class String 
{
	char* p;
	int len;

public:
	String (const char* s = "")
	{
		len = strlen(s);
		p = new char[len + 1];
		strcpy_s(p, len + 1, s);
	}	String& operator=(const String& from)
	{
		len = from.len;
		char* p1 = new char[len + 1];
		strcpy_s(p1, len + 1, from.p);
		delete [] p;
		p = p1;
		return *this;
	}	String (const String& from) : len(from.len)
	{
		p = new char[len + 1];
		strcpy_s(p, len + 1, from.p);
	}	void print() const	{		char* temp = p;		while (*temp != '\0')		{			std::cout << *temp;			temp++;		}		std::cout << std::endl;	}	String& operator+=(const String& from)	{		char* temp = new char[len + from.len + 1];		for (int i = 0; i < len; i++)		{			temp[i] = p[i];		}		for (int i = 0; i < from.len; i++)		{			temp[i + len] = from.p[i];		}		temp[len + from.len] = '\0';		len = len + from.len + 1;		delete[] p;		p = temp;		return *this;	}	~String ()
	{
		delete[] p;
	}};void main(){	String s1 = "abc";	String s2 = "qwe";	s1.print();	s2.print();	s1 += s2;	s1.print();}