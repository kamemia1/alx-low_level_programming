#include <stdio.h>
/* more headers goes there */
/* betty style for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
  int i = 48, j = 48, z = 49;

  while (i < 58)
    {
      while (j < 58)
	{
	  while (z < 58)
	    {
	      putchar(i);
	      putchar(j);
	      putchar(' ');
	      putchar(y);
	      putchar(z);
	      if (!(i == 56 &&
		    j == 57 &&
		    z == 57))
		{
		  putchar(',');
		  putchar(' ');
		}
	      z++;
	    }
	  y++;
	  z=48;
	}
      j++;
      y = i;
      z = j + 1;
    }
  i++;
  j = 48;
  y = i;
  z = j + 1;
}
putchar('\n');
return (0);
}
   
