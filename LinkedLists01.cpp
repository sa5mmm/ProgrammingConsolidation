#include<iostream>
using namespace std;

struct agesNode
{
	int age;//Item of the node
	agesNode *link;//link to another node

};
int main()
{
	int numOfAges;//Number of age values requested by the user
				  //creates the initial values for the head node
	agesNode *head = new agesNode;//points to head node
	head->age = 49;
	head->link = nullptr;

	//create an initial linked list of values based on the user input 
	agesNode *nextAgesNode = new agesNode;
	nextAgesNode = head;


	//get user input
	cout << "How many ages are you going to enter: ";
	cin >> numOfAges;


	//calculations
	for (int i = 0; i<numOfAges; i++)
	{
		nextAgesNode->link = new agesNode; //creates a node at the end of the list
		nextAgesNode = nextAgesNode->link; //points to that node
		nextAgesNode->link = nullptr;

		cout << "Enter age " << (i + 1) << ": ";
		cin >> nextAgesNode->age;
	}
	//Traverse the linked list and display it's contents
	cout << endl << "Traversing the linked list..." << endl;

	nextAgesNode = head->link;
	while (nextAgesNode != nullptr)
	{
		cout << nextAgesNode->age << endl;
		nextAgesNode = nextAgesNode->link;
	}

	//delete the head node from the free store memory (i.e., heap) memory management
	delete nextAgesNode;
	nextAgesNode = nullptr;

	delete head;
	head = nullptr;
	/*
	If you create user defined objects or structs you should delete them!
	*/
	system("pause");
	return 0;
}