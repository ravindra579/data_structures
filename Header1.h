#pragma once
#pragma once
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
namespace sorting_algo {
    class sorting_algos {
private:
//merge function used to combie the splitted arraies and it is a part of merge_sort function-----------
//used method overloading
//double,float,int
void merge_(double *a,int l,int m,int r){
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for (int i=0;i<n1;i++){
    L[i]=a[i+l];
}
for (int i=0;i<n2;i++){
    R[i]=a[m+1+i];
}
int i,j;
 i=j=0;
int k=l;
while(i<n1 && j<n2){
    if(L[i]<=R[j]){
        a[k]=L[i];
        i++;
    }
    else{
        a[k]=R[j];
        j++;
    }
    k++;
}
while(i<n1){
    a[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    a[k]=R[j];
    j++;
    k++;
}
}
void merge_(float *a,int l,int m,int r){
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for (int i=0;i<n1;i++){
    L[i]=a[i+l];
}
for (int i=0;i<n2;i++){
    R[i]=a[m+1+i];
}
int i,j;
 i=j=0;
int k=l;
while(i<n1 && j<n2){
    if(L[i]<=R[j]){
        a[k]=L[i];
        i++;
    }
    else{
        a[k]=R[j];
        j++;
    }
    k++;
}
while(i<n1){
    a[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    a[k]=R[j];
    j++;
    k++;
}
}
void merge_(int *a,int l,int m,int r){
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2];
for (int i=0;i<n1;i++){
    L[i]=a[i+l];
}
for (int i=0;i<n2;i++){
    R[i]=a[m+1+i];
}
int i,j;
 i=j=0;
int k=l;
while(i<n1 && j<n2){
    if(L[i]<=R[j]){
        a[k]=L[i];
        i++;
    }
    else{
        a[k]=R[j];
        j++;
    }
    k++;
}
while(i<n1){
    a[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    a[k]=R[j];
    j++;
    k++;
}
}
//---------------------------------------------------------------------------------------
//---------------------------swap function-----------------------------------------------
        double swap_(double & a, double & b) {
            double c = b;
            b = a;
            a = c;
        }
        int swap_(int & a, int & b) {
            int c = b;
            b = a;
            a = c;
        }
        float swap_(float& a, float& b) {
            int c = b;
            b = a;
            a = c;
        }
//-------------------------------------------------------------------------------------
//----------------------------------max function---------------------------------------
        int max_(int *a){
    int b=a[0];
for(int i=1;i<6;i++){
    if(b<a[i]){
        b=a[i];
    }
}
return b;
}
//------------------------------------------------------------------------------------------------
//-----------------------------------counting for radix sort--------------------------------------
void counting_sort_(int *a,int size_,int div){
int count_[10];
int output[size_];
for(int i=0;i<10;i++){
 count_ [i]=0;
}
for(int i=0;i<size_;i++){
++count_[(a[i]/div)%10];
}
for(int i=1;i<10;i++){
 count_[i]+=count_[i-1];
}
for(int i=size_-1;i>=0;i--){
    output[count_[(a[i]/div)%10]-1]=a[i];
    count_[(a[i]/div)%10]--;
}
for(int i=0;i<size_;i++){
    a[i]=output[i];
}
}

//---------------------------------------------------------------------------------------------
    public:
        //in this whole file method overloading is used for every function
//----------------selection_sort------------------------------------------------------------------
        double selection_sort(double* a, int n) {
            for (int i = 0;i < n;i++) {
                for (int j = i;j < n;j++) {
                    if (a[i] > a[j]) {
                        swap_(a[i], a[j]);
                    }
                }
            }
        }
        float selection_sort(float* a, int n) {
            for (int i = 0;i < n;i++) {
                for (int j = i;j < n;j++) {
                    if (a[i] > a[j]) {
                        swap_(a[i], a[j]);
                    }
                }
            }
        }
        int selection_sort(int* a, int n) {
            for (int i = 0;i < n;i++) {
                for (int j = i;j < n;j++) {
                    if (a[i] > a[j]) {
                        double b;
                        swap_(a[i], a[j]);
                    }
                }
            }
        }
//---------------------------------------------------------------------------------------------------
//--------------------insertion_sort-----------------------------------------------------------------
        double insertion_sort(double *a,int n){
for( int i=1;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]<a[j]){
                swap_(a[i],a[j]);
        }
    }
 }
}
int insertion_sort(int *a,int n){
for( int i=1;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]<a[j]){
                swap_(a[i],a[j]);
        }
    }
 }
}
float insertion_sort(float *a,int n){
for( int i=1;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]<a[j]){
                swap_(a[i],a[j+1]);
        }
    }
 }
}
//---------------------------------------------------------------------------------------------
//----------------------------------bubble_sort------------------------------------------------
int bubble_sort(int *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
             swap_(a[i],a[j+1]);
        }
    }
 }
}
double bubble_sort(double *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap_(a[i],a[j+1]);
        }
    }
 }
}
float bubble_sort(float *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            swap_(a[i],a[j+1]);
        }
    }
 }
}
//--------------------------------------------------------------------------------------------------------
//-------------------------------------------merge_sort----------------------------------------------------
void merge_sort(int *a,int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,r);
    merge_(a,l,m,r);
}
}
void merge_sort(double *a,int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,r);
    merge_(a,l,m,r);
}
}
void merge_sort(float *a,int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,r);
    merge_(a,l,m,r);
}
}
//-----------------------------------------------------------------------------------------------------
//---------------------------------------------------quick_sort-----------------------------------------
//quick_sort implamented with pivot element as first one and we can make pivot element as median,mode,mean,....etc as our wish
quick_sort(double *a,int l,int r){
if(r-l>0){
   int yellow=l+1;
   int green;
    for(green=l+1;green<r;green++){
        if(a[green]<=a[l]){
            swap_(a[yellow],a[green]);
            yellow+=1;
        }
    }
    int c=a[l];
    a[l]=a[yellow-1];
    a[yellow-1]=c;
    quick_sort(a,l,yellow-1);
    quick_sort(a,yellow,r);
}
}
quick_sort(int *a,int l,int r){
if(r-l>0){
   int yellow=l+1;
   int green;
    for(green=l+1;green<r;green++){
        if(a[green]<=a[l]){
            swap_(a[yellow],a[green]);
            yellow+=1;
        }
    }
    int c=a[l];
    a[l]=a[yellow-1];
    a[yellow-1]=c;
    quick_sort(a,l,yellow-1);
    quick_sort(a,yellow,r);
}
}
quick_sort(float *a,int l,int r){
if(r-l>0){
   int yellow=l+1;
   int green;
    for(green=l+1;green<r;green++){
        if(a[green]<=a[l]){
            swap_(a[yellow],a[green]);
            yellow+=1;
        }
    }
    int c=a[l];
    a[l]=a[yellow-1];
    a[yellow-1]=c;
    quick_sort(a,l,yellow-1);
    quick_sort(a,yellow,r);
}
}
//-------------------------------------------------------------------------------------------------------
//----------------------------counting_sort--------------------------------------------------------------
void counting_sort(int *a,int size_){
int count_[10];
int output[10];
for(int i=0;i<10;i++){
 count_ [i]=0;
}
for(int i=0;i<size_;i++){
++count_[a[i]];
}
for(int i=1;i<10;i++){
 count_[i]+=count_[i-1];
}
for(int i=0;i<size_;i++){
    output[--count_[a[i]]]=a[i];
}
for(int i=0;i<size_;i++){
 a[i]=output[i];
}
}
//---------------------------------------------------------------------------------------
//----------------------------radix_sort-------------------------------------------------
void radix_sort(int *a,int size_){
int maxi=max_(a);
for(int div=1;maxi/div>0;div*=10){
    counting_sort_(a,size_,div);
}
}
//-----------------------------------------------------------------------------------------------------
//--------------------------------shell_sort--------------------------------------------------------
void shell_sort(int *a,int size_){
int gap=size_/2;
for(;gap>0;gap/=2){
for(int i=gap;i<size_;i++){
    int j=0;
int temp=a[i];
    for(j=i;j>=gap&&a[j-gap]>temp;j-=gap){
        a[j]=a[j-gap];
    }
    a[j]=temp;
}
}
}
void shell_sort(double *a,int size_){
int gap=size_/2;
for(;gap>0;gap/=2){
for(int i=gap;i<size_;i++){
    int j=0;
int temp=a[i];
    for(j=i;j>=gap&&a[j-gap]>temp;j-=gap){
        a[j]=a[j-gap];
    }
    a[j]=temp;
}
}
}
void shell_sort(float *a,int size_){
int gap=size_/2;
for(;gap>0;gap/=2){
for(int i=gap;i<size_;i++){
    int j=0;
int temp=a[i];
    for(j=i;j>=gap&&a[j-gap]>temp;j-=gap){
        a[j]=a[j-gap];
    }
    a[j]=temp;
}
}
}
//----------------------------------------------------------------------------------------------------
    };
