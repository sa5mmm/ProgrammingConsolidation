/*
vecList[index] return the element at the position specified by index
vecList.front() return the first element
vecList.back() return the last element
vecList.clear() deletes all elements from the object
vecList.push_back(elem) a copy of the item is inserted into vecList at the end
vecList.pop_back() delete the last element of the vecList
vecList.empty() return true if the object vecList is empty and false otherwise
vecList.size() return the number of elements currently in the object vecList
vecList.max_size() return the max number of elements that can be inserted into the object
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<int> playerNumbers;
	vector<string> playerNames;
	vector<bool> playerIsAbsent; //true or false
	
	int numOfPlayers;
	int cntPlayers;
	int num;
	string name ="";
	char playingToday = 'N';
	bool isAbsent;
	bool isActive = true;
	
	cout << "How many players are on the team? ";
	cin >> numOfPlayers;
	
	for(cntPlayers=0;cntPlayers<numOfPlayers;cntPlayers++)
	{
		//get Player's Name(s)
		cout << "What is player " << cntPlayers+1<< "'s name? ";
		cin >> name; //Use getline in case player's name has a space (e.g., Mc Dermott)
		playerNames.push_back(name);
		//get Player's Jersey Number
		cout << "What is " << playerNames[cntPlayers] << "'s jersey number? ";
		cin >> num;
		playerNumbers.push_back(num);
		//get Player's Status
		cout << "Is " << playerNames[cntPlayers] << " playing today? (Y/N)";
		cin >> playingToday;
		switch(playingToday)
		{
			case 'y':
			case 'Y': isAbsent = false;
			break;
			case 'n':
			case 'N': isAbsent = true;
			break;
			default:
			isAbsent = false;
			break;
		}//switch(playingToday)
		playerIsAbsent.push_back(isAbsent);
		
		cout << endl<<endl;
	}//for(cntPlayers=0;cntPlayers<numOfPlayers;cntPlayers++)
	
	for (int i=0; i<numOfPlayers;i++)
	{
		cout << playerNames[i]<<"'s jersey number is " << playerNumbers[i] << " and he/she is ";
		if(playerIsAbsent[i]==false)
		{
			cout << "playing today.";
		}else
		{
			cout << "not playing today.";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}