#include<iostream>
#include<string>
using namespace std;

void removeVowels(string wordPar);

int main()
{
	string userString;//Update to getline instead.
	cout << "What string do you want to remove the vowels: ";
	cin >> userString;
	removeVowels(userString);
	cout << endl;
	system("pause");
	return 0;
}

void removeVowels(string wordPar)
{
	int lengthOfString = wordPar.size();
	string firstLetter = "";
	if (lengthOfString>0)
	{
		firstLetter = wordPar.substr(0, 1);//Starting position is zero the length is one character
		if (firstLetter == "a" || firstLetter == "A" || firstLetter == "e" || firstLetter == "E" || firstLetter == "I" || firstLetter == "i" || firstLetter == "o" || firstLetter == "O" || firstLetter == "u" || firstLetter == "U")
		{
			removeVowels(wordPar.substr(1, lengthOfString - 1));
		}
		else
		{
			cout << firstLetter;
			removeVowels(wordPar.substr(1, lengthOfString - 1));
		}
	}
}