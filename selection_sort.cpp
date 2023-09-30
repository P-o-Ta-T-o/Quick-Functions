void selectionSort(int input[] , int n){
    for(int i=0; i<n-1; i++){

        //fimd min element
        int min = input[i];
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(input[j] < min){
                min = input[j];
                minIndex = j;
            }
        }
        
        //swap
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
    }
}