#include <stdio.h>

int fib (int n)
{
   if (n == 0)
   {
       return 0;
   }
   else if (n == 1)
   {
       return 1;
   }
   else if (n == 2)
   {
       return 2;
   }
   else
   {
       return fib(n - 1) + fib(n - 2);
   }
}
int main()
{
    int input;
    
    while (scanf("%d", &input) == 1)
    {
        if (input == 0)
        {
            break;
        }
        else
        {
             printf("%d\n", fib(input));
        }
    }
    return 0;
}
