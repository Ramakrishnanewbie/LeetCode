import java.util.Arrays;
class Solution {
    public boolean containsDuplicate(int[] a) {
        int l=a.length;
        boolean f=false;
        Arrays.sort(a);
        for(int i=0;i<l-1;i++){
            if(a[i]==a[i+1]){
                f=true;
                break;
            }
            else{
                f=false;
            }
        }
        return f;
    }
}