#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x = 0) : data(x), next(nullptr) {}
};

class Linkedlist
{
	Node *first;

public:
	Linkedlist();
	~Linkedlist();
	void addAtBeg(int);
	void addAtEnd(int);
	void addAtPos(int, int);
	void deleteAtPos(int);
	void disp();
};

int main()
{
	Linkedlist obj;
	for (int cnt = 0; cnt < 10; ++cnt)
		obj.addAtBeg(100 + cnt);
	obj.disp();
	for (int cnt = 0; cnt < 10; ++cnt)
		obj.addAtEnd(200 + cnt);
	obj.disp();
	obj.addAtPos(1002, 4);
	obj.disp();
	obj.deleteAtPos(5);
	obj.disp();
}

Linkedlist::Linkedlist()
{
	first = nullptr;
}

Linkedlist::~Linkedlist()
{
	while (first != nullptr)
	{
		Node *temp = first;
		first = first->next;
		delete temp;
		cout << temp << endl;
	}
}
void Linkedlist::addAtBeg(int data)
{
	Node *New = new Node(data);
	if (first == nullptr)
		first = New;
	else
	{
		New->next = first;
		first = New;
	}
}

void Linkedlist::addAtEnd(int data)
{
	Node *New = new Node(data);
	if (first == nullptr)
		first = New;
	else
	{
		Node *temp = first;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = New;
	}
}

void Linkedlist::addAtPos(int data, int pos)
{
	Node *New = new Node(data);
	if (first == nullptr)
		first = New;
	else
	{
		int cnt = 1;
		Node *temp = first;
		while (temp->next != nullptr && cnt < pos - 1)
		{
			temp = temp->next;
			cnt++;
		}
		New->next = temp->next;
		temp->next = New;
	}
}

void Linkedlist::disp()
{
	Node *temp = first;
	cout << "List: ";
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void Linkedlist::deleteAtPos(int pos)
{
	if (first == nullptr)
	{
		printf("Nothing to do\n");
		return;
	}
	Node *temp = first;
	if (pos == 1)
	{
		first = first->next;
	}
	else
	{
		int cnt = 1;
		Node *prev = nullptr;
		while (temp != nullptr && cnt < pos)
		{
			prev = temp;
			temp = temp->next;
			cnt++;
		}
		if (temp == nullptr)
		{
			printf("%d : No such position\n", pos);
			return;
		}
		prev->next = temp->next;
	}
	free(temp);
}
