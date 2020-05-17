#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
};

node*head=NULL;

void enque(int x);
void deque();
void print();

void enque(int x)
{
	cout<<"enter the element"<<endl;
	cin>>x;
	node*newnode=new node();
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	 } 
	else
	{
	node*runner=head;
	while(runner->next!=NULL)
	{
		runner=runner->next;
	}
		runner->next=newnode;	
	}
}

void deque()
{
	node*runner=head;
	head=runner->next;
	delete(runner);
}

void print()
{
	node*runner=head;
	if(head==NULL)
	{
		cout<<"the list is empty"<<endl;
	}
	else
	{
		while(runner!=NULL)
		{
			cout<<runner->data<<" ";
			runner=runner->next;
		}
	}
}

//////////////////////////////////////////////////////////////////////

int main()
{
	int item,choice;
	cout<<"enter your choice"<<endl<<"1. ENQUE"<<endl<<"2. DEQUE"<<endl<<"3. PRINT"<<endl<<"4. exit"<<endl<<endl;
	do{
		cout<<"enter your choice"<<endl;
		cin>>choice;
		cout<<endl;
		switch(choice){
		
			case 1:
				{
					enque(item);
					break;
				}
				
			case 2:
				{
					deque();
					break;
				}
			case 3:
				{
					cout<<"QUEUE: ";
					print();
					cout<<endl;
					break;	
				}	
								
			default:
				{
					cout<<"invalid choice"<<endl;
				}	
		}
	}
	while(choice!=4);
	return 0;
}
