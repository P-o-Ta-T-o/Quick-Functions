//input includes start and end index too

void merge(int a[] , int si , int ei){
    int *temp = new int[ei-si+1];
    int mid = (ei+si)/2;

    int i = si;
    int j = mid+1;
    int k = 0;

    while (i<=mid && j<=ei){
        if(a[i] >= a[j]){
            temp[k++] = a[j++];
        }
        else{
            temp[k++] = a[i++];
        }
    }

    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j <= ei){
        temp[k++] = a[j++];
    }
    int m = 0;
    while(m < k){
        a[si + m] = temp[m];
        m++;
    }
    delete [] temp;
}

void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr , l , r);
}