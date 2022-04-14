
#include<stdio.h>
int main()
{

    int *pc, c;
    c = 5;
    pc = &c;
    //*pc = c;     // same kaj korbe
    printf("%d", *pc);

    return 0;
}
