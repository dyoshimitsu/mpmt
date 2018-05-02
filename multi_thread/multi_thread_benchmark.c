#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

#define T_MAX 100

void func() {
    printf(".\n");
}

int main(void) {
    int i;
    int ret;
    pthread_t pthread[T_MAX];
    clock_t start, end;

    start = clock();

    for(i = 0; i < T_MAX; i++) {
        ret = pthread_create(&pthread[i], NULL, (void *)func, NULL);
        if (ret != 0) {
            perror("pthread_create");

            return 1;
        }
    }

    for(i = 0; i < T_MAX; i++) {
        ret = pthread_join(pthread[i], NULL);
        if (ret != 0) {
            perror("pthread_join");

            return 1;
        }
    }

    end = clock();
    printf("processing time : %lu[ms]\n", end - start );

    return 0;
}
