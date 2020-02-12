
#include<stdio.h>

typedef struct Node node;
struct Node
{

    int value;
    struct Node *next;
};

node *head = NULL;

void print (node *x)
{
    //printf("%d\t%p",x.value,x.next);
    printf("%p\t%d\t%p\n",x,x->value,x->next);

}
void print_all(node *x)
{
    while(x!=NULL)
    {

        printf("%d\t",x->value);
        x = x->next;
    }
}



int main()

{
    node a,b,c,d;
    head = &a;
    a.value = 5;
    a.next = &b;
    b.value = 6;
    b.next = &c;
    c.value = 7;
    c.next = &d;
    d.value = 8;
    d.next = NULL;

    print_all(head);

    // print(&a);
    //print(&b);
    //print(&c);
    //print(&d);

    //printf("%p\n",&a);
    //printf("%d\n",a.value);
    //printf("%d\n",a.next);
    //printf("%d\t%d\t",a.value,a.next);
    //printf("%p\t%p\t%p\t",&a,&a.value,&a.next);
    //printf("%d\t%p\n",a.value,a.next);
    // printf("%p\t%d\t%d\n",&a,a.value,a.next);
    // print(&a);





    return 0;
}
