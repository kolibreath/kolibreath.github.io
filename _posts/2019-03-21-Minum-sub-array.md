# Minimum Sub array sum
最短子数组长度<br>

Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s. If there isn't one, return 0 instead.

Example: 

```
Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2
```
Explanation: the subarray [4,3] has the minimal length under the problem constraint.
Follow up:
If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log n). 

思路：使用两个指针，low 和 high，首先都指向int数组的index =0 ，然后移动high，直到low和 high之前的大小大于target，然后逐次移动low直到high位置为止<br>
向下移动high，观察low和high之间的值是否大于target，重复上面的过程。