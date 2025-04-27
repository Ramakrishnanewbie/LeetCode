class Solution {
public:
    int BinarySearch(vector<int>& arr, int tar,int st,int end){
        if(st > end){
            return -1;
        }
        else{
            int mid= (st+end)/2;
            if(arr[mid] == tar){
                return mid;
            }
            else if (arr[mid] > tar){
                return BinarySearch(arr, tar,st,mid -1);
            }
            else{
                return BinarySearch(arr, tar,mid+1,end);
            }
        }

    }
    int search(vector<int>& arr, int tar) {
        int x= BinarySearch(arr, tar,0,arr.size()-1);
        return x;
    }
};