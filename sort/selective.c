/// Selection Sort
#include<iostream>
using namespace std;
int main()
{
     int i,a[]= {3,6,2,9,1,4,7,5},temp,min,j,k;
    int n;
    n=sizeof(a)/sizeof(a[0]);

    for(i=0;i<n-1;i++){
        min=i;
        
       for(j=i+1;j<n;j++){
           if(a[j]<a[min]){
               min=j;
           }
       }
           temp=a[min];
           a[min]=a[i];
           a[i]=temp;
    }
     
    
        for(i=0;i<n;i++) cout<<a[i]<<" ";


    return 0;
}
