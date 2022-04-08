
#include<stdio.h>
int main()
{
    char s[120]="Digital Bangladesh";
    s[4]='\0';
    int n = strlen(s);


    printf("%d\n",n);
    printf("%s\n",s); /// only t er jaygay newline hobe
    for(int i=6;i<=n;i++){
    printf("%c",s[i]);
    }

    return 0;
}

