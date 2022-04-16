
#include<stdio.h>
int main()
{
    int a=100;
    int *pt,**ptt,***pttt;
    pt=&a;
    ptt=&pt;
    pttt=&ptt;




    printf("%d\n",***pttt);
    printf("%x\n",pttt);


    return 0;
}
