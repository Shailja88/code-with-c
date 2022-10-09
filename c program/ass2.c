/*2.write a program to implement queue using array.
QUEUE OPERATIONS USING ARRAY
1.insert an element
2.Delete an element
3.Display the queue
4.Demonstrate Overflow and Underflow situations on
Circular QUEUE
5. Display the status of QUEUE
6. Exit
*/
#include <stdio.h>
#include <stdlib.h>

#define n 100
int queue[n], ch = 1, front = 0, rear = 0, i, j = 1, x = n;

void insert()
{
    if (rear == x)
        printf("\nQueue Overflow");
    else
    {
        printf("Enter Element of to inserted %d:  ", j++);
        scanf("%d", &queue[rear++]);
    }
}

void delete ()
{
    if (front == rear)
    {
        printf("\n Queue Underflow");
    }
    else
    {
        printf("\n Deleted Element is -->%d  ", queue[front++]);
        x++;
    }
}

void display()
{
    printf("Queue Elements are: -->  ");
    if (front == rear)
        printf("\nEmpty Queue !! Queue Underflow!!");
    else
    {
        for (i = front; i < rear; i++)
        {
            printf("%d  ", queue[i]);
        }
    }
    printf("\n") ; 
}

int main()
{
    while (ch)
    {
        printf("\n\tQueue using Array\t\n");
        printf("1. Insertion  2. Deletion  3. Display  4. Exit");
        printf("\nEnter the Choice:  ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete ();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Option !! Try Again !!");
        }
    }
    return 0;
}
