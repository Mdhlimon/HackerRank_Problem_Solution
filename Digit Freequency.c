#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[1000];
    int i,j;
    gets(a);
    for(i=0;i<10;i++)
    {   int s=0;
        for(j=0;j<strlen(a);j++)
        {
            if((a[j]-'0')==i)
            {
                s++;
            }
        }
         printf("%d ",s);
    }
    return 0;
}

