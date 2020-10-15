#include"iostream"
using namespace std;
int linear_search(int a[],int n){
int temp=-1;
for(int i=0;i<5;i++){
    if(a[i]==n){
        temp=i;
    }
}
    return temp;
}
int main(){
int arr[5]={7,4,6,3,8};
cout<<"enter number to search"<<endl;
int num;
cin>>num;
int b=linear_search(arr,num);
if(b==-1){
    cout<<"element not found"<<endl;
}
else{
    cout<<"element found at position"<<b<<endl;
}
}

