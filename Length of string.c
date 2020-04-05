#include <stdio.h>
#include <string.h>
int main()
{
    char strings[] = "1 23 45 6";
    int count = 0;
    int i;
    for( i = 0; i < strlen(strings); i++)
    {
        if(strings[i] != ' ')
            count++;
    }
    printf("Total number of characters in a string %d \n",count);
    printf("No of spaces %d",strlen(strings)-count);
    return 0;
}
