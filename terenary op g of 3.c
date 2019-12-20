//greatest of three using terinory operator
#include<stdio.h>
int main()
{
	int a=1000,b=200,c=100,d;
	d=(a>b&&a>c)?a:b>c?b:c;
	printf("%d",d);
	return 0;
}
