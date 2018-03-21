#include<stdio.h>
#include<string.h>
main()
{
int n,i=1,fail=0,pass=0,m,max=0;
char name[67][30],*yr;
printf("enter the no of student: ");
scanf("%d",&n);
while(i<=n)
           {
           printf("\n\n%d enter the name of student: ",i);
           scanf("%s",name[i-1]);
           printf("\nenter the marks: ");
           scanf("%d",&m);
           {
           if(m>50)
           pass=pass+1;
           else
           fail=fail+1;
           }
           if (m>max)
          {

           max=m;
           yr=strdup(name[i-1]);
          } ++i;
           }
 printf("\n\n\a\t\tno of students pass is %d",pass);
 printf("\n\n\t\tno  of student fail is %d",fail);
 printf("\n\n\t\tthe maximum marks are %d of %s",max,yr);
 printf("\n\n\t\t\t\t\t\tso the topper of the class is %s",yr);
 }
