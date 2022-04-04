
#include<stdio.h>
int partition(int a[], int low, int high){
  int pivot = a[low];
int  start= low;
  int end= high;

  while(start<end){
    while(a[start]<=pivot){
        start++;
    }
    while(a[end]>pivot){
        end--;
    }
    if(start<end){
        int temp = a[start];
        a[start]=a[end];
        a[end]=temp;
    }
  }
  int temp= a[low];
  a[low]=a[end];
  a[end]=temp;
  return end;
}
void quickSort(int a[], int low, int high){
 if(low<high){
   int location = partition(a,low,high);
    quickSort(a,low,location-1);
    quickSort(a,location+1,high);
 }

}
int main()
{
    int a[8]={7,5,8,2,9},i;
    quickSort(a,0,4);
    for(i=0;i<5;i++) printf("%d ",a[i]);
    return 0;
}
