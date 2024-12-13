#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

class Mystack{
    node* front;
    public:
    Mystack(){
        front=NULL;
    }
    void push(int val){
        node* n= new node(val);
        if(front==nullptr){
            front=n;
        }
        n->next=front;
        front=n;
    }
    void pop(){
        if(front==nullptr)
            return;
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==nullptr)
            return -1;
        return front->data;
    }
};
int main(){
    Mystack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
}