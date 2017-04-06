#include<iostream>

using namespace std;

struct agesNode {

        int age;

 agesNode *link;

};

int main() {

 //declarations

 int numOfAges; //number of age values requested by the user

   //creates the initial values for the head node

 agesNode *head = new agesNode; //points to the head node

 head->age = 49;

 head->link = nullptr;

 //create an initial link list of values based on the user input

 agesNode *nextAgesNode = new agesNode;

 nextAgesNode = head; //nextAgesNode is the first node

 cout << "How many ages are you going to enter? ";

 cin >> numOfAges;

 for (int i = 0; i < numOfAges; i++) {

 nextAgesNode->link = new agesNode; //creates a node at the end of the list

 nextAgesNode = nextAgesNode->link; //points to that node

 nextAgesNode->link = nullptr;

 cout << "Enter age " << (i + 1) << ": ";

 cin >> nextAgesNode->age;

 }

 //traverse the linked list and display its contents

 cout << endl << "traversing the link list" << endl;

 nextAgesNode = head->link;

 while (nextAgesNode != nullptr) {

 cout << nextAgesNode->age << endl;

 nextAgesNode = nextAgesNode->link;

 }

 //double the contents of the linked list and display the results

 cout << endl << "Doubling the contents" << endl;

 nextAgesNode = head->link;

 while (nextAgesNode != nullptr) {

 nextAgesNode->age = nextAgesNode->age * 2;

 cout << nextAgesNode->age << endl;

 nextAgesNode = nextAgesNode->link;

 }

 //adding a node to the front of the list

 agesNode* newAgesNode = new agesNode;

 newAgesNode->link = head->link;

 cout << endl << "Adding a new node to the front of the list" << endl;

 cout << "What is the value to be added to the front of the list? ";

 cin >> newAgesNode->age;

 head = newAgesNode; //the new node is now the first node in the list

 //traverse the linked list and display its contents

 cout << endl << "traversing the link list again" << endl;

 while (newAgesNode != nullptr) {

 cout << newAgesNode->age << endl;

 newAgesNode = newAgesNode->link;

 }

 //determine how many items are in the linked list

 int itemCount = 0;

 newAgesNode = head;

 while (newAgesNode != nullptr) {

 itemCount++;

 newAgesNode = newAgesNode->link;

 }

 cout << endl << "The linked list has " << itemCount << " item(s)." << endl;

 //get the frequency of an item in the list

 //(i.e., how many times does an item occur in the list?)

 int anEntry = 0;

 int frequency = 0;

 int counter = 0;

 cout << endl << "Get the frequency of this number: ";

 cin >> anEntry;

 newAgesNode = head;

 while ((newAgesNode != nullptr) && (counter < itemCount)) {

 if (newAgesNode->age == anEntry) {

 frequency++;

 }

 counter++;

 newAgesNode = newAgesNode->link;

 }

 cout << anEntry << " occurs " << frequency << " time(s) in the list." << endl;

 //reverse the list

 cout << endl << "Reversing the list" << endl;

 agesNode* parentAgesNode = new agesNode;

 agesNode* me = new agesNode;

 agesNode* childAgesNode = new agesNode;

 parentAgesNode = head;

 me = parentAgesNode->link;

 childAgesNode = me->link;

 parentAgesNode->link = nullptr; //this is the tail node of the list

 while (childAgesNode != nullptr) {

 me->link = parentAgesNode;

 parentAgesNode = me;

 me = childAgesNode;

 childAgesNode = childAgesNode->link;

 }

 me->link = parentAgesNode;

 head = me;

 nextAgesNode = head; //the nextAgesNode is now the head node

 //traverse the reversed linked list and display its contents

 cout << endl;

 cout << "Traversing the reversed linked list" << endl;

 while (nextAgesNode != nullptr) {

 cout << nextAgesNode->age << endl;

 nextAgesNode = nextAgesNode->link;

 }

 //delete the head node from the free store memory

 delete head;

 head = nullptr;

 delete nextAgesNode;

 nextAgesNode = nullptr;

 delete newAgesNode;

 newAgesNode = nullptr;

 delete parentAgesNode;

 parentAgesNode = nullptr;

 delete me;

 me = nullptr;

 delete childAgesNode;

 childAgesNode = nullptr;

 system("pause");

 return 0;

}