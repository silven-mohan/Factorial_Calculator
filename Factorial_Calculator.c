/** Factorial Calculator **/

#include<stdlib.h>

main()
{
	int f=1, n, i;
	system("cls");
	printf("Enter any number:");
	scanf("%d", &n);
	system("cls");
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("Factorial of %d is: %d",n, f);
}
