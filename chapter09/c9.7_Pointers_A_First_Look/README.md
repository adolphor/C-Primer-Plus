# 9.7 指针简介

* 指针有数据类型，指针的数据类型就是指向的地址所对应的数据的数据类型

## 9.7.1 间接运算符：*

假设一直 ptr 指向 bah，如下所示：
```c
ptr = &bah;
```
然后使用间接运算符 * (indirection operator)找出存储在bah中的值，该运算符有时也称为
解引用运算符(dereferencing operator)。

```c
ptr = &bah;
val = *ptr;
=>
val = ptr
```

指针使用范例：
```
cc chapter09/c9.7_Pointers_A_First_Look/swap3.c
./a.out
```