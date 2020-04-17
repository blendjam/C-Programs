#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * revPar(char * str)
{
    char * output = (char*)malloc((strlen(str)) * sizeof(char));
    int start = strlen(str), end = 0, j, i;
    while(str[--start] != '('){}
    while(str[++end] != ')'){}
    int times = end - 1;
    int index = 0;
    char bracket = "(";
    for(i = 0; i < strlen(str);i++)
    {
        if(i != start)
        {
            output[index] = str[i];
            index++;
        }
        else
        {
            for(j = i; j < times; j++) 
            {
                output[j] = str[--end];       
            }
            index = j; 
            i = j + 1;
        }  
    }
    output[index] = '\0';
    index = 0;
    while(output[index] != '\0')
    {
        if(output[index] == '(')
            output = revPar(output);
        index++;
    }
        return output;

}
int main()
{
    char * name = "Sa(n(ketLa)m)";
    char * out = revPar(name);
    printf("%s",out);
    return 0;
}