class Solution {
    public static int []c;
    public static int []dp;
    public int f(int amount){
        int ans =Integer.MAX_VALUE;
        if(amount<0)return dp[amount]= Integer.MAX_VALUE;
        if(amount == 0)return 0;

        if(dp[amount]!= -1)return dp[amount];
        for(int i=0; i<c.length; i++){
            if(c[i]<=amount){
            ans = Math.min(ans , f(amount- c[i]));
            }
        }
        if(ans == Integer.MAX_VALUE)return dp[amount]= Integer.MAX_VALUE;
        else return dp[amount]=1+ans;
    }
    public int coinChange(int[] coins, int amount) {
        c= coins;
        dp= new int[10004];
        Arrays.fill(dp,-1);
        int res = f(amount);
        return (res==Integer.MAX_VALUE)?-1:res;
    }
}