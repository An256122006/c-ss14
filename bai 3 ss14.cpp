#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    fgets (arr,100,stdin); 
	int lenght = strlen(arr);
	for (int i=0; i<lenght/2; i++)
	{
		int temp=arr[i];
		arr[i]=arr[lenght-i-1];
		arr[lenght-i-1]=temp;
	} 
	fputs (arr,stdout);
} 
