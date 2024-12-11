#include <stdio.h>
#include <string.h> 
int main()
{
	char arr[100];
	int lenght;
	fgets(arr,100,stdin);
	lenght=strlen(arr);
	fputs(arr,stdout); 
	printf ("%d",lenght); 
	return 0; 
} 
