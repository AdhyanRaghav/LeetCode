class Solution {
    public static String gcdOfStrings(String str1, String str2) {

        if ((str1 + str2).equals(str2 + str1)) {
            int a = gcd(str1.length(), str2.length());
            return(str2.substring(0, a));
        }
        return "";
    }
    public static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}