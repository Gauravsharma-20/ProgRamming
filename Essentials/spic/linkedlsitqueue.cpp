#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*next;
	
};

node*front=NULL;
node*rear=NULL;
node*temp;

void que(int key);
void deque();
void print();

void que(int key)
{
	cout<<"enter the nummber to be inserted"<<endl;
	cin>>key;
	
	if(rear==NULL)
	{
		rear=new node();
		rear->next=NULL;
		rear->data=key;
		front=rear;
	}
	else{
		temp=new node();
		rear->next=temp;
		temp->next=NULL;
		temp->data=key;
		rear=temp;
	}
}

void deque()
{
	front=temp;
	
	if(front==NULL)
	{
		cout<<"the queue is empty"<<endl;
		return;
	}
	else if(temp->next!=NULL)
	{
		temp=temp->next;
		cout<<"element deleted is"<<" "<<front->data<<endl;
		delete(front);
		front=temp;
	}
	else
	{
		cout<<"element deleted is"<<" "<<front->data<<endl;
		delete(front);
		front==NULL;
		rear=NULL;
	}
}

void print()
{
	temp=front;
	if(front==NULL&&rear==NULL)
	{
		cout<<"the list is empty"<<endl;
	}
	else
	{
		cout<<"LIST: ";
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
	cout<<endl;
}

//////////////////////////////////////////////////////////////


int main()
{
	int item,choice;
	cout<<"enter your choice"<<endl<<"1. QUE"<<endl<<"2. DEQUE"<<endl<<"3. PRINT"<<endl<<"4. exit"<<endl<<endl;
	do{
		cout<<"enter your choice"<<endl;
		cin>>choice;
		cout<<endl;
		switch(choice){
		
			case 1:
				{
					que(item);
					break;
				}
				
			case 2:
				{
					deque();
					break;	
				}
			case 3:
				{
					print();
					break;
					}	
					
			case 4:{
				cout<<"terminated"<<endl;
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
	

