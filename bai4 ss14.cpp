#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1000], seach;
	int index=0;
	printf ("moi ban nhap 1 chuoi bat ky:");
	fgets(arr,1000,stdin);
	int lenght=strlen(arr);
	fputs(arr,stdout);
	printf ("moi ban nhap 1 ky tu bat ky ban muon tim kiem:");
	scanf ("%c",&seach);
	for (int i=0; i<lenght; i++)
	{
		if (seach==arr[i])
		{
			index++;
		}
	}
	printf ("so lan xuat hien cua %c trong chuoi:%d",seach,index);
	return 0;
}
