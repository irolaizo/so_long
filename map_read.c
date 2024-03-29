#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line/get_next_line.h"

int main (void)
{
	int		i;
	int		fd;
	int		line_nu;
	size_t	large;

	fd = open("map.ber", O_RDONLY);
	i = 0;
	large = 0;
	line_nu = 0;

	while (get_next_line(fd))
		line_nu++;

	char	*map[line_nu];
	close(fd);
	fd = open("map.ber", O_RDONLY);

	while (i < line_nu)
	{
		char	*line = get_next_line(fd);
		map[i] = line;
		/* printf("%s", line); */
		i++;
	}
	map[i] = NULL;
	/* printf("%s", map[1]); */
	/* printf("%c", map[1][1]); */
	i = 0;
	size_t k;
	k = 0;
	while (map[i])
	{
		printf("%s", map[i]);
		if (strlen(map[i]) != k && i != 0)
		{
			//printf("%s\n", map[i]);
			write(1, "Has fallado, amigo!\n", 20);
			return (22);
		}
		k = strlen(map[i]);
		i++;
	}

}