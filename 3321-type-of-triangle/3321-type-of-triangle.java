class Solution {
    public static String triangleType(int[] nums) {

       int a=nums[0];
       int b=nums[1];
       int c=nums[2];

       String result;
       if( a+b>c && a+c>b && b+c>a) {
           if (a == b && b == c) {
               result="equilateral";
           }else if (a == b && b != c || b == c && a != c || a == c && a != b) {
               result="isosceles";
           }else {
               result="scalene";
           }
       }else{
           result="none";
       }
       return result;
    }
}