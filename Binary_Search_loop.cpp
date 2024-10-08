int binarySearch(int nums[], int left, int right, int target) {
    
      // Write your code !!!!
     int mid = (left+right)/2;

     if(right < left){
        return -1;
     } 
     else {
        if(nums[mid] > target){
         left = left;
         right = mid - 1;
         
         binarySearch(nums, left, right, target);
     }
     else if(nums[mid] < target){
         left = mid + 1;
         right = right;
        
         binarySearch(nums, left, right, target);
     } 
     else{
         return mid;
     }
    }

}
