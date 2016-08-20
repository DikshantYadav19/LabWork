//Program to check whether identifier is valid or not
#include<stdio.h>

#include<string.h>
int main()
{
	int i,v;
	char ch[31];

	printf("Enter identifier");
	scanf("%s",ch);

	for(i=0;i<strlen(ch);i++)
	{
		if(i==0)		// first letter
		{
			if(ch[i]>'A'&&ch[i]<'Z'||ch[i]>'a'&&ch[i]<'z'||ch[i]=='_')
			{
				v=1;
			}
			else
			{
				v=0;
				break;
			}
	
		}
		else
		{
			if(ch[i]>'A'&&ch[i]<'Z'||ch[i]>'a'&&ch[i]<'z'||ch[i]>'0'&&ch[i]<'9'||ch[i]=='_')
			{
				v=2;
			}
			else
			{
				v=0;
				break;
			}
		}
	}
	if(v==0)
	printf("Invalid Identifier\n");
	else
	printf("Valid Identifier\n");

}
