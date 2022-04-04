
#include<stdio.h>
int main()
{
    char s[10][10],temp[24];
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        gets(s[i]);
    }
   for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(strcmp(s[i],s[j])>0){
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);               /// Bubble sort in set of string
                strcpy(s[j],temp);
            }
        }
    }

    for(i=0;i<=n;i++){
        puts(s[i]);
    }
    return 0;
}

