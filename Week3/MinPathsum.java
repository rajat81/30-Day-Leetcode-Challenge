import java.util.Arrays;


class Solution {
    public int minPathSum(int[][] grid) {
       // reursion current position and final->
        int l = grid.length;
        int b = grid[0].length;

        int[][] val = new int[l][b];
        val[0][0] = grid[0][0];

        for(int i = 0;i<l;i++){
            for(int j=0;j<b;j++){
                if(i-1>=0 && j-1>=0){
                    val[i][j] = grid[i][j] + Math.min(val[i-1][j], val[i][j-1]);
                    continue;
                }
                if(i-1<0 && j-1>=0){
                    val[i][j] = grid[i][j] +(val[i][j-1]);
                    continue;
                }
                if(j-1<0 && i-1 >=0){
                    val[i][j] = grid[i][j] +(val[i-1][j]);
                    continue;
                }
            }
        }

        return val[l-1][b-1];

    }
}

//intial pos 0,0
// final gird.length-1, grid[0].lengh-1

/*

parameter currX,currY
return recursion(l-1,b-1);

[i][i] the sum required to reach
base case : 0,0 val[0][0] = grid[0][0]
genral case
->
|
^
// j-1 >0 i-1>0
val i,j = grid(i,j) + Math.min(val(i-1,j), val(i,j-1))

*/
