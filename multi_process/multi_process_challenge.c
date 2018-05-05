#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <limits.h>

int main(void) {
    int i;
    int status;
    int count;
    pid_t pid;

    for(i = 0; i < INT_MAX && (pid = fork()) > 0; i++);

    if (pid == 0) {
        printf(".");
        sleep(1);

        return 0;
    } else {
        count = i;
        for(; i >= 0; i--) {
            wait(&status);
        }

        printf("\ngenerated processes : %d\n", count);

        return 1;
    }
}
