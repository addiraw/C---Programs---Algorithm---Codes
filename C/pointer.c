#include <stdio.h>
void main()
{
    int a[2][3][2]={1,2,3,4,6,7,7,8,9,11,12};
    printf("%u and %u",**a,**a+1);
    
    
}