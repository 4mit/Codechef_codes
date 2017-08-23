#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
	int cases, flag1 = 0, flag2 = 0, len,x,i;
	scanf("%d",&cases);
	char str[100001];
	for(x = 0; x < cases; x++)
	{
		flag1 = 0; flag2 =0;
		scanf("%s",str);
		len = strlen(str);
		for(i = 0; i < len; i++)
		{
		//printf("FLAG1 = %d FLAG2 = %d\n",flag1,flag2);
 
			if(flag1 == 1) 
			{
				if(str[i] == 48)
				{
					flag1 = 0;
					flag2 = 1;
				}
			}
			else if(flag2 == 1)
			{
				if(str[i] == 49)
				{
					flag2 = 2;
					break;
				}
			}
			else if(str[i] == 49) flag1 = 1;
		}
 
		if(flag2 == 1 || flag1 == 1) printf("YES\n");
 
		else printf("NO\n");
	}
	return 0;