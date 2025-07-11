class Solution {
    public static int maxArea(int[] height) {

        int n=height.length;
        int i=0,j=n-1;
        int maxArea=0;
        while(i<j){
            int l=j-i;
            int breath=Math.min(height[i],height[j]);
            int Area=l*breath;
            maxArea=Math.max(maxArea,Area);

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxArea;
    }
}