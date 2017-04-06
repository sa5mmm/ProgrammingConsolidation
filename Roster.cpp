#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool testID(string &IDPar);//Capitalizes and checks for number of characters;
bool testEmail(string &emailPar);//Checks for student email or adds @student.citruscollege.edu to end
bool testName(string &namePar);//Checks that name isn't blank and prompts for name
void setupFile();//There is nothing here, read below on future implementation.

int main()
{
	string fileName = "Orgsync.txt";
	fstream file;//Create the file object so its ready to use.
	file.open(fileName, ios::app | ios::out | ios::in);//The file we are going to save the data to, it will be deleted once entered in orgsync.
	bool moreMembers = true;//This controls the main loop
	bool nameCheck = false;//this controls the get name loop
	bool emailCheck = false;//this controls the get email loop
	bool IDCheck = false;//this controls the get id loop


	string input = "";
	string name = "";
	string ID = "";
	string email = "";

	setupFile();
	while (moreMembers)//Main loop to keep adding members
	{
		emailCheck = false;
		IDCheck = false;//We have to reset these bool values or the next person cannot enter them.
		nameCheck = false;
		while (!nameCheck)//Get Name Loop
		{
			cout << "What is your Full Name: \n";
			getline(cin, input);
			name = input;
			if (name == "false")//This is to break the Main loop, Please don't end the loop unless everybody is done!
			{
				IDCheck = true;
				emailCheck = true;
				moreMembers = false;
				nameCheck = true;
			}
			else
			{
				nameCheck = testName(name);
			}
		}
		while (!IDCheck)//Get ID Loop
		{
			cout << "What is your Student ID: \n";
			getline(cin, input);
			ID = input;
			IDCheck = testID(ID);
		}
		while (!emailCheck)//Get Email Loop
		{
			cout << "What is your Student Email: \n";
			getline(cin, input);
			email = input;
			emailCheck = testEmail(email);
		}
		while (moreMembers)//If name was false this will now not show and it will continue to the end of the program (Might be a more efficient way to end the program, but whatever)
		{
			//Output to the user the information and ask if it is correct. (We might have changed some values!)
			cout << "Just checking that this is correct: \n";
			cout << "Your name is: " << name << endl;
			cout << "Your Student ID is: " << ID << endl;
			cout << "Your Student email is: " << email << endl;
			cout << "Is this correct (Y/N): \n";
			getline(cin, input);
			if (input == "y" | input == "Y")//If it is correct lets put the info into the file.
			{
				file << name << "\t" << ID << "\t" << email << endl;
				//Reset the variables for user privacy.
				name = "";
				ID = "";
				email = "";
				system("CLS");//Clears the screen for privacy.
			}
			else
			{//If information is not correct they need to try again or tell us why.
				cout << "Please try again! Or Contact Sam!\n";
				cout << "Do you want to clear the screen first (Y/N): ";//Ask them if they want to clear the screen for privacy. They might want to see previous information for more information on acceptable input.
				getline(cin, input);
				if (input == "y" | input == "Y")
				{
					system("CLS");
				}
			}
		}
	}


	system("pause");
	return 0;
}

bool testID(string &IDPar)//Tests if your ID has A or C in front of it, if not it propmpts for another.
{
	int pos = 0;
	string firstLetter = IDPar.substr(0, 1);
	if (firstLetter == "a" | firstLetter == "A" | firstLetter == "c" | firstLetter == "C")
	{
		return true;
	}
	else
	{
		cout << "\nMake sure you include A or C in your student ID!\n";
		return false;
	}
}
bool testEmail(string &emailPar)//Adds and checks for @student.citruscollege.edu, if not it prompts for another.
{
	int pos = 0;
	string sub = "";
	pos = emailPar.find('@');
	if (pos == string::npos)
	{
		sub = "";
	}
	else
	{
		sub = emailPar.substr(pos);
	}
	if (sub == "@student.citruscollege.edu")
	{
		return true;
	}
	else if (sub == "")
	{
		emailPar = emailPar + "@student.citruscollege.edu";
		return true;
	}
	else
	{
		cout << "A valid student email ends in @student.citruscollege.edu!\n";
		return false;
	}
}
bool testName(string &namePar)
{
	if (namePar == "")
	{
		cout << "Please enter a name!\n";
		return false;
	}
	else
	{
		return true;
	}
}
void setupFile()//I want to add a portion that checks if the file has a header of Name\t\tID\t\tEmail if it has something other than that use a different file name and intialize it to have that header. (This isn't too important right now, but it might be in the future)
{
	string tableHead = "Name\t\tID\t\tEmail\n"
	//is file open?
	//if not open a file
	//check file for header
		//getfirstline of file does it equal tableHead?
		//if firstline is nothing make it tableHead, if file is something else we should close that file and open a different one
		//ready for use no more code.
}