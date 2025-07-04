import java.util.*;
class Solution {
    public static int[] sortedSquares(int[] nums) {

        int[]StSq=new int[nums.length];
        int n=StSq.length;
        int left=0,right=n-1;
        int pos=n-1;

        while(left<=right){
            int leftSq=nums[left]*nums[left];
            int rightSq=nums[right]*nums[right];
//            if (Math.abs(nums[left]) > Math.abs(nums[right])) {
            if(leftSq>rightSq){
                StSq[pos]=leftSq;
                left++;
            }else{
                StSq[pos]=rightSq;
                right--;
            }
            pos--;
        }
        return StSq;
    }
}