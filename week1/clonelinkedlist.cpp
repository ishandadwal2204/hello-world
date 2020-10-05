#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	 node * next;
	 node * random;
	node(){
		data=-1;
		next=random=NULL;
	}
	node(int data){
		//data=data;
		next=random=NULL;
	}
	~node();
};
void show(node * head){
	//cout<<head->next->next->next->data<<endl;
	node *curr=head;
	while(curr != NULL){
		//cout<<NULL;
		if(curr->next == NULL)
		cout<<curr->data<<"next->"<<"NULL"<<"random->"<<curr->random->data<<endl;
		else
		cout<<curr->data<<"next->"<<curr->next->data<<"random->"<<curr->random->data<<endl;
		curr=curr->next;
	}
}
node* clone(node * head){
	node *orgi=head;
	node *copy=NULL;
	unordered_map<node*,node *> map;
	while(orgi !=NULL){
		//int data=orgi->data;
		copy=new node();
		copy->data=orgi->data;
		map[orgi]=copy;
		orgi=orgi->next;
	}
	orgi=head;
	while(orgi !=NULL){
		copy=map[orgi];
		copy->next=map[orgi->next];
		copy->random=map[orgi->random];
		orgi=orgi->next;

	}
	cout<<"copied linked list is \n";
	return map[head];
	
}

int main(){
    node * head=NULL;
    node * first=new node();
	node * second=new node();
	node * three=new node();
	node * four=new node();

	head =first;
	first->data=1;
	second->data=2;
	three->data=3;
	four->data=4;

	first->next=second;
	second->next=three;
	three->next=four;
	four->next=NULL;
	
	first->random=three;
	second->random=four;
	three->random=first;
	four->random=second;
	// cout<<"four next";

	show(head);
	node * copy=clone(head);
	show(copy);
}