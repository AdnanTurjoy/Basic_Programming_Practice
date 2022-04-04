
#include<stdio.h>
int main()
{
    int n,i=0,j=0,k=0;
    char s[100],s1[100];
    scanf("%[^\n]s",s);
    int ln = strlen(s);
    while(i<ln){
        if(s[i]==' '){
            s[i+1]=s[i+1]-32;
          continue;
        }
        else{
            s[k++]=s[i];
        }
        i++;
    }
    ln = strlen(s);
    for(i=0;i<ln;i++) printf("%c",s[i]);
    return 0;
}
