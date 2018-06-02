/**
 * @Author Bob
 * @Eamil 0haizhu0@gmail.com
 * @Date 2018/5/14
 */
#include <stdio.h>

int main(void) {
  float weight; // 你的体重
  float value;  // 相等中来个的白金价值

  printf("Are you worth your weight in platinum? \n");
  printf("Let's check it out. \n");
  printf("Please enter your weight in pounds: ");

  // 获取用户的输入
  scanf("%f", &weight);

  value = 1700.0 * weight * 14.5833;
  printf("Your weight in platinum is worth $%.2f.\n", value);

  return 0;
}


