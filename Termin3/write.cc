#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>




int main(int argc, char** argv) {


    int fd;
    fd = open("reeee.txt", O_WRONLY);

    const char* buf = "Hello world!\n";
    int ret;
    ret = write(fd, buf, strlen(buf));

    int close(fd);

	return(EXIT_SUCCESS);
}
