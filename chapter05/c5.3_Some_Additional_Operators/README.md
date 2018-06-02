# 5.3 其他运算符

* sizeof
* 球磨运算符：%
* 递增：++
* 递减：--

## 5.3.1 sizeof 运算符和 size_t 类型

C语言规定，sizeof 返回 size_t 类型的值。这是一个无符号整数类型，但它不是新类型。
前面介绍过，size_t是语言定义的标准类型。C有一个 `typedef` 机制，允许程序员为现有
类型创建别名，类如：

```c
typedef double real; // real 就是 double 的别名
real deal; // 使用 typedef，deal的真是数据类型是double
```

类似地，C头文件系统可以使用 typedef 把 size_t 作为 unsigned int 或 unsigned long
的别名，这样，在使用size_t 类型时，编译器会根据不同的系统替换标准类型。


