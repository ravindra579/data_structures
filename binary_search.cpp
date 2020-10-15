#include"iostream"
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n){
int temp=-1;
int left=0,right=9;
while(left<=right){
        int mid;
mid=(left+right)/2;
if(mid==n){
    return mid;
}
else if(a[mid]>n){
    left=mid+1;
}
else{
    right=mid+1;
}
}
return -1;
}
int main(){
int arr[10]={2,3,4,6,8,7,9,1,5,0};
int num;
int a;
a=sizeof(arr)/sizeof(arr[0]);
cout<<"enter num to search"<<endl;
cin>>num;
sort(arr,arr+a);
int b=binarysearch(arr,num);
if(b==-1){
    cout<<"not found"<<endl;
}
else{
    cout<<"found at position"<<b<<endl;
}
}
