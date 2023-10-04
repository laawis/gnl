#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int fd;
//    int fd2;
    char *line;

    fd = open("test.txt", O_RDONLY);
    
//    fd2 = open("bidule.txt", O_RDONLY);
    if (fd == -1)
        return (1);
    line = get_next_line(fd);
/*
    printf("%s\n", line);
    free(line);
    line = get_next_line(fd2);
    printf("%s\n", line);
    free(line);
    line = get_next_line(fd2);
    printf("%s\n", line);
    free(line);
    line = get_next_line(fd);
    printf("%s\n", line);
    free(line);
*/ 
    while (line != NULL)
    {
        printf("%s", line);
        free (line);
        line = get_next_line(fd);
    }
    free (line);
    if (close(fd) == -1)
        return (1);
    return (0);
}
