#include<stdio.h>
main()
{
int year,a,b,c,d,e;
printf("note 1=tue, 2=wed,3=thu,4=fri,5=sat,6=sun,7=mon");
printf("\n\n\a\t\t\tenter the year : ");
scanf("%d",&year);
a=year-2001;
b=(year-2001)/4;
c=a+b;
d=c-7;
e=c-14;
if (c<=7)
printf("%d",c);
if ((c>7)&&(c<=14))
printf("%d",d);
if ((c>14)&&(c<=21))
printf("%d",e);
}#include<stdio.h>
main()
{
int year,a,b,c,d,e;
printf("note 1=tue, 2=wed,3=thu,4=fri,5=sat,6=sun,7=mon");
printf("\n\n\a\t\t\tenter the year : ");
scanf("%d",&year);
a=year-2001;
b=(year-2001)/4;
c=a+b;
d=c-7;
e=c-14;
if (c<=7)
printf("%d",c);
if ((c>7)&&(c<=14))
printf("%d",d);
if ((c>14)&&(c<=21))
printf("%d",e);


