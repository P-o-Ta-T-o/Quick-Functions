void arrange(int arr[], int n)
{
    int val = 1;
    for(int i=0; i<(n+1)/2; i++){
        arr[i] = val;
        val = val + 2;
    }
    
    int val2 = n;
    int val3 = n-1;

    for(int i = (n+1)/2; i<n; i++){
        if(n%2==0){
            arr[i] = val2;
            val2 = val2-2;
        }
        else{
            arr[i] = val3;
            val3 = val3 - 2;
        }
    }
}

/*
    sample input:
    6
    sample output:
    1 3 5 6 4 2

    sample input:
    9
    sample output:
    1 3 5 7 9 8 6 4 2
*/