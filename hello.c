#include <stdio.h>

int main(void)
{
 int a,b,multiplication,addition,subtraction,operator;

 multiplication = 1;
addition = 2;
subtraction = 3;

 printf("HELLO WHATS THE VALUE OF A: ");
 scanf("%d",& a);
 printf("HELLO WHATS THE VALUE OF B: ");
 scanf("%d",& b);

 printf("TYPE OF OPERATION WHICH YOU WOULD LIKE TO PERFORM: ");
 scanf("%d",& operator);
 

 if (operator == multiplication)
{
    printf("\n%d", a * b);
}

 if (operator == addition)
{
    printf("\n%d", a + b);
}

 if (operator == subtraction)
{
    printf("\n%d", a - b);
}



 return 0;
}