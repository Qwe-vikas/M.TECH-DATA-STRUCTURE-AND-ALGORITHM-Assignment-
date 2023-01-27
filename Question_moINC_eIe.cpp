#include<stdio.h>

int f_Mono_Increasing(int array[], int numberOfElements){
    int i, startIndex = 0, sequenceLength, monotonicallyIncreasingElements = 0;
    for(i = 0; i < numberOfElements; i++){
        
        sequenceLength = 1;
       
        while((i + 1 < numberOfElements) && (array[i] <= array[i + 1])){
            sequenceLength++;
            i++;
        }
       
        if(sequenceLength > monotonicallyIncreasingElements){
            monotonicallyIncreasingElements = sequenceLength;
            startIndex = (i + 1) - monotonicallyIncreasingElements;
        }
    }
    //Prints monotonically increasing sequence.
    
    printf("\nMonotonically increasing sub-sequence with %d element(s) is as follow:\n", monotonicallyIncreasingElements);
    monotonicallyIncreasingElements += startIndex;
    for(i = startIndex; i < monotonicallyIncreasingElements; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    int array[] = {5, 21, 27, 98, 136, 78, 11, 11, 67, 34};
    int i;
    printf("Original sequence:\n");
    for(i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
    f_Mono_Increasing(array, 10);
    return 0;
}
