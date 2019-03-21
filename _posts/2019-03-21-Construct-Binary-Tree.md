---
layout: post
title:  "各种构建二叉树的方法!"
date:   2019-03-21 10:34:43 +0800
categories: jekyll update
---
# Construct Binary Tree

## pre-order + in-order

Given preorder and inorder traversal of a tree, construct the binary tree.

Note:
You may assume that duplicates do not exist in the tree.

For example, given

preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
```
Return the following binary tree:

    3
   / \
  9  20
    /  \
   15   7

```
思路和解法
![](https://wx2.sinaimg.cn/mw690/d6225d36ly1g1aj6rcvadj20h80mzn9k.jpg)

## post order  + in-order

Given inorder and postorder traversal of a tree, construct the binary tree.

Note:
You may assume that duplicates do not exist in the tree.

For example, given

inorder = [9,3,15,20,7]
postorder = [9,15,7,20,3]
Return the following binary tree:
```

    3
   / \
  9  20
    /  \
   15   7

```
![](https://wx3.sinaimg.cn/mw690/d6225d36ly1g1aj6qmzi6j20h80mzan6.jpg)
