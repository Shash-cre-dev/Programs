#include<stdio.h>
int main(){
	int ar[20], n, temp, i, j;
	printf("Enter the size of the array:");
	scanf("%d", &n);
	
	// TAKING ELEMENTS
	for(i=0; i<n; i++)
		scanf("%d", &ar[i]);
		
	// SWAPPING THE ELEMENTS	
	i=0;
	j=n-1;
	while(i<j){
		temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
		i++;
		j--;
		
		}
		
	// PRINTING THE ARRAY
	for(i=0; i<n; i++)
		printf("%d ", ar[i]);
	
	return 0;	
}
