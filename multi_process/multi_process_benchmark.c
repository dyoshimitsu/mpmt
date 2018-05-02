#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

#define P_MAX 300

int main(void) {
    int i;
    int status;
    pid_t pid[P_MAX];
    clock_t start, end;

    start = clock();

    for(i = 0; i < P_MAX && (pid[i] = fork()) > 0; i++);

    if(i == P_MAX) {
        for(i = 0; i < P_MAX; i++) {
            wait(&status);
        }

        end = clock();
        printf("processing time : %lu[ms]\n", end - start );

        return 0;
    } else if (pid[i] == 0) {
        printf("child i=%d\n", i);
        sleep(1);

        return 0;
    } else {
        perror("fork");

        return 1;
    }
}
