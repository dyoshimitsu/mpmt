# mpmt

Multi-process and multi-thread sample program

## Compile

```shell
$ make all
clang -O2 ./multi_process/multi_process_sample.c -o multi_process_sample.out
clang -O2 ./multi_thread/multi_thread_sample.c -o multi_thread_sample.out
```

## Execute

### Share memory

#### Multi-process

```shell
$ ./multi_process_sample.out
parent n[0x7fff50be56d8]=1
child  n[0x7fff50be56d8]=1
child  n[0x7fff50be56d8]=2
parent n[0x7fff50be56d8]=2
```

#### Multi-thread

```shell
$ ./multi_thread_sample.out
main   n[0x7ffeeccaa934]=1
thread n[0x7ffeeccaa934]=1
thread n[0x7ffeeccaa934]=2
main   n[0x7ffeeccaa934]=3
```

### Benchmark

#### Multi-process

```shell
```

#### Multi-thread

```shell
```

### Limit

#### Multi-process

```shell
```

#### Multi-thread

```shell
```
