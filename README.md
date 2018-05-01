# mpmt

Multi-process and multi-thread sample program

## Multi-process

### Compile

```shell
$ clang multi_process_sample.c -o multi_process_sample.out
```

### Execute

```shell
$ ./multi_process_sample.out
parent n[0x7fff50be56d8]=1
child  n[0x7fff50be56d8]=1
child  n[0x7fff50be56d8]=2
parent n[0x7fff50be56d8]=2
```

## Multi-thread

### Compile

```shell
$ clang multi_thread_sample.c -o multi_thread_sample.out
```

### Execute

```shell
$ ./multi_thread_sample.out
main   n[0x7fff5f63a6c8]=1
thread n[0x7fff5f63a6c8]=1
thread n[0x7fff5f63a6c8]=2
main   n[0x7fff5f63a6c8]=3
```
