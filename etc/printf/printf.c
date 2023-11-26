#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Hello, World!");
    fflush(stdout);
    sleep(5);
    return 0;
}
