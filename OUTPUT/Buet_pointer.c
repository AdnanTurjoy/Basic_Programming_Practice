#include<stdlib.h>
#include<stdio.h>
#include<string.h> 
int main()
{
int i=0, length;

char string[]="Hello\0, World!!";
length = strlen(string); 
char *s = string ;

for(i=0; i<length; ++i){
 printf("%c", *++s); 
}
return 0;
}
