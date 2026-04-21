#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }

    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if (fd == -1)
    {
        perror("open");
        return -1;
    }

    char *a_buf = "some data\n";
    write(fd, a_buf, strlen(a_buf));

    close(fd);
    return 0;
};