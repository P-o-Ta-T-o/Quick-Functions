int binarySearchHelper(int input[] , int start , int end , int k){
    if(start > end){
        return -1;
    }
    else{
        int mid = (start+end)/2;

        if(input[mid] == k){
            return mid;
        }
        else if(input[mid] > k){
            start = start;
            end = mid - 1;
            binarySearchHelper(input, start, end, k);
        }
        else{
            start = mid+1;
            end = end;
            binarySearchHelper(input, start, end, k);
        }
    }
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    int start = 0;
    int end = size - 1;
    binarySearchHelper(input, start, end, element);
}