#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
};
class LinkedList
{
	private:
		node *head;
	public:
		LinkedList();
		void push_front(int data);
		void push_back(int data);
		int pop_front();
		int pop_back();
		void display();
};
LinkedList::LinkedList()
{
	head=NULL;
}
void LinkedList::push_front(int d)
{
	node *temp=new node();
	temp->data=d;
	if(head==NULL)
	{
		temp->next=NULL;
		head=new node();
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void LinkedList::push_back(int data)
{
	node *fresh,*temp;
	fresh=new node();
	fresh->data=data;
	fresh->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=fresh;
}
int LinkedList::pop_front()
{
	node *temp=head;
	head=head->next;
	int r=temp->data;
	delete temp;
	return r;
}
int LinkedList::pop_back()
{
	node *temp=head,*prev;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	int r=temp->data;
	delete temp;
	return r;
}
void LinkedList::display()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" -> ";
		temp=temp->next;
	}
}
int main()
{
	LinkedList ll;
	ll.push_front(1);
	ll.push_back(2);
	ll.display();
	int t=ll.pop_back();
	cout<<"\n";
	ll.display();
	ll.push_back(3);
	ll.push_back(4);
	ll.display();
	ll.push_front(5);
	cout<<"\n";
	ll.display();
	t=ll.pop_back();
	t=ll.pop_front();
	cout<<"\n";
	ll.display();
	return 0;
}

