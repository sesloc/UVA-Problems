#include <cstdio>
#include <algorithm>

int main ()
{
   int cases, fn, sn, i;
   while (scanf("%d", &cases) == 1)
   {
       for (i = 0; i < cases; i++)
       {
           scanf("%d%d", &fn, &sn);
           if (fn > sn) 
               printf(">\n");
           else if (fn < sn) 
               printf("<\n");
           else 
               printf("=\n");
       }
   }
   return 0;
}
