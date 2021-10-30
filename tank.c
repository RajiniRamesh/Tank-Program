/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the current tank level:");
    scanf("%d",&n);
for(i=n;i<=90;i++)
{
        printf("water is in %d level\n",i);
        if(i==90)
        {
            printf("water reached maximim level");
        }
}
        return 0;
    
}
