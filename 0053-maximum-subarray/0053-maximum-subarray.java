class Solution {
    public static int maxSubArray(int[] nums) {

        int best=-100000;
        int sum=0;

        if (nums.length == 1) {
            return nums[0];
        }

        for(int i=0;i<nums.length;i++){
            if(sum<0){
                sum=0;
            }
            else{
                sum+=nums[i];
                best=Math.max(sum,best);

                if(sum<0){
                    sum=0;
                }
            }
        }
        return best;
    }
}