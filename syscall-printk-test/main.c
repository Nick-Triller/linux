#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <errno.h>

#define __NR_printk 440

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stdout, "Please provide a msg (with quotes if multiple words)\n");
    return 1;
  }
  char* msg = argv[1];
  int result = syscall(__NR_printk, msg);
  if (result == -1) {
    fprintf(stderr, "syscall failed, errno = %d\n", errno);
  } else {
    fprintf(stdout, "syscall succeeded, run \"dmesg\" to see the message in the kernel logs\n");
  }
  return 0;
}
