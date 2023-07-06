#include<iostream>
using namespace std;

class Stack{
    int top, maxsize;
    int *array;

    public:
    Stack(int max){
        top = -1;
        maxsize = max;
        array = new int[max];
    }
    bool isEmpty();
    bool isFull();
    void push(int data);
    int pop();
    void display();
};

bool Stack::isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

bool Stack::isFull(){
    if(top == maxsize - 1){
        return true;
    }
    return false;
}

void Stack::push(int data){
    if(isEmpty()){
        top = 0;
        array[top] = data;
    } else{
        if(!isFull()){
            top++;
            array[top] = data;
        } else{
            cout <<"Stack is full"<<endl;
        }
    }
}

int Stack::pop(){
    if(!isEmpty()){
        top--;
        return array[top+1];
    } else{
        return -1;
    }
}

void Stack::display(){
    if(!isEmpty()){
        cout<<"Stack elements are: "<<endl;
        for (int i = 0; i<=top; i++){
            cout<<"  "<<array[i];
        } cout<<endl;
        
    }else{ cout<<"Empty stack"<<endl; }
}

int main(){
    
    Stack s(5);
    s.push(1);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    cout<<s.pop()<<endl;
    s.display();
    cout << '\n';
    return 0;
}