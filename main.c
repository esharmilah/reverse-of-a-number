/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rev=0,;
    scanf("%d",&n);
    while(n>0)
    {
        rev=n%10;
        printf("%d",rev);
        n=n/10;
    }
    
    
    return 0;
}
