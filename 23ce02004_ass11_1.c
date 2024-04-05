
#include <stdio.h>
#include <string.h>
void push(char stack[], char element, int *top, int m)
{
    if (*top == m - 1)
        printf("Stack overflow\n");
    else
    {
        *top = *top + 1;
        stack[*top] = element;
    }
}
char pop(char stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        char element = stack[*top];
        *top = *top - 1;
        return element;
    }
}
int main()
{
    char stack[100];
    int top = -1;
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
        push(stack, str[i], &top, 100);
    printf("Reversed string using a stack is: ");
    while (top != -1)
        printf("%c", pop(stack, &top));
    printf("\n");
   return 0;
}
