//. Write a program in C to find the Fibonacci sequence upto 10th term.

#include<stdio.h>

int main()
{
    int i, first = 0, second = 1, last = first+second, term =10;

    printf("Fibonacci series upto 10th term:\n%d\t%d", first, second);

    for(i=0; i<term-2; i++)
    {
        printf("\t%d", last);
        first = second;
        second = last;
        last = first + last; 

    }
}