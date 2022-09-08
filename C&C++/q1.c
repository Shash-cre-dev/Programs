#include<stdio.h>

void increment(int n){
    static int d = 2;
    printf("%d",n);
    printf("%d",d);
    ++d;
    if(n>1){
        increment(n-1);
    }
    printf("%d" , d);

}
int main(){
    increment(3);
    return 0;
} 
// 3 2 2 3 1 4 5 5 5  
