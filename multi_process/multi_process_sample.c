#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int n = 1;
    int status;
    pid_t pid;

    sleep(10);

    pid = fork();

    if (pid < 0) {
        perror("fork");

        return 1;
    } else if (pid == 0) {
        printf("child  n[%p]=%d\n", &n, n);

        sleep(10);

        n = 2;
        printf("child  n[%p]=%d\n", &n, n);

        return 1;
    } else {
        printf("parent n[%p]=%d\n", &n, n);

        wait(&status);

        n = 3;
        printf("parent n[%p]=%d\n", &n, n);

        return 0;
    }
}
