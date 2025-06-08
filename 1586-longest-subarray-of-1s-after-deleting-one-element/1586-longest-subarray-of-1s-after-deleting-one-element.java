class Solution {
    public static int longestSubarray(int[] nums) {
        int n=nums.length;
        int zeroCount=0;
        int left=0;
        int maxLen=0;
        int right=0;

        for(right=0;right<n;right++){
            if(nums[right]==0){
                zeroCount++;
            }
            while(zeroCount>1){
                if(nums[left]==0){
                    zeroCount--;
                }
                left++;
            }
            maxLen=Math.max(maxLen,right-left+1);
        }

        return maxLen-1;
    }
}