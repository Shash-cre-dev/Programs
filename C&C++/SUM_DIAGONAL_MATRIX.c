#include<stdio.h>
int main(){
	int mat[10][10], c, r, i, j, sum= 0;
	printf("Enter the Rows of the matrix: ");
	scanf("%d", &r);
	printf("Enter the Columns of the matrix: ");
	scanf("%d", &c);
	
	// TAKING THE ELEMENTS
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf(" The element (%d,%d): ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}		
	// FOR DIAGONAL ADDITION
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(i==j){
				sum+=mat[i][j];
        	}
			
		}
	}					
	// PRINTING SUM
	printf(" The Sum of the diagonal : %d ", sum);
	
	return 0;
    }
