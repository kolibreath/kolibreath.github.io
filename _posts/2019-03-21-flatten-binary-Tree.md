---
layout: post
title:  "压扁二叉树"
date:   2019-03-21 17:21:43 +0800
categories: 二刷leetcode
---

# Flatten Binary Tree 2 Linked List
[原题地址](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)
Given a binary tree, flatten it to a linked list in-place.

For example, given the following tree:

```
    1
   / \
  2   5
 / \   \
3   4   6
```
The flattened tree should look like:
```
1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6
          ```

一种非常巧妙的方法：
```
TreeNode pre = null;
public void traverse(TreeNode node){
    if(node == null)
        return;
    traverse(node.right);
    traverse(node.left);
    
    node.left = null;
    node.right = pre;
    
    pre = node;
}
```