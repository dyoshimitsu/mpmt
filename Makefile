CC = clang
CFLAGS = -O2

all: multi_process_sample multi_process_benchmark multi_thread_sample

multi_process_sample: ./multi_process/multi_process_sample.c
	$(CC) $(CFLAGS) ./multi_process/multi_process_sample.c -o multi_process_sample.out

multi_process_benchmark: ./multi_process/multi_process_benchmark.c
	$(CC) $(CFLAGS) ./multi_process/multi_process_benchmark.c -o multi_process_benchmark.out

multi_thread_sample: ./multi_thread/multi_thread_sample.c
	$(CC) $(CFLAGS) ./multi_thread/multi_thread_sample.c -o multi_thread_sample.out

clean:
	rm -f multi_process_sample.out multi_process_benchmark.out multi_thread_sample.out
