#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
    if(top>=n-1)
        cout<<"Stack Overflow"<<endl;
    else {
        top++;
        stack[top]=val;
    }
}
void pop(int input) {
    if(top<=-1)
        cout<<"Stack Underflow"<<endl;
    else {
    for(int i=top; i>=0; i--)
        if(stack[top]<=input)
    cout<<"The popped element is "<< stack[top] <<endl;
    top--;
    }
}
void display() {
    if(top>=0) {
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
            cout<<stack[i]<<" ";
        cout<<endl;
    } else
        cout<<"Stack is empty";
}
int main() {
    int ch, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;
    do {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch) {
            case 1: {
                for (int i=0;i<10;i++)
                push(rand()%9+1);
                break;
            }
            case 2: {
                int X;
                cout<<"Enter X :";
                cin>>X;
                pop(X);
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                cout<<"Exit"<<endl;
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }
    }while(ch!=4);
    return 0;
}