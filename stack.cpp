#include <iostream>
#include "stack_H.h"
using namespace std;

template<class T>
ostream& operator << (ostream& sout,G_stack<T>& s){
	item<T> *temp = s.top;
	while(temp->next!=NULL){
		sout<<temp->data<<endl;
		temp=temp->next;
	}
	return sout;
}

template<class T>
G_stack<T>::G_stack(){
	top = new item<T>;
	top->next=NULL;
}

template<class T>
void G_stack<T>::push(T d){
	item<T> *temp = new item<T>;
	temp->data=d;
	temp->next=top;
	top=temp;
}

template<class T>
void G_stack<T>::pop(){
	item<T> *t = top;
	if(t->next!=NULL){
		cout<<"PoPed: "<<t->data<<endl;
		top=top->next;
		delete t;
	}
	else cout<<"Stack Empty! "<<endl;
}

int main(void){
	G_stack<int> stack;
	bool flag = 1;
	int num = 0;
	while(flag){
		cout<<"0-> Exit()\n1-> Push\n2-> PoP\n3-> Display\nOPTION: ";
		cin>>num;
		switch(num){
			case 0: flag=0;break;
			case 1:
				cout<<"NUM TO PUSH: ";
				cin>>num;
				stack.push(num);
				break;
			case 2:
				stack.pop();break;
			case 3:
				cout<<stack;
				break;
				
		}
	}
	return 0;
}