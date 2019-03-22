---
layout: post
title:  "Longest Valid Parenthess"
date:   2019-03-21 13:32:43 +0800
categories: 二刷leetcode
---
# Longest Valid Parenthess

[原题地址](https://leetcode.com/problems/longest-valid-parentheses/)
最长的有效括号序列：

Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

Example 1:
```
Input: "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()"
````
Example 2:
```
Input: ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()"

````
这道题的思路可以这样，我们按照常规的思路便利一边输入串，如果是matching的括号，就从stack中去掉，如果是不匹配的括号留下来<br>就像这样
<br>
> ) | (  | )| ( | ) |  )   <br>
> 0|~~|1 |2| 3| 4~~| 5

最后只有不匹配的0 和 5 留在了stack中，我们现在重新遍历一遍stack，说明0 5 中间的部分是匹配的，就像substring(0,5)一样<br>


同理 如果最后的结果是 0 3 8 说明 12 4567 是匹配的

可行的代码举例:
```
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length(), longest = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') st.push(i);
            else {
                if (!st.empty()) {
                    if (s[st.top()] == '(') st.pop();
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        if (st.empty()) longest = n;
        else {
            int a = n, b = 0;
            while (!st.empty()) {
                b = st.top(); st.pop();
                longest = max(longest, a-b-1);
                a = b;
            }
            longest = max(longest, a);
        }
        return longest;
    }
};
```