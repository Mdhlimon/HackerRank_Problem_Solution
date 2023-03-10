#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   char ch,word[30],s[100];
    scanf("%c\n",&ch);
    scanf("%s\n",word);
    scanf("%[^\n]%*c",s);
    //gets(s);
    printf("%c\n%s\n%s\n",ch,word,s);
   // puts(s);

    return 0;
}
