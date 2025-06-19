class Solution {
    public int removeElement(int[] nums, int val) {
        int n=nums.length;
        int write=0;
        
        for(int read=0;read<n;read++){
            if(nums[read]!=val){
                nums[write]=nums[read];
                write++;
            }
        }
        return write;
    }
}