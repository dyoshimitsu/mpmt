#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <limits.h>

void func() {
    printf(".");
    sleep(10);
}

int main(void) {
    int i;
    int ret;
    pthread_t pthread;

    for(i = 0; i < INT_MAX; i++) {
        ret = pthread_create(&pthread, NULL, (void *)func, NULL);
        if (ret != 0) {
            printf("\ngenerated threads : %d\n", i);

            return 1;
        }
    }

    return 0;
}
