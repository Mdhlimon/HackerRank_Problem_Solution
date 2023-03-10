#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,and,or,xor,j,And=0,Or=0,Xor=0;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            and = i&j;
            or  = i|j;
            xor = i^j;
            if(and<k)
                if(and>And)
                    And=and;
            if(or<k)
                if(or>Or)
                    Or=or;
            if(xor<k)
                if(xor>Xor)
                    Xor=xor;

        }

    }
    printf("%d\n%d\n%d\n",And,Or,Xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
