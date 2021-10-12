#include<iostream>
using namespace std;

struct link
{
	int item;
	struct link*prev;
	struct link*next;
};
typedef struct link node;
node*head=NULL; int count=0;

void create()
{
	if(head==NULL)
	{
	head=new node;
	cout<<"Enter item to be inserted in head node\n";
	cin>>head->item;
	head->next=NULL;
	head->prev=NULL;
	count++;
	}
	else
	{
		cout<<"Head node created\n";
	}
}

void print()
{
	node*p;
	p=head;
	cout<<"List is:\n";
	do
	{
		cout<<p->item<<endl;
		p=p->next;
	}while(p!=NULL);
}
void insert_mid()
{
	int num;
	cout<<"Enter item after which u wanna insert";
	cin>>num;
	node*p=head;node*q;
	while(p->item!=num)
	p=p->next;
	q=new node;
	cout<<"Enter item to be inserted\n";
	cin>>q->item;
	
	p->next->prev=q;
	q->next=p->next;
	p->next=q;
	q->prev=p;
	count++;
	
}

void insert_beg()
{
	node*p;
	p=new node;
	cout<<"Enter item to be inserted\n";
	cin>>p->item;
	p->next=head;
	p->prev=NULL;
	head=p;
	count++;
	}	
void insert_end()
{
	if(head==NULL)
	{
		create();
    }
    node*p;node*q;
    p=head;
    while(p->next!=NULL)
    p=p->next;
    q=new node;
    cout<<"Enter item to be inserted\n";
    cin>>q->item;
    count++;
    q->prev=p;
    q->next=NULL;
    p->next=q;
}


void delete_beg()
{
	node *p;
	p=head;
	head=p->next;
	(p->next)->prev=NULL;
	delete(p);
	count--;
	
}

void delete_end()
{
	node *p;
	p=head;
	while((p->next)->next!=NULL)
	p=p->next;
	delete(p->next);
	p->next=NULL;
    count--;
	
}

void delete_mid()
{
	int element;
	cout<<"Enter element to be deleted: ";
	cin>>element;
	node *p;
	p=head;
	while((p->next)->item!=element)
	p=p->next;
	((p->next)->next)->prev=p;
	delete(p->next);
	p->next=(p->next)->next;
   	count--;
}
void counter()
{
	cout<<"The number of elements in the list are: "<<count<<endl;
}
void search()
{
	
	int flag=0;
	int ele; node*p;
	cout<<"Enter element to be searched\n";
	cin>>ele;
	for(p=head;p!=NULL;p=p->next)
	{
		if(p->item==ele)
		{
			cout<<"Element found\n";
			flag =1 ;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found\n";
	}
}


int main()
{ int ch;
	cout<<"1)To create a head node\n";
	cout<<"2)To print the list\n";
	cout<<"3)To insert at the end of list\n";
    cout<<"4)To insert in the beginning of the list\n";
	cout<<"5)To insert in the middle of the list\n";
	cout<<"6)To delete in the beginning of the list\n";
	cout<<"7)To delete in the middle of the list\n";
	cout<<"8)To delete in the end of the list\n";
	cout<<"9)To search an element in  the list\n";
	cout<<"10)To count the number of elements in the list\n";
	do
	{
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				print();
				break;
			case 3:
				insert_end();
				break;
			case 4:
				insert_beg();
				break;
			case 5:
				insert_mid();
				break;
			case 6:
				delete_beg();
				break;
			case 7:
				delete_mid();
				break;
			case 8:
				delete_end();
				break;
			case 9:
				search();
				break;
			case 10:
				counter();
				break;
			default:
				break;
				
		}
	} while(1);
	
}
