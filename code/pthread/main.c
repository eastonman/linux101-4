/*
 * @Author: Easton Man manyang.me@outlook.com
 * @Date: 2022-10-16 18:08:08
 * @LastEditors: Easton Man manyang.me@outlook.com
 * @LastEditTime: 2022-10-16 18:12:15
 * @FilePath: /linux101-4/code/pthread/main.c
 * @Description:
 */
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *T1(void *arg) {
  printf("I am T1\n");
  return NULL;
}

int main(int argc, char **argv) {

  pthread_t pid[3];

  pthread_create(&pid[0], NULL, T1, NULL);

  pthread_join(pid[0], NULL);

  return 0;
}