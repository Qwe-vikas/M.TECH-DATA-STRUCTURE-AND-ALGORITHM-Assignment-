#include<iostream>
using namespace std;

int QuickSort(int arr[], int str_, int end_)
{

	if (str_ == end_)
		return 0;
		
	int pivot = arr[end_];
	int p_index = str_;
	
	for(int i= str_; i<end_; i++){
		
		if(arr[i]<= pivot){
			//swap p_index and i
			int temp = arr[p_index];
			arr[p_index]= arr[i];
			arr[i]= temp;
			//increase p_index by 1
			p_index++;
		}
	}
		arr[end_]= arr[p_index];
		arr[p_index]= pivot;
	if(str_ <  p_index-1)
	 QuickSort(arr,str_, p_index-1);
	if(p_index+1 < end_)
	 QuickSort(arr,p_index+1, end_);

}


int main()
{

	int a[6]={13, 21, 33, 14, 67, 30};
	int start = 0;
	int end = 5;  // end = n-1
	
	QuickSort(a, start, end);
	
		cout<<"sorted array:";
	for(int i=0; i<end+1; i++){
	
		cout<< a[i]<<"\t";
	}
	
	
}
