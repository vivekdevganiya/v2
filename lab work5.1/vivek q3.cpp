#include<stdio.h>
main()

{

int maths[100];
printf("enter your maths marks:");
scanf("%d",&maths);

int english[100];
printf("enter your english marks:");
scanf("%d",&english);

int science[100];
printf("enteryour science marks:");
scanf("%d",&science);

int sum=maths[0]+english[0]+science[0];
printf("%d\n",sum);

float pr=sum/3;
printf("your pr is %.2f",pr);



}