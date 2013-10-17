// Data Structures 2 - 150090.01.5774.12
// Targil 1 - Trees
//
// Authors: 
//		Dvir Gantz (300852431)
//		Daniel Tal Or (330970591)

#include "stdafx.h"
#include "Library.h"


int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"What is the name of the library?" << endl;
	Library lib;
	string location, name;
	char choice;
	do{
		system("CLS"); // clear screen
		cout << "====== Library \"" << lib.getName() <<"\" interface ======" << endl;
		cout << "Please choose one of the following options:" << endl;
		cout << "1 Add a subject" << endl;
		cout << "2 Add an book" << endl;
		cout << "3 Remove a book" << endl; 		
		cout << "4 Print all books in library" << endl; 
		cout << "5 Print all books in subject" << endl;
		cout << "6 Print subjects of a book" << endl;
		cout << "e Exit" << endl;
		
		choice = cin.get();
		cin.ignore(); // to flush the cin stream
		system("CLS"); // clear screen

		switch (choice)
		{
		case '1':
			cout << "====== Adding subject to library \"" << lib.getName() <<"\" ======" << endl;
			cout << "Please enter the name of parent subject (or leave blank to add a main subject):" << endl;
			getline(cin,location);
			lib.addSubject(location);
			break;
		case '2':
			cout << "====== Adding book to library \"" << lib.getName() <<"\" ======" << endl;
			cout << "Please enter the name of parent subject:" << endl;
			getline(cin,location);
			if(lib.getName()==location || location == "")
			{
				cout<<"ERROR: Cannot add book to top level!" << endl;
				system("pause");
				break;
			}
			lib.addBook(location);
			break;
		case '3':
			cout << "====== Removing book from library \"" << lib.getName() <<"\" ======" << endl;
			cout << "Please enter the name of the book you would like to remove:" << endl;
			getline(cin,name);
			lib.deleteBook(name);
			break;
		case '4':
			cout << "====== Printing all books in library \"" << lib.getName() <<"\" ======" << endl;
			lib.printAll();
			system("pause");
			break;
		case '5':
			cout << "====== Printing all books in subject ======" << endl;
			cout << "Please enter subject you would like to print:"<< endl;
			getline(cin,name);
			lib.printSubject(name);
			system("pause");
			break;
		case '6':
			cout << "====== Printing subjects of a book ======" << endl;
			cout << "Please enter the name of the book you would like to print the subjects of:"<< endl;
			getline(cin,name);
			lib.printBook(name);
			system("pause");
			break;
		case 'e': 
			break;
		}
	}
	while (choice!='e');

	return 0;
}

