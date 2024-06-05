#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if (chdir(argv[1]) == -1) {
        perror("cd");
        exit(EXIT_FAILURE);
    }
    printf("Changed directory to %s\n", argv[1]);
    return 0;
}
