class Solution {
    public static int findClosest(int x, int y, int z) {

        int a=z-y;
        int b=z-x;

        if(y>z){
            a=y-z;
        }
        if(x>z){
            b=x-z;
        }
        if(a>b){
            return 1;
        }else if(a==b){
            return 0;
        }else{
            return 2;
        }
    }
}