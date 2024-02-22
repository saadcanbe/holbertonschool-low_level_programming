#include <stdlib.h>
#include <time.h>
/**
 * main entry 
 * this fucntion print if te number is pos or neg
*/
int main(void)
{
int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("the number %d is positive\n", n);
}
else if (n==0)
{
printf("the number %d is zero\n", n);
}
else
{
printf("the number %d is negative\n", n);
}
return (0);
}
