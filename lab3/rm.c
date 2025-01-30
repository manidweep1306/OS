#include <stdio.h>

int main() {
    const char *filename = "sample.txt";

    if (remove(filename) != 0) {
        perror("remove");
        return 1;
    } else {
        printf("Removed %s\n", filename);
    }
    return 0;
}
