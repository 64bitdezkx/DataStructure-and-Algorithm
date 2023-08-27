## 03.找出数组中重复的数字

在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

```
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int nums_len = nums.size();
        int i = 0;
        while(i<nums_len){
             if(i == nums[i]){
                 i++;
                 continue;
             }else if(nums[nums[i]] == nums[i]){
                 return nums[i];
             }else{
                swap(nums[i],nums[nums[i]]);
             }
        }
        return -1;
    }
};
//容易出错：continue关键字，if语句条件中的判断双等号，while循环而不是for循环
```



## 06. 从尾到头打印链表