//---------------------------binary search-------------------------------------------------------------
class search_algos{
public:
    sorting_algos ob;
int binarysearch(int *a,int n,int size_){
int b;
b=sizeof(a)/sizeof(a[0]);
ob.bubble_sort(a,size_);
int temp=-1;
int left=0,right=size_;
while(left<=right){
        int mid;
mid=left+((right-left)/2);
if(a[mid]==n){
    return mid;
}
else if(a[mid]<n){
    left=mid+1;
}
else{
    right=mid-1;
}
}
return -1;
}
int binarysearch(double *a,int n,int size_){
int b;
b=sizeof(a)/sizeof(a[0]);
ob.bubble_sort(a,size_);
int temp=-1;
int left=0,right=size_;
while(left<=right){
        int mid;
mid=left+((right-left)/2);
if(a[mid]==n){
    return mid;
}
else if(a[mid]<n){
    left=mid+1;
}
else{
    right=mid-1;
}
}
return -1;
}
int binarysearch(float *a,int n,int size_){
int b;
b=sizeof(a)/sizeof(a[0]);
ob.bubble_sort(a,size_);
int temp=-1;
int left=0,right=size_;
while(left<=right){
        int mid;
mid=left+((right-left)/2);
if(a[mid]==n){
    return mid;
}
else if(a[mid]<n){
    left=mid+1;
}
else{
    right=mid-1;
}
}
return -1;
}
int linear_search(int a[],int n){
int temp=-1;
for(int i=0;i<5;i++){
    if(a[i]==n){
        temp=i;
    }
}
    return temp;
}
int linear_search(double a[],int n){
int temp=-1;
for(int i=0;i<5;i++){
    if(a[i]==n){
        temp=i;
    }
}
    return temp;
}
int linear_search(float a[],int n){
int temp=-1;
for(int i=0;i<5;i++){
    if(a[i]==n){
        temp=i;
    }
}
    return temp;
}
    };
}
