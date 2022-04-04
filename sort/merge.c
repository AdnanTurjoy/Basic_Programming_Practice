
#include<stdio.h>
void merge(int a[],int L[], int lcount, int R[], int rcount){
  int i=0,j=0,k=0;
  while(i<lcount && j<rcount){
    if(L[i]<R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];

  }
  while(i<lcount) a[k++]=L[i++];
  while(j<rcount) a[k++]=R[j++];
};
void mergeSort(int a[],int n){
  int L[n],R[n],mid,i,j,k;
  if(n<2) return;
  mid=n/2;
  L[mid];
  R[n-mid];
  for(i=0;i<mid;i++) L[i]=a[i];
  for(i=mid;i<n;i++) R[i-mid]=a[i];

  mergeSort(L,mid);
  mergeSort(R,n-mid);

  merge(a,L,mid,R,n-mid);
}
int main()
{
    int a[10],i,j,k,ck;
    for(i=0;i<5;i++) scanf("%d",&a[i]);

    mergeSort(a,5);



        for(i=0;i<5;i++) printf("%d ",a[i]);

    return 0;
}

