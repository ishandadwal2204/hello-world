#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;


};

int main(){
	// cout<<"in main";
	node* head;
	head =NULL;

	node *first=new node();
	node *second=new node();
	node *three=new node();
	node *four=new node();

	head =first;
	first->next=second;
	second->next=three;
	three->next=four;
	four->next=NULL;

	// cout<<"four next";

	first->data=1;
	second->data=2;
	three->data=3;
	four->data=4;
	node *curr=head;
	while(curr != NULL){
		cout<<curr->data;
		curr=curr->next;
	}
	return 0;
}
