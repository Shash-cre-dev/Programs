#include<stdio.h>
int main(){
	int n, i;
	float arr[20];
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	// TAKING ELEMENTS
	for(i=0; i<n; i++)
		scanf("%f", &arr[i]);
		
	// CHANGING -VE ELEMENTS	
	for(i=0; i<n; i++){
		if(arr[i]<0){
			arr[i]=0;
		}	
	}	
	
	// PRINTING THE  NEW ARRAY
	for(i=0; i<n; i++)
		printf("%f ", arr[i]);
		
	return 0;	
}
