/*Write a program that defines a structure called STUDENT with suitable
attributes and reads the data for 5 students. Your program should display
the records in ascending order according to the name of the students.*/
#include <stdio.h>
#include <string.h>
struct STUDENT
{
	int roll;
	char name[20];	
};
int main()
{
	struct STUDENT s[3];
	printf("Enter your Names :");
	int i,j;
	// For input
	for(i = 0; i < 3; i++)
	{
		gets(s[i].name);
	}
	char temp[3];
	//Arranging name in ascending order
	for(i = 0; i < 3; i++)
	{
		for(j = i+1;j < 3;j++)
		{
			if(strcmp(s[i].name,s[j].name) >0)
			{
				strcpy(temp,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,temp);
			}
		}
	}
	
	
	
	// For output
	for(i = 0; i<3 ; i++)
	{
		printf("%s ",s[i].name);
	}
}
