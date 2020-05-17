#include<iostream>
using namespace std;

class node{
	
	public:
	
	int data,temp;
	node*next;
	node*head=NULL;
	node*ptr=head;

void insert(int n,int item); //////////////// function prototype
void print();
void remove(int n);
void sort();
};
/////////////////////////////////////////////
void node::remove(int n)
{
	node*runner=head;
	cout<<"enter the position at which you want to delete the node"<<endl;
	cin>>n;
	if(n==1)
	{
		head=runner->next;
		delete(runner);
		return;
	}
	else{
		for(int i=0;i<n-2;i++)////////////////////// go to the n-1 th node
		{
			runner=runner->next;
		}
			node*temp=runner->next;//////////// nth node
			runner->next=temp->next;
			delete(temp);
		}
}
////////////////////////////////////////
void node::insert(int n,int item)
{
	node*newnode=new node();
	cout<<"enter the position at which node is to be inserted"<<endl;
	cin>>n;
	cout<<"enter the element"<<endl;
	cin>>item;
	newnode->data=item;
	newnode->next=NULL;

	if(n==1)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	else{
	node*runner=head;
	for(int i=0;i<n-2;i++)
	{
		runner=runner->next;
	}
		newnode->next=runner->next;
		runner->next=newnode;
	}	
}
///////////////////////////////////////
void node::print()
{
	node*runner=head;
	while(runner!=NULL)
	{
		cout<<runner->data<<" ";
		runner=runner->next;
	}
}
///////////////////////////////////////
void node::sort()
{
	int i;
	do{
		i=0;
		node*runner=head;
		while(runner->next!=NULL)
		{
			if(runner->data>runner->next->data)
			{
				temp=runner->data;
				runner->data=runner->next->data;
				runner->next->data=temp;
				i=1;
			}
		runner=runner->next;
		}
	}
	while(i);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	node j;
	int n,item,choice,d,temp,count=1;
	node*ptr;
	cout<<"enter your choice"<<endl<<"1. insert node"<<endl<<"2. print the linked list"<<endl<<"3. delete"<<endl<<"4. sort"<<endl<<"5. exit"<<endl;
	do{
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice){
		
			case 1:
				{
					j.insert(n,item);
					break;
				}
				
			case 2:
				{
					cout<<"LIST: ";
					j.print();
					cout<<endl<<endl;
					break;	
				}
			case 3:
				{
					j.remove(d);
					break;
					}	
			case 4:
				{
					j.sort();
					break;
					}		
								
			default:
				{
					cout<<"invalid choice"<<endl;
				}	
		}
	}
	while(choice!=5);
	return 0;
}
