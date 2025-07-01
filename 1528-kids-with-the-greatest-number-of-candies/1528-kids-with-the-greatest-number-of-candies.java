class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        List<Boolean> result = new ArrayList<>();
        int maxValue=0;

        for(int i=0;i<candies.length;i++){
            maxValue=Math.max(maxValue,candies[i]);
        }
        int i=0;

        while(i<candies.length){
            if(candies[i]+extraCandies==Math.max(candies[i]+extraCandies,maxValue)){
                result.add(true);
            }else{
                result.add(false);
            }
            i++;
        }
        return result;
    }
}