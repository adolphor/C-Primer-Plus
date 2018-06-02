# 3.4 C语言基本数据类型

## 3.4.1 int类型

* int类型是有符号整型。可以是正整数、负整数或零。
* 其取值范围与计算机系统相关，一般而言，存储一个int要占用一个机器字长。
也就是说早期计算机是16位，x86位计算机是32位，x86-64计算机是64位。
* int整型不同进制（加上`#`会显示进制前缀）
    - 8进制：`%o` 与 `%#o`
    - 10进制：`%d` 与 `%#d`
    - 16进制：`%x` 与 `%#x`

## 3.4.2 其他整数类型

* 其他整数类型
    - short int：较小有符号整数，节省空间
    - long int 或 long：较大有符号整数
    - long long int 或 long long：至少占64位
    - unsigned int 或 unsigned：无符号非负整数
    - 其他：unsigned long int、unsigned long、unsigned short int、unsigned short
    - 在任何有符号类型前面添加关键字signed，可强调使用有符号类型的意图
* 一般情况下各种数据类型的范围
    - short 至少16位
    - int 占16位或者32位，至少16位
    - long 至少32位
    - long long 至少64位
* 打印格式化
    - unsigned int：%u
    - long：`%ld`，`%lo`，`%lx`（分别表示使用 十进制、八进制、16进制打印long类型数据）
    - short：`%hd`，`%ho`，`%hx`（分别表示使用 十进制、八进制、16进制打印short类型数据）
    - `h` 和 `l` 前缀都可以和 `u` 一起使用：%lu、%llu、%lld

```bash
cc chapter03/c3.4_Basic_C_Data_Types/print2.c
./a.out
```

## 3.4.3 使用字符：char 类型

* char 类型是将字符转换为对应的整数编码之后存储到计算机
    - 将字母加上单引号表示字符类型
    - 加上双引号是字符串，不能赋值给char
    - 不加任何引号，编译器会认为是一个变量名
* 同其他语言一样，特殊字符需要加上转义符 `\`
* 打印格式化
    - `%c` 打印该字符
    - `%d` 打印该字符对应的ASCII编码

```bash
cc chapter03/c3.4_Basic_C_Data_Types/charcode.c
./a.out
```

## _Bool 类型

布尔类型用 1 表示 true，用 0 表示 false，所以布尔类型实际上是只占用1位存储空间的整数类型。

## 可移植类型：stdint.h 和 inttypes.h

扩展整数类型：
* 精确宽度整数类型（exact-width integer type）：int32_t
* 最小宽度类型（minimum width type）：int_least8_t
* 最快最小宽度类型（fastest minimum width type）：int_fast8_t
* 最大整数类型：intmax_t

打印格式化：
`inttypes.h` 头文件中定义了 `PRId32` 字符串的宏，代表打印32位有符号值的合适转换说明（如d或l）。

```bash
cc chapter03/c3.4_Basic_C_Data_Types/altnames.c
./a.out
```

## 浮点数类型

```bash
cc chapter03/c3.4_Basic_C_Data_Types/showf_pt.c
./a.out
```