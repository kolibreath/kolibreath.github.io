---
layout: post
title:  "Numbers of Lands"
date:   2019-03-22 10:00:43 +0800
categories: 二刷leetcode
---
# Number of Lands
小岛的数目！

## 题目内容

Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:
```
Input:
11110
11010
11000
00000

Output: 1
```
Example 2:
```
Input:
11000
11000
00100
00011

Output: 3
```
这个题是一个非常经典的二维图的dfs，主要思路是：因为小岛是char '1'表示的,需要找到一个字母1之后dfs周围所有’1‘的节点。<br>
一般来说需要一个visited[]数组标记有哪些点已经访问过了，但是可以直接通过标记grid中已经访问过的点为x，同时这个题是不需要回溯的<br>，只要保证一个dfs函数会将一个小岛标记出来就行，此时，count+1

代码：
```
public class NumbersOfLands {
    static class Solution {
        int[] dx = {-1,0,0,1};
        int[] dy = {0,1,-1,0};
        public int numIslands(char[][] grid) {
            int count = 0;
            for(int i = 0;i< grid.length;i++){
                for(int j = 0;j< grid[0].length ;j++){
                    if(grid[i][j] != '1') continue;
                    dfs(grid,i,j);
                    count++;
                }
            }
            return count;
        }

        void dfs(char[][] grid,int x ,int y){
            grid[x][y]  = 'x';
            for(int i= 0;i< dx.length;i++){
              if(x + dx[i] < grid.length && x + dx[i] >= 0 && y + dx[i] < grid[0].length && y + dx[i] >= 0
                      && grid[x + dx[i]][y + dy[i]] == '1'){
                  dfs(grid,x+dx[i],y+dy[i]);
              }
            }
        }
    }
}
```