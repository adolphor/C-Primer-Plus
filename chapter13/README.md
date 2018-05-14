# 第13章　文件输入/输出

## 本章介绍以下内容

## 目录

* 13.1 与文件进行通信
  - 13.1.1 文件是什么
  - 13.1.2 文本模式和二进制模式
  - 13.1.3 I/O的级别
  - 13.1.4 标准文件
* 13.2 标准I/O
  - 13.2.1 检查命令行参数
  - 13.2.2 fopen()函数
  - 13.2.3  getc()和putc()函数
  - 13.2.4 文件结尾
  - 13.2.5 fclose()函数
  - 13.2.6 指向标准文件的指针
* 13.3 一个简单的文件压缩程序
* 13.4 文件I/O：fprintf()、fscanf()、fgets()和fputs()
  - 13.4.1 fprintf()和fscanf()函数
  - 13.4.2 fgets()和fputs()函数
* 13.5 随机访问：fseek()和ftell()
  - 13.5.1 fseek()和ftell()的工作原理
  - 13.5.2 二进制模式和文本模式
  - 13.5.3 可移植性
  - 13.5.4 fgetpos()和fsetpos()函数
* 13.6 标准I/O的机理
* 13.7 其他标准I/O函数
  - 13.7.1 int ungetc(int c, FILE *fp)函数
  - 13.7.2 int fflush()函数
  - 13.7.3 int setvbuf()函数
  - 13.7.4 二进制I/O：fread()和fwrite()
  - 13.7.5 size_t fwrite()函数
  - 13.7.6 size_t fread()函数
  - 13.7.7 int feof(FILE *fp)和int ferror(FILE *fp)函数
  - 13.7.8 一个程序示例
  - 13.7.9 用二进制I/O进行随机访问
* 13.8 关键概念
* 13.9 本章小结
* 13.10 复习题
* 13.11 编程练习