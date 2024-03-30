void merge(int* arr, int nums1Size, int m, int* nums2, int nums2Size, int n){

   int j=0;
    for(int i=0;i<nums1Size;i++){
        if(arr[i]==0)
            arr[i]=nums2[j++];
        if(j==nums2Size)
            break;
    }
    for(int i=0;i<nums1Size;i++){
        for(int j=i+1;j<nums1Size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return ;
}