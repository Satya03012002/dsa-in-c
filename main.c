/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a[5], i, j, x;
  printf ("enter the no.\n");
  for (i = 0; i < 5; i++)
    scanf ("%d", &a[i]);
  printf ("enter the deleated array no.\n");
  scanf ("%d", &x);
  for (i = (x - 1); i < 4; i++)
    {
      a[i] = a[i + 1];

    }
  for (i = 0; i < 4; i++)
    printf ("the array od %d is %d\n", i, a[i]);



  return 0;
}
