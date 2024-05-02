#include <stdio.h>
#include <stdlib.h>

int a[10],pos,elem;
int n=0;
void create();
void display();
void insert();
void del();
void main()
{

    int choice;
    while(1)
    {
        printf("\n\n----------------------MENU---------------------\n\n");
        printf("\n1.Create an Array of n elements");
        printf("\n2.Display");
        printf("\n3.Insert element");
        printf("\n4.Delete an element from Array");
        printf("\n5.exit");

        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:del();
            break;
            case 5:exit(1);
            break;
            default:printf("Invalid Choice");
        }
    }
}

void create()
{
    int i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the Array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    int i;
    if(n==0)
    {
        printf("No elements to display");
        return ;
    }
    printf("\nArray elements are:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void insert()
{

    int i;
    if(n==5)
    {
        printf("Insertion is not possible\n");
        return ;

    }
    do
    {
        printf("Enter a valid position to delete an element:\n");
        scanf("%d",&pos);
    }while(pos>n);
    printf("Enter the value to be inserted\n");
    scanf("%d",&elem);
    for(i=0;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    n+=1;
    display();
}
void del()
{

    int i;
    if (n==0)
    {
        printf("\nNothing to delete");
        return;
    }
    do
    {

        printf("Enter a valid position to delete\n");
        scanf("%d",&pos);
    }while(pos>=n);
    elem=a[pos];
    printf("\nDeleted element is %d",elem);
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    display();
}
