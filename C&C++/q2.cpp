// int product sum (int * a , int *b , int n)

#include<iostream>
using namespace std;

int product_sum(int* a , int *b , int n){
    int sum = 0;
    for(int i = 0; i<n ;i++){
        sum += *(a+i) + *(b+i);
    }    
    cout<<sum;
}


int main(){
    int size   = 5;
    int c[] = {1,2,3,4,5};
    int d[] = {6 , 7 , 8 ,9 ,10};
    int *a  = &c[0];
    int *b = &d[0];
    int x = product_sum(a , b , size);
}