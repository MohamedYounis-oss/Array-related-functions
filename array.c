
int array_scan(int arr[]){

    int size;

    printf("Enter number of elements : ");
    scanf("%d", &size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    return size;
}


void array_print(int arr[], int size){

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int array_search(int arr[], int size, int num){

    for (int i=0; i<size; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}


int series(int* arr, int size){

    int count=1, max=0;

    for (int i=0; i<size; i++){

        if(arr[i+1]-arr[i]==1){
            count++;
        }
        else {
            if(count>max) {
                max = count;
            }
            count=1;
        }
    }

    return max;
}


void array_copy(int* source, int size, int* copy){

    for(int i=0; i<size; i++){

        copy[i] = source[i];
    }
}


int last_occurence(int* arr, int size){

    int index;

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){

            if(arr[i]==arr[j]){
                index = j;

            }
        }
    }

    return index;
}


void maxMin(int* arr, int size, int* max, int*min, int* max_index, int* min_index){

    *max=arr[0];
    *max_index=0;

    *min = arr[0];
    *min_index=0;

    for (int i=1; i<size; i++){
        if(arr[i]>*max){
            *max = arr[i];
            *max_index = i;
        } else if (arr[i]<*min){
            *min = arr[i];
            *min_index = i;
        }
    }
}


int bet_2_numbers(int* arr, int n1, int n2){

    int j=0;
    for (int i=n1+1; i<n2; i++){
        arr[j++]=i;
    }
    return j;
}


int most_repeated(int* arr, int size){

    int num, max = 0;
    for (int i=0; i<size; i++){

        int  count=0;
        for (int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count>max){
            max = count;
            num = arr[i];
        }
    }

    return num;
}


void array_reverse(int* arr, int size){

    for (int i=0, j=size-1; i<size/2, j>=size/2; i++, j--){
        swap(arr+i, arr+j);
    }
}


void array_swap(int*arr1, int size1, int*arr2, int size2){

    int size = size1>=size2?size2:size1;

    for (int i=0; i<size; i++){
        swap(arr1+i, arr2+i);
    }
}


int given_occurence(int* arr, int size, int num){

    int count=0;
    for (int i=0; i<size; i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}


int longest_series(int* arr, int size, int* most_rep){

    int count = 1, max = 0;

    for (int i=0; i<size; i++){

        if(arr[i]==arr[i+1]){
            count++;
        } else {
            if (count > max){
                max = count;
                *most_rep = arr[i];
            }
            count = 1;
        }
    }

    return max;
}


int array_zigzag(int* arr1, int size1, int* arr2, int size2, int* newArr){

    int size = size1 + size2;

    int j=0;
    for (int i=0; i<size; i+=2){

        newArr[i] = arr1[j];
        newArr[i+1]= arr2[j];
        j++;
    }
    return size;

}


void swap3_elements(int* arr){

    int* p1, *p2;
    int count0 = 0;

    for (int i=0; count0<2; i++){
        if(arr[i]==0){
            if(count0==0){
                p1 = arr+i+1;
            } else if(count0==1){
                p2 = arr+i+1;
            }
            count0++;
        }
    }

    for (int i=0; i<3; i++){
        int temp;
        temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}


int biggest_difference(int* arr, int size){

    int min = 0;

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if((arr[i]-arr[j])<min){
                min = arr[i]-arr[j];
            }
        }
    }
    return min>0?min:min*-1;
}



