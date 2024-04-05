#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], stack[1000];
    int top = -1;
    printf("Input a string: ");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (top == -1 || stack[top] != s[i])
            stack[++top] = s[i];
        else
            top--;
    }
    stack[++top] = '\0';
    printf("Reversed string using a stack is: %s\n", stack);
    return 0;
}