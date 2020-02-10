#include<stdio.h>

int main()
{
    while (menu()!=5);


    return 0;
}
int menu()
{
    int op;
    printf("Select Linked List Operation\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Search\n");
    printf("5. Close\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        insert();

    }
    else if(op==2)
    {
        printf("===Delete Operation===\n");
    }
    else if(op==3)
    {
        printf("===Update Operation===\n");
    }
    else if(op==4)
    {
        printf("===Search Operation===\n");
    }
    else if(op==5)
    {
        printf("===Operation Closed===\n");
        return op;
    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}
int insert()
{
    int op;
    printf("Select Insert List Operation\n");
    printf("1. Pushfront()\n");
    printf("2. Pushback()\n");
    printf("3. Pushafter()\n");
    printf("4. Pushat()\n");
    printf("5. Close\n");
    printf("Input operation: ");
    scanf("%d", &op);
    if(op==1)
    {
        printf("pushfront operation\n");

    }
    else if(op==2)
    {
        printf("pushback operation\n");
    }
    else if(op==3)
    {
        printf("pushafter operation\n");
    }
    else if(op==4)
    {
        printf("pushat operation===\n");
    }
    else if(op==5)
    {
        printf("Operation Closed\n");
        return op;
    }
    else
    {
        printf("Invalid Operation Try Again\n");
    }


}

