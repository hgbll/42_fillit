#include "fillit.h"
#include "libft.h"
#include <unistd.h>

int get_input(const int fd, t_short *tetro)
{
  char buf[22];
  int count;
  int i;
  char check;
  char *tmp;

  i = 0;
  check = 0;
  while ((count = read(fd, buf, 21)))
    {
      if (count < 20 || check_counts(buf, count) != 0)
	return (0);
      tmp = remove_lines(buf);
      tetro[i] = convert_tetro(tmp);
      check = count;
      if (i > 25)
	return (0);
      i++;
    }
  if (check != 20)
    return (0);
  return (1);
}
