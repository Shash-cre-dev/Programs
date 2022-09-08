#include<stdio.h>
int main(){
	int ar[20],n ,i ,min , max;
	printf("Enter the size of Array:");
	scanf("%d", &n);
	
	// TAKING ELEMENTS
	for(i=0; i<n; i++)
		scanf("%d" , &ar[i]);
	
	// FINDING MIN AND MAX
	min = ar[0];
	max = ar[0];
	for(i=0; i<n; i++){
		if(min>ar[i])
			min=ar[i];
		if(max<ar[i])
			max=ar[i];			
	}
			
	// PRINTING MAX AND MIN
	printf("MAX ELEMENT = %d/n ", max);
	printf("MIN ELEMENT = %d/n", min);
	
	return 0;			
}
