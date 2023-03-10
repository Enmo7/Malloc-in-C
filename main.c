#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,i;
    printf("Please enter the size of your name:\n");
    scanf("%d", &len);

    char*ptr =(char*)malloc(len*sizeof(char));

    printf("Please enter the your name: \n");
    for(i=0; i<len; ++i)
    {
        scanf(" %c", &ptr[i]);
    }

    printf("Your name is : \n");
    for(i=0; i<len; ++i)
    {
        printf(" %c", ptr[i]);
    }
    return 0;
}
