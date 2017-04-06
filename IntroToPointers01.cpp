#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input = "";
	string bookTitle = "";
	int yearPublished;
	string *bookTitlePtr;
	int *yearPublishedPtr;

	bookTitlePtr = &bookTitle;//& is called "the address of Operator"
	yearPublishedPtr = &yearPublished;

	
	/*//Output test. See that the ptrs spit out hexadecimal location of variables, and not the variables themselves.
	cout << bookTitle<<", " <<yearPublished<<endl;
	cout << bookTitlePtr<<endl;
	cout << yearPublishedPtr<<endl;
	*/

	//cout << "Type the book title: ";
	//getline(cin, bookTitle);
	//cout << "Type the year published: ";
	//cin >> yearPublished;

	//cout << endl;
	////This is the clear way of doing things
	//cout << "Book title: " << bookTitle<<endl;
	//cout << "\tYear published: " << yearPublished << endl;


	cout << "What is the book title: ";
	getline(cin, *bookTitlePtr);
	cout << "Type the year pubished: ";
	cin >> *yearPublishedPtr;

	cout << "Book title: " << *bookTitlePtr << endl;
	cout << "Year published: " << *yearPublishedPtr << endl;

	cout << "Book title address: " << bookTitlePtr << endl;
	cout << "Year published address: " << yearPublishedPtr << endl;




	system("pause");
	return 0;
}