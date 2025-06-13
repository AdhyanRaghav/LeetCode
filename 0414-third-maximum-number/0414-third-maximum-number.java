import java.util.Arrays;

class Solution {
    public static int thirdMax(int[] nums) {
        Arrays.sort(nums);
        int i = nums.length - 1;
        int count = 1;
        
        while (i > 0 && nums[i] == nums[i - 1]) {
            i--;
        }
        while (i > 0) {
            if (nums[i] != nums[i - 1]) {
                count++;
                if (count == 3) {
                    return nums[i - 1];
                }
            }
            i--;
        }
        return nums[nums.length - 1];
    }
}
