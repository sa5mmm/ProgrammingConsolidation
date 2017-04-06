#include<iostream>

using namespace std;

const int MaxROW = 8;
const int MaxCOL = 8;
const char BLANK = 254;
const char Queen = 234;
void resetPlacedArray();
void resetConflictsArray();
void readPlacedArray();
void readConflictsArray();

void NWDiagonalFind(int rowPar, int colPar);
void NWDiagonalFill(int rowPar, int colPar);

int conflictsArray[MaxROW][MaxCOL];
char placedArray[MaxROW][MaxCOL];

int main()
{
	resetPlacedArray();
	resetConflictsArray();
	
	int col = rand() % 8;
	int row = rand() % 8;;
	//Test diagonal algorithm

	//go top left to bottom right first minus from row and column until row or column value is zero (Doesn't have to be both, because we might start in a place where our diagonal isn't in a corner.

	cout <<"Row: "<<  row << " Col: " << col << endl;
	NWDiagonalFind(row, col);
	readConflictsArray();



	system("pause");
	return 0;
}


void resetPlacedArray()
{
	for (int i = 0; i < MaxROW; i++)
	{
		for (int j = 0; j < MaxCOL; j++)
		{
			placedArray[i][j] = BLANK;
		}
	}
}
void resetConflictsArray()
{
	for (int i = 0; i < MaxROW; i++)
	{
		for (int j = 0; j < MaxCOL; j++)
		{
			conflictsArray[i][j] = 0;
		}
	}
}
void readConflictsArray()
{
	for (int i = 0; i < MaxROW; i++)
	{
		for (int j = 0; j < MaxCOL; j++)
		{
			cout << conflictsArray[i][j] << " ";
		}
		cout << endl;
	}
}
void readPlacedArray()
{
	for (int i = 0; i < MaxROW; i++)
	{
		for (int j = 0; j < MaxCOL; j++)
		{
			cout << placedArray[i][j] << " ";
		}
		cout << endl;
	}
}


//Goes to the left of the board, then it will call another recursion to fill in until it reaches the bottom of the board
void NWDiagonalFind(int rowPar, int colPar)
{
	if (rowPar == 0||colPar==0)//base case
	{
		NWDiagonalFill(rowPar, colPar);
	}
	else
	{
		NWDiagonalFind(rowPar - 1, colPar - 1);
	}
}

void NWDiagonalFill(int rowPar, int colPar)
{
	if (rowPar == 7 || colPar == 7)
	{
		conflictsArray[rowPar][colPar]++;
		//finish
	}
	else
	{
		conflictsArray[rowPar][colPar]++;
		NWDiagonalFill(rowPar++, colPar++);
	}
}
