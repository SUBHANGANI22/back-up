#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myArray *a,int tsize,int usize )
{
    //(*a).total_size=tsize;
    //(*a).used_size=usize;
    //(*a).ptr=(int*)malloc(tsize*sizeof(int));
    //The above line can also be written as
    a->total_size=tsize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
    a->used_size=usize;
}
void show(struct myArray *a)
{
    for (int  i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }   
}
void setval(struct myArray *a)
{
    int n;
    for (int  i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }   
}
int main()
{
    struct myArray marks;
    createarray(&marks,10,2);
    printf("We are running setval mode\n");
    setval(&marks);
    printf("We are running setval mode\n");
    show(&marks);
    return 0;
}