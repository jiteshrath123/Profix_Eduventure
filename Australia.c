#include<stdio.h>
main()
{
int a,b=1,c;
printf("**********************************TABLE OF ANY NUMBER************************************* ");
getch();
printf("\n\n\a\t\tenter the number  :");
scanf("%d",&a);
printf("enter : ");
scanf("%d",&c);
while(b<=10)
      {
      printf("\n%d",c);


    c=c+a;
      b++;
      }
 }
