
#include <stdio.h>

int main()
{
	int x, y,a;
	printf("Enter Value of x,y ");
	scanf("%d%d", &x,&y);
	a = x;
	x = y;
	y = a;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}