class Solution {
    public static int[] searchRange(int[] nums, int target) {

        int start=-1;
        int end=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                start=i;
                while(i+1<nums.length && nums[i+1]==target){
                    i++;
                }
                end=i;
                break;
            }
        }

        return new int[]{start,end};
    }
}