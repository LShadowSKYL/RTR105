#include <stdio.h>
void main()
{
int a = 100;// atmiņā parādīsies mainīgais a (izmērs 1byte, saturs 0110 0100)
printf("Operacija <<: %d<<1 rezultats %d\n",a,a<<1);// sagaidam skaitli 50

int b;//atmiņā parādīsies mainīgais b (izmērs 1 byte, saturs ???? ????)
printf("b mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;// šeit ir divas operācijas - = (piešķiršana) un <<(bīdīšana pa bitiem pa kreisi)
printf("Operacija <<: %d<<%d rezultats %d\n",a,2,b);//sagaidīsim skaitli 25
int c;
printf("\n\nPapētīsin .. operāciju\n-------------------------\n");
printf("Cienījamais lietotaj, lūdzu, ievadi operācijas 1. operandu: ");
scanf("%d",&a);
printf("Cienījamais lietotaj, lūdzu, ievadi operācijas 2. operandu: ");
scanf("%d",&c);
b=a<<c;
printf("-------------------------\nSkaties, kas ir sanācis: %d\n",b);
}
