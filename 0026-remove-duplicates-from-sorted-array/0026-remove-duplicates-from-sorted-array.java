class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int write=0;
        int k=0;

        for(int read=1;read<n;read++){
            if(nums[read]!=nums[write]){
                nums[write+1]=nums[read];
                write++;
            }
        }
        
        return write+1;
    }
}