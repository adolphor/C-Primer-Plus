/**
 * 部分初始化数组
 *
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/6/3
 */
#include <stdio.h>

#define SIZE 4

int main(void) {

  int some_data[SIZE] = {1492, 1066};
  printf("%2s%14s\n", "i", "some_data[i]");
  for (int i = 0; i < SIZE; i++) {
    printf("%2d%14d\n", i, some_data[i]);
  }

  char some_char[SIZE] = {'a', 'b'};
  printf("%2s%14s\n", "i", "some_char[i]");
  for (int i = 0; i < SIZE; i++) {
    printf("%2d%14d\n", i, some_char[i]);
  }

  return 0;
}

