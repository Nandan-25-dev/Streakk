#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Day 
{
    char *name;
    int date;
    char *activity;
};
struct Day* create();
void readdata (struct Day *week);
void display(struct Day *week);
int main()
{
    struct Day *week = create();
    readData(week);
    display(week);
    return 0;
}
struct Day* create()
{
    struct Day *week= (struct Day*)malloc(7*sizeof(char));
    if (week==NULL)
    {
        printf("FAILED TO ALLOCATE!!");
        exit(1);
    }
    return week;
}