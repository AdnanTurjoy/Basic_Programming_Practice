
#include<stdio.h>
int main()
{
    char a[8]="hello";
    char *pt;
    pt=&a;
    printf("%c\n",*(pt+2));


    char *b[2]= {"hello","world"};
    printf("%s\n",*(b+1));



    char str[100]="Harry Potter";
    printf("%s\n",str);
    printf("%s\n",str+2);
    printf("%c\n",*str);           /// *str দিয়ে একটা সস্ট্রিংএর  ১ম ইলিমেন্ট অর্থাৎ ১ম ক্যারেক্টার প্রিন্ট করবে


    printf("%c\n",*(str+6));        /// 6 number element
    printf("%c\n",str[6]);


    char *nameptr;
    nameptr=str;
    printf("*nameptr = %c\n",*nameptr);
    printf("%c\n",*(nameptr+1));
    printf("%c\n",*(nameptr+7));



    return 0;
}


// \0 == NULL
// \n == New Line
