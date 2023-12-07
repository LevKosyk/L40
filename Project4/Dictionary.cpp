#include "Dictionary.h"

Dictionary::Dictionary()
{
	ifstream file("words.txt");
	if (file.is_open())
	{
		string s1, s2;
		while (!file.eof())
		{
			getline(file, s1);
			getline(file, s2);
			if (s1.empty()||s2.empty())
			{
				continue;
			}
			en_ru[s1] = s2;
		}
		file.close();
	}
}

Dictionary::~Dictionary()
{
	ofstream file("words.txt");
	if (file.is_open())
	{
		for (auto it : en_ru) {
			file << it.first << endl;
			file << it.second << endl;
		}
		file.close();
	}
}

void Dictionary::search(string word) const
{
	for (auto it : en_ru)
	{
		if (it.first == word || it.second == word)
		{
			cout << "EN: " << it.first << endl;
			cout << "RU: " << it.second << endl;
			return;
		}
	}
	cout << "Is not exist\n";
}

void Dictionary::show() const
{
	for (auto it : en_ru) {
		cout << "EN: " << it.first << endl;
		cout << "RU: " << it.second << endl;
		cout << endl;
	}
}

void Dictionary::addWord(string en, string ru)
{
	en_ru[en] = ru;
}

void Dictionary::remove(string en)
{

	en_ru.erase(en);

}

void Dictionary::edit(string en, string ru)
{
	en_ru[en] = ru;
}
