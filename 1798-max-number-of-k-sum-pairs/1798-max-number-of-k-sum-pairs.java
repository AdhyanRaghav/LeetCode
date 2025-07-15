class Solution {
    public static int maxOperations(int[] nums, int k) {

        int n=nums.length;
        int i=0,j=n-1;
        int count=0;
        Arrays.sort(nums);
        

        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==k){
                count++;
                i++;j--;
            }else if(sum>k){
                j--;
            }else{
                i++;
            }
        }
        return count;
    }
}