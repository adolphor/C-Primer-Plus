/**
 * 查看变量被存储在何处
 *
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/6/3
 */
#include <stdio.h>

void mikado(int); // 函数原型 （declare function）

int main(void) {
  int pooh = 2, bah = 5; // main() 的局部变量
  printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
  printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
  mikado(pooh);
  return 0;
}

void mikado(int bah) { // 定义函数
  int pooh = 10; // mikado() 的局部变量
  printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
  printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
