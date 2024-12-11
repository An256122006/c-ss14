#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1000];
	int index=1;
	printf ("moi ban nhap chuoi kys tu:");
	fgets(arr,1000,stdin);
	fputs(arr,stdout);
	for(int i=0; i<strlen(arr); i++)
	{
		if (arr[i]==' ')
		{
			index++;
		}
	 } 
	 printf ("so tu %d",index);
	 return 0;
}
