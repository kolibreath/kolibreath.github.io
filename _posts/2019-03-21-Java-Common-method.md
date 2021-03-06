---
layout: post
title:  "Java 中常用API"
date:   2019-03-20 18:00:43 +0800
categories: 二刷leetcode
---

# Java 中常见的数据结构和算法

> 按字母排序

## A

- Arrays.sort
<br>
使用快速排序的方法排序数组
![](http://wx2.sinaimg.cn/large/d6225d36ly1fzt62h1at7j235s0os473.jpg)<br>
有多种3重载方法基本类型数组重载没有问题

## B
- 二分搜索 binary sort
binary sort的逆运用：<br>
[Binary sort 二分搜索](https://leetcode-cn.com/explore/featured/card/top-interview-questions-easy/7/trees/51/)

## C
- Collections.sort
使用快速排序的方法排序各种Collections结构，如List Set等<br>
这个方法没有返回值<br>

- Compator接口
Collections.sort这个方法有一个两个参数的重载方法，需要实现Compator接口

return 1 表示o1 > o2<br> 
return -1 表示 o1 == o2<br>
return 0表示o1 == o2
```
 public class TestObject implements Comparator{

        @Override
        public int compare(Object o1, Object o2) {
            return 0;
        }
    }
```


## D 
## E
## F
## G
- Graph
<br>
二维数组dfs
举两个题作为例子
    - [Number of Lands](https://kolibreath.github.io/%E4%BA%8C%E5%88%B7leetcode/2019/03/22/Word-Search.html)
    - [Word Search ](https://kolibreath.github.io/%E4%BA%8C%E5%88%B7leetcode/2019/03/22/Numbers-of-Lands.html)
## H
HashTable 和 HashMap
HashTable所有的功能都可以被HashMap代替。
## I
## J
## k

## L
###  List 系列 
> 注意需要使用``import``指令 ``import java.util.*;`` 
- LinkedList 

LinkedList既可以作为Queue也可以作为Stack ，其中实现了的poll()方法可以按照先进先出的原则取出队列中的元素
<br>
![](http://wx3.sinaimg.cn/large/d6225d36ly1fzt649fiqyj22xr0u00ye.jpg)
还有pop方法可以按照先进后出的方法取出Stack中的元素
<br>
![](http://wx3.sinaimg.cn/large/d6225d36ly1fzt677mfmbj21q20u0h5d.jpg)
常见的使用LinkedList的情景<br>
    
 -  BFS


```
    //指定泛型
    LinkedList queue = new LinkedList<TreeNode>();

    while(!queue.isEmpty()){
        int size = queue.size();
        TreeNode temp = queue.poll();
        int counter = 0;
        //这样的BFS可以遍历二叉树还可以遍历森林
        //完全按层遍历 
        while(counter < size){
            //需要进行左右节点的判空操作
            TreeNode left = temp.left;
            TreeNode right = temp.right;

            if(left!=null)
                queue.add(left);

            if(right != null)
                queue.add(right);

            counter ++;
        }
    }
```

## M
## N
## O
## P
## Q
### quick-sort
