//stack implementation using array//

#include<iostream>
using namespace std;
# define n 100

class stack{
    int* arr;
    int ptr;

    public:
    stack(){
        arr = new int[n];
        ptr = -1;
    }
//push operation//
    void push(int x){
        if(ptr == n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        ptr++;
        arr[ptr]=x;
    }
//pop operation//
    void pop(){
        if(ptr==-1){
            cout<<"no element to pop"<<endl;
            return;
        }
        ptr--;
    }
//peek operation//
    int peek(){
        if(ptr==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[ptr];
    }
//isEmpty//
    bool isEmpty(){
        return ptr==-1;
    }
};
int main(){
    stack st;
    int num; cin>>num;
    for(int i=0; i<num; i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    

}