#include <stdio.h>

int
main ()
{
  int d, m, y, i;
  int a[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  scanf ("%d %d %d", &d, &m, &y);
  int dd = 9, mm = 8, yy = 21;
  int days;
  int sum = 0;
  int years;
  //left days in months
  for (i = m + 1; i < 13; i++)
    {
      if (i == 1)
	{
	  sum = a[1];
	  continue;
	}
      sum = a[i - 1] - 30;
    }
  //leap
  int lc = 0;
  for (i = y; i < yy; i++)
    {
      if (i % 400 == 0)
	{
	  lc += 1;
	}
      else if (i % 100 == 0)
	{
	  lc = lc;
	}

      else if (i % 4 == 0)
	{
	  lc += 1;
	}
      else
	{
	  lc = lc;
	}
    }

  int summ = 0;
  for (i = 0; i < m; i++)
    {
      if (i == 1)
	{
	  summ = a[1];
	  continue;
	}
      summ = a[i - 1] - 30;
    }
  
  days = (yy - y - 1) * 365;
  days = days + ((12 - m) * 30) + (mm - 1) * 30;
  days = days + (30 - d) + d;
  days += sum + summ;
  days += lc;
  printf ("%d", days - 1);

  return 0;
}

