#include<stdio.h>
int partition(int a[], int low, int high){
  int pivot = a[low];
int  i = low;
  int j = high;

  while(i<j){
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
  }
  int temp= a[low];
  a[low]=a[j];
  a[j]=temp;
  return j;
}
void quickSort(int a[], int i, int j){
 if(i<j){
   int location = partition(a,i,j);
    quickSort(a,i,location-1);
    quickSort(a,location+1,j);
 }

}
int main()
{
    int a[8]={7,5,8,2,9},i;
    quickSort(a,0,4);
    for(i=0;i<5;i++) printf("%d ",a[i]);
    return 0;
}
