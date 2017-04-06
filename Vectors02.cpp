#include<iostream>
#include<string>
#include<vector>
using namespace std;

//function prototypes
void printPlayerInfo(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);
void addPlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);
void changeStatus(vector<string>& namePar, vector<bool>& statusPar);
void removePlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar);

int main()
{
	vector<int>playerNumbers;
	vector<string>playerNames;
	vector<bool>playerAbsent;

	int actionRequest;
	char playingTodayYesorNo = 'N';
	bool isActive = true;

	while (isActive == true)
	{
		cout << "0 - Quit \n";
		cout << "1 - Add a player to the team\n";
		cout << "2 - Remove a player from the team\n";
		cout << "3 - Change status of a player\n";
		cout << "4 - Display team information\n";
		cout << endl;
		cin >> actionRequest;

		if (actionRequest == 0)
			isActive = false;
		else if (actionRequest == 1)
			addPlayer(playerNames, playerNumbers, playerAbsent);
		else if (actionRequest == 2)
			removePlayer(playerNames, playerNumbers, playerAbsent);
		else if (actionRequest == 3)
			changeStatus(playerNames, playerAbsent);
		else if (actionRequest == 4)
			printPlayerInfo(playerNames, playerNumbers, playerAbsent);
		else
			cout << "Not a valid request! Try again!\n\n";

	}

	system("pause");
	return 0;
}
//function definitions
void printPlayerInfo(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar)
{
	int numOfPlayers;
	numOfPlayers = namePar.size();
	for (int i = 0; i< numOfPlayers; i++)
	{
		cout << namePar[i] << "'s jersey number is " << numPar[i] << ", and he is ";
		if (statusPar[i] == true)
		{
			cout << "playing today.";
		}
		else {
			cout << "not playing today.";
		}
		cout << endl;
	}
}
void addPlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar)
{
	string name;
	int num;
	char availableYesOrNo;

	cout << "What is the player's name: ";
	cin >> name;

	cout << "What is " << name << "'s jersey number: ";
	cin >> num;

	cout << "Is " << name << " available to play (Y/N): ";
	cin >> availableYesOrNo;

	switch (availableYesOrNo)
	{
	case 'y':
	case 'Y': statusPar.push_back(true);
		break;
	case 'n':
	case 'N':
	default:
		statusPar.push_back(false);
		break;
	}
	namePar.push_back(name);
	numPar.push_back(num);
}
void changeStatus(vector<string>& namePar, vector<bool>& statusPar)
{
	bool found = false;
	string playerName;
	char availableYesOrNo;
	int sizeOfVector;
	int cnt;

	cout << "What is the player's name: ";
	cin >> playerName;
	cout << "Is " << playerName << " available to play (Y/N): ";
	cin >> availableYesOrNo;

	sizeOfVector = namePar.size();
	//determine the index based on the player's name assuming all names are unique
	cnt = 0;
	while (cnt < sizeOfVector && !found)
	{
		if (namePar[cnt] == playerName)
		found = true;
		else
			cnt++;
	}
	switch (availableYesOrNo)
	{
	case 'y':
	case 'Y':
		statusPar[cnt] = true;;
		break;
	case 'n':
	case 'N':
	default:
		statusPar[cnt] = false;
		break;
	}
}
void removePlayer(vector<string>& namePar, vector<int>& numPar, vector<bool>& statusPar)
{
	string playerName;
	bool foundRecord = false;
	int sizeOfVector;
	int cnt;

	cout << "What is the player's name: ";
	cin >> playerName;
	sizeOfVector = namePar.size();

	cnt = 0;
	foundRecord = false;
	while (cnt<sizeOfVector && !foundRecord)
	{
		if (namePar[cnt] == playerName)
		{
			//remove this record from all parallel vectors
			foundRecord = true;
			namePar.erase(namePar.begin() + cnt);
			numPar.erase(numPar.begin() + cnt);
			statusPar.erase(statusPar.begin() + cnt);
			cout << "Record removed" << endl;

		}
		else
		{
			cnt++;
		}
	}
	//if found record is still false it means there was no such record!
}