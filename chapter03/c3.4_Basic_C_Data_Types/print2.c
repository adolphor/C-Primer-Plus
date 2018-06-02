/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/6/2
 */
#include <stdio.h>

int main(void) {
  unsigned int un = 30000000;/** int为32位和short为16位的系统 */
  short end = 200;
  long big = 65537;
  long long veryBig = 12345678908642;

  printf("un = %u\n", un);
  printf("end = %hd\n", end);
  printf("big = %ld\n", big);
  printf("veryBig = %lld\n", veryBig);

  return 0;
}
