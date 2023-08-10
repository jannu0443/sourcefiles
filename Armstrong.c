/* source file for Armstrong*/
#include<stdio.h>
main()
{
unsigned int n = 0,rem = 0,Sum = 0,temp = 0;

printf("enter an integer:");
scanf("%d",&n);

temp=n;

while(n!=0)
{
    rem=n%10;
    Sum+=(rem*rem*rem);
    n=n/10;
}

if(temp==Sum)
printf("armstrong number \n");
else
printf("not an armstrong number");

}
