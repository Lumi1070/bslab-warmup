#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



long FdGetFileSize(int fd)
{
    struct stat stat_buf;
    int rc = fstat(fd, &stat_buf);
    return rc == 0 ? stat_buf.st_size : -1;
}

int main(int argc, char** argv) {

	std::cout << "Hello world!" << std::endl;
    int fd;
    fd = open("loreipsum.txt", O_RDONLY);
    int count = FdGetFileSize(fd);
    std::cout << count << std::endl;

    char* buf = new char[count + 1]; // geht irgendwie auch mit char[1] ??!?!
    int ret;
    ret = read(fd, buf, count);
    buf[ret] = 0;
    std::cout << buf << std::endl;



    int close(int fd);

	return(EXIT_SUCCESS);
}
