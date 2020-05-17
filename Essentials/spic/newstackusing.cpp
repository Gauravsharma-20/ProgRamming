#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
};

void insert(int item);   //////////////// function prototype
void print();
void remove();

node*head=NULL;

void pop()
{
	node*runner=head;
	{
		head=runner->next;
		delete(runner);
		return;
	}
}

void push(int item)
{
	cout<<"enter the item"<<endl;
	cin>>item;
	cout<<endl;
	node*newnode=new node();
	newnode->data=item;
	newnode->next=head;
	head=newnode;
	return;

}

void print()
{
	node*runner=head;
	while(runner!=NULL)
	{
		cout<<runner->data<<endl;
		runner=runner->next;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int item,choice;
	cout<<"enter your choice"<<endl<<"1. PUSH"<<endl<<"2. PRINT"<<endl<<"3. POP"<<endl<<"4. exit"<<endl<<endl;
	do{
		cout<<"enter your choice"<<endl;
		cin>>choice;
		cout<<endl;
		switch(choice){
		
			case 1:
				{
					push(item);
					break;
				}
				
			case 2:
				{
					cout<<"STACK: "<<endl;
					print();
					cout<<endl<<endl;
					break;	
				}
			case 3:
				{
					pop();
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
