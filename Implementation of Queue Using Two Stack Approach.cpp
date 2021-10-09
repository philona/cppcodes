// { Driver Code Starts
#include <iostream>
#include <stack>
using namespace std;
void push(stack<int> &s, int a);
bool isFull(stack<int> &s, int n);
bool isEmpty(stack<int> &s);
int pop(stack<int> &s);
int getMin(stack<int> &s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a;
		cin >> n;
		while (!isEmpty(s))
		{
			pop(s);
		}
		while (!isFull(s, n))
		{
			cin >> a;
			push(s, a);
		}
		cout << getMin(s) << endl;
	}
} // } Driver Code Ends

int mi = 99999;
void push(stack<int> &s, int a)
{
	// Your code goes here
	if (s.empty())
	{
		mi = a;
		s.push(a);
	}
	else
	{
		int x = a;
		if (a < mi)
		{
			x = 2 * a - mi;
			mi = a;
		}
		s.push(x);
	}
}

bool isFull(stack<int> &s, int n)
{
	// Your code goes here
	return (s.size() == n);
}

bool isEmpty(stack<int> &s)
{
	// Your code goes here
	return (s.size() == 0);
}

int pop(stack<int> &s)
{
	// Your code goes here
	int v = s.top();
	if (v >= mi)
		s.pop();
	else
	{
		int y = 2 * v - mi;
		s.pop();
		mi = y;
	}
}

int getMin(stack<int> &s)
{
	// Your code goes here
	return mi;
}

//////////////////////////////////////////////
// CPP program to implement Queue using
// two stacks with costly enQueue()
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
	stack<int> s1, s2;

	void enQueue(int x)
	{
		// Move all elements from s1 to s2
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}

		// Push item into s1
		s1.push(x);

		// Push everything back to s1
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}

	// Dequeue an item from the queue
	int deQueue()
	{
		// if first stack is empty
		if (s1.empty())
		{
			cout << "Q is Empty";
			exit(0);
		}

		// Return top of s1
		int x = s1.top();
		s1.pop();
		return x;
	}
};

// Driver code
int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
