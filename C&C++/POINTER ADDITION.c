#include<stdio.h>
int main(){
   
   float bs, hra, da, gs; 
   char name[30];
   fgets(name,20,stdin);
   scanf("%f", &bs);
   scanf("%f", &hra);
   scanf("%f", &da);
   
   //POINTER DECLARATION
   float *p, *q, *r;
   p=&bs;
   q=&hra;
   r=&da;
   gs= *p + *q+ *r;
   printf("%0.2f",gs);
   return 0;
}
