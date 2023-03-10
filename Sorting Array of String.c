#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    int k=strcmp(a,b);
    if(k>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int lexicographic_sort_reverse(const char* a, const char* b) {
int k=strcmp(a,b);
    if(k>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}
int characters_count(const char *s)
{
    int n = 0;
    int count[128] = {0};
    if (NULL == s)
    {
        return -1;
    }
    while(*s != '\0')
    {
        if (!count[*s])
        {
            count[*s]++;
            n++;
        }
        s++;
    }
    return n;
}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int con = characters_count(a) - characters_count(b);
    int k=(con ? con : lexicographic_sort(a, b));
    if(k>0)
    {
        return 1;
    }
    else {
    return 0;
    }
}

int sort_by_length(const char* a, const char* b) {
    int x=strlen(a),y=strlen(b);
    if(x>y)
    {
        return 1;
    }
    else if(x==y)
    {
        int k=strcmp(a,b);
        if(k>0){
            return 1;
        }
        else {
        return 0;
        }

    }
    else {
    return 0;
    }

}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char *k[2500];
    for(int i=0;i<len;i++)
    {
        for(int j=(i+1);j<len;j++)
        {
             *k=arr[i];
            int return_valu=(*cmp_func)(arr[i],arr[j]);
            if(return_valu==1)
            {
                arr[i]=arr[j];
                arr[j]=*k;
            }
        }
    }

}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
