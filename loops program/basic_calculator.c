#include <stdio.h>

int main()
{
    int a, b, c;
    char op;
    printf("Enter a operator\n");
    scanf("%c", &op);
    printf("Enter two no.\n");
    scanf("%d%d", &a, &b);

    switch (op)

    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;

    default:
        printf("Invalid opetator");

        break;
    }
    printf("\n%d", c);

    return 0;
}