int findKRotation(int arr[], int n) {
        int low=0,high=n-1,mid;
        while(high-low>1){
            mid=(low+high)/2;
            if(arr[low]<arr[mid]){
                low=mid;
            }
            else high=mid;
        }
        return arr[high]<arr[low]?high:0;
    }