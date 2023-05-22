#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main() {
  int i;
	int pid;
  printf("pid : %d \n", pid);
  pid = fork();
  printf("pid : %d \n", pid);
  printf("\n");

  if (pid == 0) {
    printf("Child starts\n");
    for (i = 0; i < 5; i++) {
      printf("i : %d\n", i);
      printf("\n");
    }
    printf("Child ends\n");
  }
  else {
    printf("\nBefore wait\n");
    printf("getpid : %d\n", getpid());
    pid = wait(0);
    printf("\npid : %d\n", pid);
    printf("After wait\n");
    printf("Parent\n");
    printf("getpid : %d\n", getpid());
  }
}