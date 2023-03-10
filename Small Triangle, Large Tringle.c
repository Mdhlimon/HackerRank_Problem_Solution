#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double temp_area;
    triangle temp;
    float *area=(float*)malloc(sizeof(float)*n);
    for(int i=0; i<n; i++)
    {
        double s;
        s=(double)((tr[i].a)+(tr[i].b)+(tr[i].c))/2.0;
        area[i]=(float)sqrt(s*(s-tr[i].a)*(s-tr[i].b)*(s-tr[i].c));
    }
    for(int i=0;i<n;i++){
        for(int j=(i+1); j<n; j++)
        {
            temp=tr[i];
            temp_area=area[i];
            if(area[i]>area[j])
            {
                area[i]=area[j];
                area[j]=temp_area;

                tr[i]=tr[j];
                tr[j]=temp;
            }
        }

    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
