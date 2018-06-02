/**
 * 显示字符的代码编号
 *
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/6/2
 */
#include <stdio.h>

int main(void) {
  char ch;
  printf("Please enter a character:");
  scanf("%c", &ch);
  printf("The code for %c is %d.\n", ch, ch);

  return 0;
}
