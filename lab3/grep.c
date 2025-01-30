#include <stdio.h>
#include <string.h>

int main() {
    const char *pattern = "hello";
    const char *filename = "sample.txt";

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("fopen");
        return 1;
    }

    char line[1024];
    int line_number = 1;
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern) != NULL) {
            printf("%s:%d: %s", filename, line_number, line);
        }
        line_number++;
    }

    fclose(file);
    return 0;
}
