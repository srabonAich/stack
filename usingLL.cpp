#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};

void push(node* &top,int val){
    node* n=new node(val);
    if(top==nullptr)
    {   top=n;
        return;
    }
    else
    {
        n->next=top;
        top=n;
    }
}

void display(node *top)
{
    node *temp = top;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int peek(node* &top){
    if(top==nullptr)
        return -1;
    return top->data;
}

void pop(node* &top){
    if(top==nullptr)    
        return;
    node* temp=top;
    top=top->next;
    delete temp;
}
int main(){
    node* head = nullptr;
    push(head,1);
    push(head,2);
    push(head,3);
    display(head);
    pop(head);
    display(head);
    cout<<peek(head)<<endl;
}
