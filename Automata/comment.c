// C program to identify whether a given line has a comment or not
#include<stdio.h>
#include<string.h>
int main()
{
	int i,tbutton=0;
	char ch1,ch2,str[300];
	printf("Enter a string\n");
	scanf("%s",str);
	for(i=0;i<strlen(str)-1;i++)
	{
		ch1=str[i];
		ch2=str[i+1];
		if(ch1=='/'&& (ch2=='/' ||ch2=='*'))
		{
			tbutton=1;break;
		}
	}

	if(tbutton==1)
	{
		printf("Contains comment\n\n");
	}
	else
		printf("Does not contain comment\n\n"); 
	
	return 0;
}

