#include<stdio.h>

int main()
{
    unsigned int Data_1 = 0, Data_2 = 0, result = 0;

    printf("Enter Data_1 in Hex format:\n");
    scanf("%X",&Data_1);

    printf("Enter Data_2 in Hex format:\n");
    scanf("%X",&Data_2);

    result = Data_1 || Data_2;
    printf("OR Result = %x\n",result);

    result = Data_1 && Data_2;
    printf("AND Result = %x\n",result);

    result = Data_1 | Data_2;
    printf("OR Result = %x\n",result);

    result = Data_1 & Data_2;
    printf("AND Result = %x\n",result);

    result = Data_1 ^ Data_2;
    printf("XOR Result = %x\n",result);

    result = Data_1 >> 2;
    printf("Right Shift Result = %x\n",result);

    result = Data_2 << 2;
    printf("Left Shift Result = %x\n",result);

    //Masked bits
    result = Data_1&0xFF;
    printf("Right Shift Result = %x\n",result);

    //Masked bits
    result = Data_2&0xFF0;
    printf("Right Shift Result = %x\n",result);
}
