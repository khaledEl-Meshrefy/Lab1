#include <stdio.h>

int main()
{
   int k=12;
   int *ptr;
   ptr=&k;
   *ptr=10 ;
    printf ( "Address of var is: %X\n", ptr);
    printf ( "Address of var is: %X\n", &ptr);
    printf ( "Address of var is: %d\n", k);
    printf ( "Address of var is: %d\n", *ptr);
    return 0;
}
