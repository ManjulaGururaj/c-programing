#include<stdio.h>
#include<stdlib.h>

#define OFFSET_OF(Type,Mem)  ((unsigned long long)(&(((Type*)0)->Mem)))

struct A
{
    int a;
    char b;
    float c;
};

struct B
{
    char a;
    int b;
    char c;
    int d;
};

struct C
{
    char a,b;
    int c,d;
};

int main(void)
{
    printf("OFFSET OF(struct A,a)=%llu\n",OFFSET_OF(struct A,a));
    printf("OFFSET OF(struct A,b)=%llu\n",OFFSET_OF(struct A,b));
    printf("OFFSET OF(struct A,c)=%llu\n",OFFSET_OF(struct A,c));

    printf("OFFSET OF(struct A,a)=%llu\n",OFFSET_OF(struct B,a));
    printf("OFFSET OF(struct A,b)=%llu\n",OFFSET_OF(struct B,b));
    printf("OFFSET OF(struct A,c)=%llu\n",OFFSET_OF(struct B,c));
    printf("OFFSET OF(struct A,d)=%llu\n",OFFSET_OF(struct B,d));

    printf("OFFSET OF(struct C,a)=%llu\n",OFFSET_OF(struct C,a));
    printf("OFFSET OF(struct C,b)=%llu\n",OFFSET_OF(struct C,b));
    printf("OFFSET OF(struct C,c)=%llu\n",OFFSET_OF(struct C,c));
    printf("OFFSET OF(struct C,d)=%llu\n",OFFSET_OF(struct C,d));

    return 0;

}
