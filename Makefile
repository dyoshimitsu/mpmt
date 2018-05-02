CC = clang
CFLAGS = -O2

all: multi_process_sample multi_process_benchmark multi_process_challenge multi_thread_sample multi_thread_benchmark multi_thread_challenge

multi_process_sample: ./multi_process/multi_process_sample.c
	$(CC) $(CFLAGS) ./multi_process/multi_process_sample.c -o multi_process_sample.out

multi_process_benchmark: ./multi_process/multi_process_benchmark.c
	$(CC) $(CFLAGS) ./multi_process/multi_process_benchmark.c -o multi_process_benchmark.out

multi_process_challenge: ./multi_process/multi_process_challenge.c
	$(CC) $(CFLAGS) ./multi_process/multi_process_challenge.c -o multi_process_challenge.out

multi_thread_sample: ./multi_thread/multi_thread_sample.c
	$(CC) $(CFLAGS) ./multi_thread/multi_thread_sample.c -o multi_thread_sample.out

multi_thread_benchmark: ./multi_thread/multi_thread_benchmark.c
	$(CC) $(CFLAGS) ./multi_thread/multi_thread_benchmark.c -o multi_thread_benchmark.out

multi_thread_challenge: ./multi_thread/multi_thread_challenge.c
	$(CC) $(CFLAGS) ./multi_thread/multi_thread_challenge.c -o multi_thread_challenge.out

clean:
	rm -f multi_process_sample.out multi_process_benchmark.out multi_process_challenge.out multi_thread_sample.out multi_thread_benchmark.out multi_thread_challenge.out
