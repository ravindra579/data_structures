#include"iostream"
using namespace std;
class stack_{
int top;
public :
    int a[100];//maximum size of the stack
    stack_(){
    top=-1;
    }
    bool push(int x){
        if(top>=(100-1)){
            cout<<"no space"<<endl;
            return false;
        }
        else{
                a[++top]=x;
        return true;
    }}
    int pop(){
    if(top<0){
        cout<<"stack is empty";
        return 0;
    }
    else{
        int x=a[top--];
        return x;
    }
    }
    int peek(){
    if(top<0){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else{
        int x=a[top];
    }
    }
    bool isempty(){
    if(top<0){
        return true;
    }
    }
};
int main(){
stack_ a;
cout<<a.isempty()<<endl;
a.push(1);
cout<<a.peek()<<endl;
cout<<a.isempty()<<endl;
a.pop();
cout<<a.peek()<<endl;
}
