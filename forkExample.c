#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void ChildProcess(void);
void ParentProcess(void);

int main() {
  // printf("Program starts");
  pid_t pid;
  pid = fork();
  printf("%d\n", pid);
  if (pid == 0) {
    ChildProcess();
  } else {
    ParentProcess();
  }
  return 0;
}

void ChildProcess(void) {
  // the code for child process goes here.
  printf("Child Process is done!\n");
}

void ParentProcess(void) {
  // the code for parent process goes here.
  printf("Parent Process is done!\n");
}

