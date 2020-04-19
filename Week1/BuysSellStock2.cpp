class Solution {
    public int maxProfit(int[] prices) {
        int i = 0;
        int[] v = new int[prices.length];
        Arrays.fill(v,0);
        int k = 0;
        while(i<prices.length){
            int temp = prices[i];
            while(i<prices.length-1?(prices[i]<prices[i+1]):false){
                i++;
            }
            int val = prices[i] - temp;
            v[k] = val;
            k++;
            i++;
        }

        return (Arrays.stream(v).sum());
    }
}
