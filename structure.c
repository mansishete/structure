#include<stdio.h>
#include<string.h>
struct car
{
int cno;
char cname[20],colour[20];
float cost; 
}s1[100];
int main()
{
int n,i,flag=0,ch;
char car_name[20];
void disp();
printf("\n enter limit=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter Cno Cname Colour Cost=");
scanf("\n %d%s%s%f",&s1[i].cno,&s1[i].cname,&s1[i].colour,&s1[i].cost);
}
do
{
printf("\n enter choice=1:search car by name \n 2:disaply all cars");
scanf("%d",&ch);
{
	switch(ch)
	{
	
case 1:printf("\n enter car model name to search=");
       scanf("%s",&cname);
       search(cname);
       break;

caes 2:disp();
       break;

default:printf("\n Invalid choice...");
}
}whi;r(ch>3);
}
void search (cname[20])
{
if(strcmp(s1[i].cname,cname==0)
{
flag=1;
printf("\n Record Found...");
printf("\n car no=%d",s1[i].cno);
printf("\n car colour=%s",s1[i].colour);
printf("\n car price=%f",s1[i].cost);
}
}
