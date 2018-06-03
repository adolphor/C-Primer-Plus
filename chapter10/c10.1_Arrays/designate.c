/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/6/3
 */
#include <stdio.h>

#define MONTHS 12

int main(void) {
  int days[MONTHS] = {31, 28, [4]=31, 30, 31, [1]=29};
  for (int i = 0; i < MONTHS; ++i) {
    printf("%2d  %d\n", i + 1, days[i]);
  }
  return 0;
}

// 执行过程:
// [4]=31：index 4 被初始化为31；5、6依次被初始化未30，31
// [1]=29：index 1 第一次被初始化为28，后面又被修改为29
// 结果：