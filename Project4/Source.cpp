#include"Dictionary.h"
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int menu = 0;
	string str1, str2;
	Dictionary arr;
	do
	{
		cout << "1 - Show\n";
		cout << "2 - Search\n";
		cout << "3 - Add\n";
		cout << "4 - Remove\n";
		cout << "5 - Edit\n";
		cout << "0 - Save\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
			arr.show();
			break;
		case 2: 
			cout << "Enter word:\n";
			cin >> str1;
			arr.search(str1);
			break;
		case 3: 
			cout << "Enter word in en:\n";
			cin >> str1;
			cout << "Enter word in ru:\n";
			cin >> str2;
			arr.addWord(str1, str2);
			break;
		case 4:
			cout << "Enter word in en:\n";
			cin >> str1;
			arr.remove(str1);
			break;
		case 5: 
			cout << "Enter word in en:\n";
			cin >> str1;
			cout << "Enter word in ru:\n";
			cin >> str2;
			arr.edit(str1, str2);
			break;
		}
	} while (menu != 0);
}