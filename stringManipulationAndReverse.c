

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^\n]s",s);
   int len= strlen(s);
   //printf("%d",len);
    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else{
            continue;
        }
    }
    for(int i=len-1;i>=0;i--) printf("%c",s[i]);

    return 0;
}
