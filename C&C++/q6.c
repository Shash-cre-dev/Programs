#include<stdio.h>

int* divisible(int* a , int k , int n){
    for(int i = 0; i<n;i++){
        *(a+i) = *(a+i)%k;
    }
}


int main(){
    int n;
    printf("Enter size\n");
    scanf("%d" , &n);
    int arr[50];
    for(int i =0 ; i<n;i++){
        scanf("%d" , &arr[i]);
    }
    divisible(arr , 5 , n);
    for(int i =0 ; i<n;i++){
        printf("%d  " , arr[i]);
    }

}