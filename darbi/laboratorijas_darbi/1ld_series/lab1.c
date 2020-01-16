#include<stdio.h>
#include<math.h>

void main(){
 long double x,y,a,s;
 int k=0;

 printf("Funkcijas (1-x)*exp(-x) aprēķināšana: \n");
 printf("Lietotājs, lūdzu, ievadi x vērtību: ");
 scanf("%Lf",&x);
 y = (1-x)*exp(-x);
 printf("(1 - %.2Lf)*exp(-%Lf) = %Lf\n",x,x,y);

 a = (1-x)*pow(x,0)/(1);
 s += a;

 while (k<1000)
 {
  if (k == 0)
   printf("a0 = %Le\tS0 =%Lf\n",a,s);
  k++;
  a = a*x/(k);
  s += a;
  if (k == 999)
   printf("a999 = %Le\tS999 =%Lf\n",a,s);
 }
 printf("a1000 = %Le\tS1000 =%Lf\n",a,s);

 printf("\n");
 printf("\t\t1000\n");
 printf("\t\t----\n");
 printf("\t\t\\\t\t        k\n");
 printf("\t\t \\\t\t(1-x)*x\n");
 printf("f(x)=\t\t|\t    ----------------\n");
 printf("\t\t /\t\t   k!\n");
 printf("\t\t/\n");
 printf("\t\t----\n");
 printf("\t\tk=0\n");

 printf("\n");
 printf("\t\t\tx\n");
 printf("R=\t\t   -----------\n");
 printf("\t\t\tk\n");
}
