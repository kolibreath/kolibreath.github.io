# Thinking in C
# C语言的内存模型
[参考链接](https://blog.csdn.net/Com_ma/article/details/78546846)
![](http://images2015.cnblogs.com/blog/579121/201705/579121-20170505115510617-554839911.png)
## C 语言的全局变量和局部变量
全局变量放在data段中的bss段 通过C语言的特性自动初始化，局部变量放在stack段，由runtime确定.
