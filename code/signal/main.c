/*
 * @Author: Easton Man manyang.me@outlook.com
 * @Date: 2022-10-15 19:13:41
 * @LastEditors: Easton Man manyang.me@outlook.com
 * @LastEditTime: 2022-10-15 19:16:02
 * @FilePath: /linux101-4/code/signal/main.c
 * @Description:
 */
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

static void signal_handler(int sig) { printf("Received signal %d\n", sig); }

int main(int argc, char **argv) {
  signal(SIGUSR2, signal_handler);
  while (1) {
  }
  return 0;
}