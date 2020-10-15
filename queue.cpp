#include"iostream"
using namespace std;
class queue_{
public:
    int front_=-1;
    int rear=-1;
    int arr[100];
    bool isfull(){
    if(rear==100){
        return true;
    }
    else{
        return false;
    }
    }
    bool isempty(){
    if(front_==-1 && rear==-1){
        return true;
    }
    else{
        return false;
    }
    }
    int enqueue(int value){
    if(isfull()){
        return 0;
    }
    else if(isempty()){
    rear=front_=0;
    arr[rear]=value;
    return 1;
    }
    else{
        rear++;
        arr[rear]=value;
        return 1;
    }
}
     int dequeue(){
         int x=0;
         if(!isempty()){
            if(front_==rear){
                    x=arr[rear];
                front_=rear=-1;
            return x;
            }
            else{
                x=arr[front_];
                front_++;
                return x;
            }
         }
     }
};
int main(){
queue_ q;
cout<<q.enqueue(1)<<endl;
cout<<q.dequeue()<<endl;
cout<<q.enqueue(2)<<endl;
cout<<q.dequeue()<<endl;
}
