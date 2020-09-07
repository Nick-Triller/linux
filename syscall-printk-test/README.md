# syscall-printk-test

This program tests a syscall that was implemented in a blog post. The syscall simply prints a user-specified message to the kernel log.

## Build

```bash
make
```

## Usage

```bash
./syscall-printk-test "Hello world!"
```

The `errno` utility is a useful addition in case the test program returns an error. `errno` prints a description for error codes.

```bash
# Install errno utility
apt install errno
# Run test program
./syscall-printk-test "Hello world!"
syscall failed, errno = 38
# Lookup error code. In this case, the installed kernel doesn't include our syscall.
errno 38
ENOSYS 38 Function not implemented
```
