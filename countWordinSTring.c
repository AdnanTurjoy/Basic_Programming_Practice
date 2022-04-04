

#include<stdio.h>
int main()
{
    int n,i=0,j=0,k;
    char s[100];
    scanf("%[^\n]s",s);
    while(s[i]!='\0'){
        if(s[i]==' '){
            j++;
        }
        i++;
    }
    printf("%d",j+1);
    return 0;
}
