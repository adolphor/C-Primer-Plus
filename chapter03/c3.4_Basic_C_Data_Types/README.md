# 3.4 C语言基本数据类型

## 3.4.1 int类型

* int类型是有符号整型。可以是正整数、负整数或零。
* 其取值范围与计算机系统相关，一般而言，存储一个int要占用一个机器字长。
也就是说早期计算机是16位，x86位计算机是32位，x86-64计算机是64位。
* int整型不同进制
    - 8进制：%o 与 %#o
    - 10进制：%d 与 %#d
    - 16进制：%x 与 %#x
* 其他整数类型
    - short int：较小有符号整数，节省空间
    - long int 或 long：较大有符号整数
    - long long int 或 long long：至少占64位
    - unsigned int 或 unsigned：无符号非负整数
    - 其他：unsigned long int、unsigned long、unsigned short int、unsigned short
    - 在任何有符号类型前面添加关键字signed，可强调使用有符号类型的意图
* 一般情况下各种数据类型的范围
    - short 16位
    - int 占16位或者32位
    - long 32位
    - long long 64位
* long 类型：%ld 与 %#ld