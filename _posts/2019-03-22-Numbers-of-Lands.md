---
layout: post
title:  "Word Search"
date:   2019-03-22 8:10:43 +0800
categories: 二刷leetcode
---
# Word Search
[原题地址](https://leetcode.com/problems/word-search/)


分析：<br>
这道题一定是需要使用一个额外的visited[]标记已经访问过的节点的，因为这个题需要回溯到上一个结果。比如ASFB是想要的word，但是我们首先选的是ABF，F的右边是S，这个时候需2要回溯，并且将F这个点设置为没有访问过。<br>
这道题和Numbers of Lands有很大区别的是，需要在结果返回boolean值,如果像之前的方法，通过for循环遍历四个方向的话，return 递归函数的值，比如后面的false可能覆盖前面的true，比如 
下面的true在Stack frame的底部
- return false
    - return true 

已经在后面的结果已经返回true，但是false会取代真正的结果，所以我们使用枚举的方式，只要四个方向上有一个true，结果就是true<br>
代码如下：
````
public class WordSearch {

    static class Solution {
        public boolean exist(char[][] board, String word) {

            if(board == null || board.length ==0 || board[0].length ==0 )
                return false;

            int singleWidth = board[0].length;
            int boardWidth  = board.length;
            boolean visited[][] = new boolean[boardWidth][singleWidth];

            for(int i = 0;i<boardWidth;i++){
                for(int j= 0; j <singleWidth;j++){
                    if(dfs(0,board,word,i,j,visited)){
                        return true;
                    }
                }
            }
            return false;
        }

        public boolean dfs(int index, char [][] board,
                           String word, int rowindex,
                           int colindex, boolean visited[][]){
            if(index == word.length()){
                return true;
            }

            if(rowindex < 0 || colindex < 0 || rowindex >= board.length || colindex >= board[0].length){
                return false;
            }

            if(visited[rowindex][colindex]){
                return false;
            }

            if(word.charAt(index) != board[rowindex][colindex]){
                return false;
            }

            visited[rowindex][colindex] = true;

            boolean res = (dfs(index + 1, board, word, rowindex + 1, colindex,visited)||
                    dfs(index + 1, board, word, rowindex, colindex+1,visited)||
                    dfs(index + 1, board, word, rowindex -1 , colindex,visited)||
                    dfs(index + 1, board, word, rowindex , colindex -1,visited));

            visited[rowindex][colindex]  = false;
            return res;

        }
    }
}
````