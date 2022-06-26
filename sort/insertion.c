
/// Insert Sort
#include<iostream>
using namespace std;
int main()
{
    int i,a[]= {3,6,2,9,1,4,7,5},temp,ck,j,k;
    int n;
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
       while(j>=0 && a[j]>temp){
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=temp;
    }
    

    for(i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}




