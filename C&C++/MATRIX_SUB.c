#include<stdio.h>
int main(){
	int matA[10][10], matB[10][10],n ,i , j;
	printf("Enter the Order of Square Matrix :");
	scanf("%d", &n);
	
	//ASSIGNING ELEMENTS TO MATRIX A
	printf("For Matrix A:\n ");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("The Element (%d,%d): ", i, j);
			scanf("%d", &matA[i][j]);
	    }
	}
	//ASSIGNING ELEMENTS TO MATRIX B
	printf("For Matrix B:\n ");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("The Element (%d,%d): ", i, j);
			scanf("%d", &matB[i][j]);
	    }
	}		
	// MATRIX SUBTRACTION
	int o[10][10];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			o[i][j]=matA[i][j] - matB[i][j];	
		}
	}		
	
	// PRINTING THE OUTPUT
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", o[i][j]);
		}
		printf("\n");	
	}
	return 0;				
}
