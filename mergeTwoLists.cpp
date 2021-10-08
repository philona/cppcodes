#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

Node* mergeTwoLists(Node* a, Node* b)
{
	Node* temp = new Node(0);
	while(a != NULL && b != NULL)
	{
		if(a->data < b->data)
		{
			temp->next = a;
			a = a->next;
			temp = temp->next;
		}
		else
		{
			temp->next = b;
			b = b->next;
			temp = temp->next;
		}
	}
	if(a)
		temp->next = a;
	else
		temp->next = b;

	return temp->next;
}

void display(Node* head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
}

int main()
{
	Node* head1 = new Node(5);
	head1->next = new Node(4);
	head1->next->next = new Node(3);
	head1->next->next->next = new Node(2);
	head1->next->next->next->next = new Node(1);

	Node* head2 = new Node(9);
	head2->next = new Node(8);
	head2->next->next = new Node(7);
	head2->next->next->next = new Node(6);

	Node* head3 = mergeTwoLists(head1, head2);

	display(head3);

	display(head1);

	return 0;
}