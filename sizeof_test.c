#include <stdio.h>

struct person
{
    char name[20];
    int age;
    char gender;
};

int main()
{
    struct person clients[10];

    clients[0].age = 6;

    printf("%d\n",
           clients[0].age);

    printf("%d\n",
           sizeof(clients[0]));
}