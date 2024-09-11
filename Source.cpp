
#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;

void Set::add(string x)
{
	Set d;
	d.s = x;
}
bool Set::check(string x, string s)
{
	for (int i = 0; i < n; i++)
		if (s == x)
			return true;
	return false;
}
void Set::print()
{
	for (int i = 0; i < n; i++) cout << s << " ";
	cout << endl;
}
void Set::operator +(Set l2)
{
	Set l3;
	int i, j, k;
	i = j = k = 0;
	for (k=0;i < n;) l3.s[k++] = s[i++];
	for (k;j < l2.n;)
	{
		if (!check(l2.s, l3.s))
		{
			l3.s[k++] = l2.s[i++];
		}
		else
			j++;
	}		
	
	cout << "+:";
	l3.n = k;
	l3.print();

}

void Set::operator -(Set l2)
{
	Set l3;
	int i, j, k;
	i = j = 0;
	for (k = 0;(i < n) && (j < l2.n);)
	{
		if (!check(s, l2.s))
		{
			l3.s[k++] = l2.s[i++];
		}
		else
			i++;
		j++;
	}
	cout << "-: ";
	l3.n = k;
	l3.print();

}
																																																																																			
void Set::operator *(Set l2)
{
	Set l3;
	int i, j, k;
	i = j = 0;
	for (k = 0;(i < n) && (j < l2.n);)
	{
		if (!check(s, l2.s))
		{
			l3.s[k++] = s[i];
			k++;
			i++;
		}
		else
			i++;
		j++;
	}
	cout << "*: ";
	l3.n = k;
	l3.print();
	l3.in_file();
}
void Set::in_file()
{
	ofstream fin("rez.txt");
	for (int i = 0;i < n;i++)
		fin << s << " ";
	fin.close();
}