#include <iostream>
#include <string>
using namespace std;

class Node { 
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START = NULL;
public:
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool ListEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> nm;

	Node* newNode = new Node(); //step 1
	newNode->noMhs = nim; //step 2
	newNode->name = nm; //step 2

	/*insert a node in the beginning of a doubly - Linked List*/
	if (START == NULL || nim <= START->noMhs) { //check if data null
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = START; //step 3
		if (START != NULL)
			START->prev = newNode; //step 4
		newNode->prev = newNode; //step 5
		START = newNode; //step 6
		return;
	}

	/*inserting a Node between two Node in the list*/
	Node* current = START; //1.a
	Node* previous = NULL; //1.b
	while(current->next !=NULL && current->next->noMhs <nim)//step 1.c
	
}