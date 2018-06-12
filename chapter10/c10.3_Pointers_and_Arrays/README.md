# 10.3 指针和数组

* 数组名是数组首元素的地址
    - 如果 flizny 是一个数组，那么 `flizny == &flizny[0]` 成立，都表示数组首元素的内存地址
* 把他们赋值给指针变量，然后指针变量加1，实际上指的是增加一个存储单元，指针移动到下一个元素的地址
    - 这也是为什么必须声明指针所指向对象类型的原因之一
* 数组和指针的关系十分密切
    - ` dates + 2 == &dates[2]`  相同的地址
    - `*(dates +2) == dates[2]`  相同的值