
#include<stdio.h>
int main()
{
    int a=100;
    int *pt,**ptt,***pttt;
    pt=&a;
    ptt=&pt;                  // a->pt->ptt->pttt
    pttt=&ptt;



    printf("%x\n",&a);
    printf("%x\n",pt);
    printf("%x\n",&pt);     /// pt মানে  a এর যে এড্রেস পয়েন্ট করা ছিল ওইটা কিন্তু  &pt মানে pt এর নিজস্ব এড্রেস।
    printf("%x\n",ptt);
    printf("%x\n",pttt);
    return 0;
}
