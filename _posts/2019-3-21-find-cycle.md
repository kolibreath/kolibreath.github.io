---
layout: post
title:  "在链表中寻找可能的cycle"
date:   2019-03-21 17:32:43 +0800
categories: 二刷leetcode
---
# Linked List Cycle
[原题地址](https://leetcode.com/problems/linked-list-cycle/)

## 题目
Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

 

Example 1:
```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.
```
![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

Example 2:
```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the first node.
```
![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png)

Example 3:
```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

```
![](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png)
如果一个链表中存在两根指针，一个指针快，另外一个指针慢，如果他们从同样的七点出发，而且这个链表是一个cycle，这两个指针一定会相遇。<br>
同理，现在可以理解为是在不同起点开始出发的两个指针，这两个指针也会相遇的。