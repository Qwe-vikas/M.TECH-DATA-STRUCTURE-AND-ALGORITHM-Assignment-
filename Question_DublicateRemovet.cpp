#include<iostream>
using namespace std;

int main()
{
	int j =0;
	int arr[]= {2, 2, 7, 7, 12, 14, 14, 14, 17};
	for(int i=0; i<8; i++){
		if(arr[i] != arr[i+1]){
			arr[j]= arr[i];	
			j++;
		}
		arr[j]= arr[8];
	}
	cout<<"distant element:";
	for(int i=0; i<=j; i++){
		cout<<arr[i]<<"\t";
	}
	
	
}
