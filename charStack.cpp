#include<iostream>
using namespace std;

class node{
    public:
    char data;
    node* next;
    node(char val){
        data=val;
        next=NULL;
    }
};

class Mystack{
    node* front;
    public:
    Mystack(){
        front = NULL;
    }
    void push(char val){
        node* n=new node(val);
        if(front==nullptr){
            front=n;
            return;
        }
        n->next=front;
        front=n;
    }
    void pop(){
        if(front==nullptr){
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    char top(){
        if(front==nullptr)
            return '\0';
        return front->data;
    }
};

int main(){
    Mystack st;
    st.push('a');
    st.push('b');
    st.push('c');
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}