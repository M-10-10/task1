#pragma once
#include <iostream>
using namespace std;
class Set
{
	string s;
	int n;
public:
	Set();
	Set(int n)
	{
		this->n = n;
	}
	void add(string x);
	void print();
	void in_file();
	bool check(string x, string s);
	void operator +(Set);
	void operator *(Set);
	void operator -(Set);

};