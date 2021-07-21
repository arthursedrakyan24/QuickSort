#include <iostream>

using namespace std;

//arr(7 16 9 20 14 5)
void Swap (int*a, int*b){
	int t = *a;
	*a = *b;
	*b = t;
}

int sorting(int arr[], int low, int high){
	int a=-1;
	int verj=arr[high];
	int x;
	for(int i=0; i<=high-1; i++){
		if(arr[i]<verj){
			a++;
			Swap(&arr[a], &arr[i]);	
		}
			
	}
	Swap(&arr[a+1], &arr[high]);
	return (a+1);
}
void quickSort(int arr[], int low, int high){
		if (low < high){
		int pi = sorting(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
		}
}	

int main(){
	int arr[] = {7,16,20, 14, 9, 5, 8};
	int length=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, length-1);
	int f=0;
	for(int i=0; i < length; i++){
	cout<<arr[i]<<endl;
	}
	
}		
