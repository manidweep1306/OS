#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *src = "source.txt";
    const char *dest = "destination.txt";

    int src_fd = open(src, O_RDONLY);
    if (src_fd == -1) {
        perror("open src");
        return 1;
    }

    int dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest_fd == -1) {
        perror("open dest");
        close(src_fd);
        return 1;
    }

    char buffer[1024];
    ssize_t bytes_read;
    while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0) {
        write(dest_fd, buffer, bytes_read);
    }

    close(src_fd);
    close(dest_fd);
    printf("Copied %s to %s\n", src, dest);
    return 0;
}
