#include"iostream"
using namespace std;
class queue_{
public:
    int front_=-1;
    int rear=-1;
    int arr[100];
    bool isfull(){
        if(rear+front_==99){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
    if(rear==-1){
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
    arr[0]=value;
    front_=rear=0;
    return 1;
    }
    else{
            if(rear==99){
                rear=0;
            }
            else{
        rear++;
            }
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
                if(front_==99){
                    front_=0;
                }
                else{
                front_++;
                }
                return x;
            }
         }
     }
};
int main(){
queue_ q;
for(int i=0;i<=99;i++){
    q.enqueue(i);
}
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.enqueue(1000)<<endl;
cout<<q.dequeue()<<endl;
}
