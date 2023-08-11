#include<stdio.h>
void call_by_value(int a);		/*Function Deceleration*/
void call_by_reference(int *a);
/*Function Definition*/
void call_by_value(int a)
{
    a++;
    printf("call_by_value output %d\n",a);
	/*if(a == 0)
        return 1;
    else{
        //fact = fact * function(a-1);
        return (a * call_by_value(a-1));
        }*/
return;
}

void call_by_reference(int *a)
{
	(*a)++;
    printf("call_by_reference output %d\n",*a);
return;
}

int main()
{
   int x = 0;
printf("eneter 1 inputs\n");
scanf("%d",&x);

call_by_value(x);
printf("Return type %d\n",x);	 /*Function Call*/

call_by_reference(&x);
printf("Return type %d\n",x);



    /* Single Pointer */

   /* int a = 10;
    int *ptr = &a;

    printf("Output for the data %d and pointer is %u\n", a, ptr);

    a++;
    *ptr++;
    printf("Output for the data %d and pointer is %u\n", a, ptr);*/




/* double Pointer */
    /*int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("Output for the data %d and pointer is %u with double pointer is %u\n", a, ptr, pptr);

    a++;
    *ptr++;
    **pptr++;
    printf("Output for the data %d and pointer is %u with double pointer is %u\n", a, ptr, pptr);*/

}
