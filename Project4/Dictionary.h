#pragma once
#include<map>
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
using namespace std;
class Dictionary
{
	map<string, string> en_ru;
public:
	Dictionary();
	~Dictionary();

	void search(string word)const;
	void show()const;
	void addWord(string en, string ru);
	void remove(string en);
	void edit(string en, string ru);

};

