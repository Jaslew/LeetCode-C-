"""
简单
判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
示例 1:
输入: 121
输出: true
示例 2:
输入: -121
输出: false
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。

执行用时 : 112 ms, 在Palindrome Number的Python3提交中击败了100.00% 的用户
内存消耗 : 13.1 MB, 在Palindrome Number的Python3提交中击败了0.98% 的用户
"""

class Solution:
    def isPalindrome(self, x: int) -> bool:
        y = str(x)
        i = 0
        j = len(y)-1
        while i < j:
            if y[i] != y[j]:
                return False
            i += 1
            j -= 1
        return True
