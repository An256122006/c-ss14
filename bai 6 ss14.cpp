#include <stdio.h>
#include <string.h>
int main()
{
	char arr[10000];
	printf ("moi ban nhap chuoi ky tu: ");
	fgets(arr,10000,stdin);
	fputs(arr,stdout);
	char brr[]="abcdefghijklmnopqrstuvwxyz";
	int index=0;
	for (int i=0; i<strlen(arr); i++)
	{
		for (int j=0; j<strlen(brr); j++)
		{
			if (arr[i]==brr[j])
			{
				index++;
			}
		}
	}
	printf ("co so chu cai: %d",index);
	return 0;
}
