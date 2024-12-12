#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char arr[100];
    printf("Nhap chuoi: ");
    fgets(arr, 100, stdin);
    int lenght = strlen(arr);
    arr[0]=toupper(arr[0]);
	for (int i=0; i<lenght; i++)
	{
		if(arr[i]==' ')
		{
			arr[i+1]=toupper(arr[i+1]); 
		 } 
	} 
	 printf("Chuoi cua ban: %s", arr);
	return 0;
}
