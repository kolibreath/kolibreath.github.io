# 重做leetcode

- Longest Substring without Repeating Characters
[原题地址](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
Given a string, find the length of the longest substring without repeating characters.

Example 1:
``
Input: "abcabcbb"
``
Output: 3
> Explanation: The answer is "abc", with the length of 3.
Example 2:
``
Input: "bbbbb"
``
Output: 1
> Explanation: The answer is "b", with the length of 1.
Example 3:
``
Input: "pwwkew"

``
Output: 3
> Explanation: The answer is "wke", with the length of 3.
<br>Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

<br>
大概思路：
> 使用hashmap 完成
 for循环整个string，将每一个字母挨个放入map中，在放入之前检查有没有重复的字母，如果发现有重复的字符，提取出上一个字母的位置，然后做差。
 <br>并且需要将这个字母添加到map中保证map中的字母的位置是最新的，字母序列的长度是最短的

