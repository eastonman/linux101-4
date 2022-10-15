/*
 * @Author: Easton Man manyang.me@outlook.com
 * @Date: 2022-10-15 19:09:07
 * @LastEditors: Easton Man manyang.me@outlook.com
 * @LastEditTime: 2022-10-15 19:10:52
 * @FilePath: /linux101-4/code/fork/main.c
 * @Description:
 */
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) {
  pid_t pid = fork();
  if (pid == -1) {
    _exit(-1);
  }
  if (pid == 0) {
    printf("I am a child process\n");
  } else {
    printf("I am a parent process\n");
    printf("Child process PID is %d\n", pid);
  }
  return 0;
}
