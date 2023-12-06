#include <stdio.h>
int main( )
{
   alarm(5);
   printf("Loop start \n");
   while (1) {
      sleep(1);
      printf("1 second \n");
   }
   printf("Alarm clock \n");
}
