#include <stdio.h>

int main(void) {
    /* TODO (step 5): replace "World" with your own name */
    printf("Hello, World! This runs inside a container.\n");

    /* This line shows which gcc version compiled the program.
       It is the gcc INSIDE the container, not the one on your laptop. */
    printf("Compiled with gcc %d.%d\n", __GNUC__, __GNUC_MINOR__);

    return 0;
}
