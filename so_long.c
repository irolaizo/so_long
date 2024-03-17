#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "get_next_line.h"

int main (int argc, char **map)
{
    if (argc != 2 || strncmp(map[1] + strlen(map[1]) - 4, ".ber", 4))
    {
        write(1, "Has fallado, amigo!\n", 20);
        return (22);
    }
    int fd;
    fd = open("map.ber", O_RDONLY);
    char *read_map;
    int i;
    size_t large;
    i = 0;
    large = 0;
    while ((read_map = get_next_line(fd)) != NULL)
    {
        //printf("Linea: %d: %s", i, read_map);
        if (large != strlen(read_map) && i != 0)
        {
            write(1, "Has fallado, amigo!\n", 20);
            return (22);
        }
        large = strlen(read_map);
        i++;
        if (strncmp(read_map, "1", strlen(read_map) && i == 0))
    }
    close (fd);
}    
   /*  int i;
    int j;
    i = 0;
    j = 0;
    while (map[i][j])
    {
        printf("Hola, me llamo iratxe: %d %c\n", argc, map[i][j]);
        //i++;
        j++;
    }
   
}

i = 0;
j = 0;
char **
char *
char*/
