#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
    char a[]="jAs1782 ";
    char b[9];

   // b=;
    if(isdigit(a[4])) printf("ok");
    puts(strlwr(a));
    return 0;
}
