/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/5/7
 */
#include <stdio.h>

int main(void) {
  int feet, fathoms;

  fathoms = 2;
  feet = 6 * fathoms;
  printf("There are %d feet in %d fathoms!\n", feet, fathoms);
  printf("Yes, I said %d feet!\n", 6 * fathoms);

  return 0;
}
