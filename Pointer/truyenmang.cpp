#include<iostream>
using namespace std;

int count_even(int*arr,int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	return count;
}
int main(){
	int A[10]={1,2,3,4,5,6,7,12,8,10};
	cout<<"so phan tu chan trong 5 phan tu dau la:"<<count_even(A,5)<<endl;
	
	cout<<"so phan tu chan trong 5 phan tu cuoi la:"<<count_even(A+5,5)<<endl;
return 0;
}
