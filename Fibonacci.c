#include<stdio.h>
main()
{
unsigned int Element_1 = 0,Element_2 = 1, Sum = 0,n = 0;

printf("enter any integer\n");
scanf("%d",&n);

if(n < 1)
printf("Invalid number\n");

else if(n == 1)
printf("%d\n",Element_1);

else
    {
        printf("%d %d  ",Element_1,Element_2);
        while((Sum=Element_1+Element_2)<=n)
        {
            Element_1=Element_2;
            Element_2=Sum;
            printf("%d  ",Sum);
        }
    }

}
