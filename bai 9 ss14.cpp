#include <stdio.h>
#include <string.h>
int main()
{
	char arr[50];
	printf ("moi nhap chuoi:");
	fgets(arr,50,stdin);
	int lenght=strlen(arr);
	char value;
	printf ("moi nhap chu cai muon xoa:");
	scanf ("%c",&value);
	int index;
	for (int i=0; i<lenght; i++)
	{
		if(arr[i]==value)
		{
			index=i;
		}
	}
	for (int i=index; i<lenght; i++)
	{
		arr[i]=arr[i+1];
	}
	lenght--;
	fputs(arr,stdout);
	return 0;
}
