/*
简单
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
示例 1:
给定数组 nums = [1,1,2], 
函数应该返回新的长度 2, 并且原数组 nums 的前两个元素被修改为 1, 2。 
你不需要考虑数组中超出新长度后面的元素。
示例 2:
给定 nums = [0,0,1,1,1,2,2,3,3,4],
函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。
你不需要考虑数组中超出新长度后面的元素。
说明:
为什么返回数值是整数，但输出的答案是数组呢?
请注意，输入数组是以“引用”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

j指针指向待修改位置，初始 j = 1；ｉ为当前遍历的位置，初始i = 1,i从左向右扫描;
若j-1上的位置与i位置元素相等，则i指向下一个位置，直到i位置元素与j-1位置元素不相等，此时将j位置元素修改为i位置元素,j指向下一个位置；
j的数值代表删除相同元素后的长度。
(可用erase方法，但时间消耗较高)

执行用时 : 36 ms, 在Remove Duplicates from Sorted Array的C++提交中击败了32.40% 的用户
内存消耗 : 9.8 MB, 在Remove Duplicates from Sorted Array的C++提交中击败了0.95% 的用户
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int j = 1;                                  //j指向待修改位置
        for(int i = 1; i < nums.size(); ++i){       //从i=1开始遍历,扫到出现 nums[j-1] != nums[i]时做修改
            if(nums[j-1] == nums[i])
                continue;
            else
                nums[j++] = nums[i];
        }
        return j;
    }
};
