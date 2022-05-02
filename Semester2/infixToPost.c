#include<stdio.h>

int main()
{
    printf("Given expression: (A+B^D)*(D/E)\n");
    int a,b, d, e;
    int i;
    printf("Enter element for A:\n");
    scanf("%d", &a);
    printf("Enter element for B:\n");
    scanf("%d", &b);
    printf("Enter element for D:\n");
    scanf("%d", &d);
    printf("Enter element for E:\n");
    scanf("%d", &e);

    int set_one = b;

    printf("Given Infix is: (%d + %d^%d)*(%d / %d)\n\n", a,b,d,d,e);

    printf("To postfix: %d%d%d^+%d%d/* \n\n",a,b,d,d,e);

    printf("Sum: \n");
    printf("|  ^  |\n");
    printf(" -----\n");
    printf("|  %d  |\n",d);
    printf(" -----\n");
    printf("|  %d  |\n",b);
    printf(" -----\n");

    for(i=1; i<d;i++)
    {
        set_one = set_one * b;
    }

    printf("\n\n\n");

    printf("|  +  |\n");
    printf(" -----\n");
    printf("| %d  |\n",a);
    printf(" -----\n");
    printf("| %d  |\n",set_one);
    printf("-----\n");
    int set_two = a + set_one;
    printf("\n\n\n");
    
    printf("|  /  |\n");
    printf(" -----\n");
    printf("| %d  |\n",d);
    printf(" -----\n");
    printf("| %d  |\n",e);
    printf(" -----\n");

    int set_3 = d/e;

    printf("\n\n\n");
    printf("|  *  |\n");
    printf(" -----\n");
    printf("| %d  |\n",set_3);
    printf(" -----\n");
    printf("| %d  |\n",set_two);
    printf(" -----\n");

    printf("Thus, %d", set_3*set_two);

}