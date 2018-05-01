#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void func(int *n) {
    printf("thread n[%p]=%d\n", n, *n);

    sleep(10);

    (*n)++;
    printf("thread n[%p]=%d\n", n, *n);
}

int main(void) {
    int n = 1;
    int ret;
    pthread_t pthread;

    sleep(10);

    ret = pthread_create(&pthread, NULL, (void *)func, &n);
    if (ret != 0) {
        perror("pthread_create");

        return 1;
    }

    printf("main   n[%p]=%d\n", &n, n);

    ret = pthread_join(pthread, NULL);
    if (ret != 0) {
        perror("pthread_join");

        return 1;
    }

    n++;
    printf("main   n[%p]=%d\n", &n, n);

    return 0;
}
