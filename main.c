#include <stdio.h>
#include "lib/foo.h"  /* Include the header here, to obtain the function declaration */

int main(void)
{
    int y = foo(3);  /* Use the function here */
    printf("Hello World!\n");
    printf("%d\n", y);
    printf("Hello World!\n");
    return 0;
}