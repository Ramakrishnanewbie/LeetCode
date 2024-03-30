class Solution {
    public int[] twoSum(int[] a, int target) {
        int l=a.length;
        int []x=new int[2];
        for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
                if(a[i]+a[j]==target){
                    x[0]=i;
                    x[1]=j;
                }
            }
        }
        return x;
    }
}