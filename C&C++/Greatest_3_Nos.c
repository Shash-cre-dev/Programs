// GREATEST OF THREE NOS
#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter Three Nos: ");
	scanf("%d %d %d", &x, &y, &z);
	if(x>=y && x>=z)
			printf("x is greatest %d", x);
	if(y>=x && y>=z)
			printf("y is greatest %d", y);
	if(z>=x && z>=y)
			printf("z is greatest %d",z);
	
	return 0;
}
