#include<stdio.h>
int main()
{
    int a[5]= {3,2,5,4,8};
    int *pt;
     pt=a;

   /* for(int i=0; i<5; i++)
    {
        printf("%d",*pt);
        *pt++;
    }*/


    printf("\n%d",*(pt+2));

    return 0;
}
