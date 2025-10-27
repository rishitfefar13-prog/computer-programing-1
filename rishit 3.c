#include<stdio.h>

void main(_)
{

    int sumofno(int);
    printf("%d",sumofno(3));

}
int sumofno(int n)
{
   return ((n)?(n + sumofno(n-1)):0);
}
