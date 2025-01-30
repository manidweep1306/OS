#include <stdio.h>

int main() {
    const char *src = "old_file.txt";
    const char *dest = "new_file.txt";

    if (rename(src, dest) != 0) {
        perror("rename");
        return 1;
    } else {
        printf("Moved %s to %s\n", src, dest);
    }
    return 0;
}
