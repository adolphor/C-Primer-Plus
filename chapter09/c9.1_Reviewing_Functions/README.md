# 9.1 复习函数

## 9.1.2 分析程序

* 3处使用了 starbar 标识符
    - 函数原型（function prototype）：告诉编译器函数 starbar()的类型
    - 函数调用（function call）：表明在此处执行函数
    - 函数定义（function definition）：明确地指定函数要做什么
* 函数和变量一样，有多种类型。
    - 注意，函数类型指的是返回值的类型，不是函数参数的类型（P253）。
* 函数原型指定了汗水的返回值类型和函数接收的参数类型。这些信息称为函数的`签名`(signature)
* 函数 starbar() 和 main() 的定义形式相同
    - 函数头：函数类型、函数名、圆括号
    - 函数体：变量声明、函数表达式语句等
* 函数中的变量是局部变量，该变量只属于此函数

## 9.1.6 调用待实际参数的函数

* 形式参数是被调函数(called function)中的变量
* 实际参数是主调函数(calling function)赋给被调函数的具体值
