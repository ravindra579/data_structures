#include"iostream"
using namespace std;
int selection_sort(int *a,int n){
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(a[i]>a[j]){
            int b;
            b=a[j];
            a[j]=a[i];
            a[i]=b;
        }
    }
 }
}
int insertion_sort(int *a,int n){
for( int i=1;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]<a[j]){
             int b;
            b=a[j];
            a[j]=a[i];
            a[i]=b;
        }
    }
 }
}
int bubble_sort(int *a,int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            int b;
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
        }
    }
 }
}
void merge_(int a[],int l,int m,int r){
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
void mergesort(int a[],int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge_(a,l,m,r);
}
}
int mean(int a[],int n,int z){
int sum =0;
for (int i=z;i<n;i++){
sum+=a[i];
}
    return sum/n;
}
quick_sort(int a[],int l,int r){
if(r-l>0){
   int yellow=l+1;
   int green;
    for(green=l+1;green<r;green++){
        if(a[green]<=a[l]){
            int b;
            b=a[yellow];
            a[yellow]=a[green];
            a[green]=b;
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
int main(){
 int a[4]={8,3,2,6};
 //selection_sort(a,n);
 //insertion_sort(a,n);
 //bubble_sort(a,n);
 //mergesort(a,0,n-1);
 int n=4;
quick_sort(a,0,4);
 for(int i=0;i<n;i++){
    cout<<a[i];
 }
}
