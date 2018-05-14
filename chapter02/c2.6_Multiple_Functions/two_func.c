/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/5/14
 */
#include <stdio.h>

void butler(void); // 函数原型 （函数声明）

int main(void){
  printf("I'll summon the butler function. \n");
  butler();        // 函数调用
  printf("Yes. Bring me some tea and writeable DVDs. \n");
  return 0;
}

void butler(void){ // 函数定义
  printf("You rang, sir? \n");
}
