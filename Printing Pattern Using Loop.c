#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    const int N = (n * 2) - 1;

    for(int line=0; line<N; line++)
    {
        int nn = n;
        for(int col=0; col<N; col++)
        {
            if(line <= n-1)
            {
                if(col <= line)
                {
                    nn = n - col;
                }
            else if(col+line >= N)
                {
                    nn++;
                }
            }
            else
            {
                if(col - line >= 1)
                {
                    nn++;
                }
                else if(col+line <= N-1)
                {
                    nn = n - col;
                }
            }
            printf("%d ", nn);

        }

        printf("\n");

    }
    return 0;
}
