/*1.Write a program to implement STACK using array.
Program must include the following function:
a. PUSH function
b. POP function
c. PEEK function
d.Demonstrate how stack can be used to check palindrome.
e. Demonstrate Overflow and Underflow situations on stack.
f. Display the status of stack.
g. Exit.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int s[5], top = -1;
void push()
{
    if (top == 4)
        printf("\nStack overflow!!!!");
    else
    {
        printf("\nEnter element to insert:");
        scanf("%d", &s[++top]);
    }
}

void pop()
{
    if (top == -1)
        printf("\nStack underflow!!!");
    else
        printf("\nElement popped is: %d", s[top--]);
}

void disp()
{
    int t = top;
    if (t == -1)
        printf("\nStack empty!!");
    else
        printf("\nStack elements are:\n");
    while (t >= 0)
        printf("%d ", s[t--]);
}

void pali()

{
    int num[5], rev[5], i, t;
    for (i = 0, t = top; t >= 0; i++, t--)
        num[i] = rev[t] = s[t];
    for (i = 0; i <= top; i++)
        if (num[i] != rev[i])
            break;
    if (i == top + 1)
        printf("\nIt is a palindrome");
    else
        printf("\nIt is not a palindrome");
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d", s[top]);
    }
}

int main()

{
    int ch;
    do
    {
        printf("\n...Stack operations.....\n");
        printf("1.PUSH 2.POP 3.Palindrome 4.Display 5.Peek 6.Exit\n");
        printf("Enter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            pali();
            break;
        case 4:
            disp();
            break;
        case 5:
            peek();
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    } while (1);
    return 0;
}