
#include<stdio.h>
#include<math.h>
void main(){
 double x=1,y,a,S;
 int k=0;
printf("ievietot x \n");
scanf("%le",&x);
 y = (1-x)*exp(-x);
 printf("y=(1-x)*exp(-x)(%.2f)=%.2f\n",x,y);

 a = pow(-1,k)*pow(x,2*k+1)/(1.);
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<1000){
  k++;
  a = a * (-1) *x*x / ((2*k)*(2*k+1));
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
  }
}
