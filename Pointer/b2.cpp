#include<iostream>

using namespace std;
void f1(int arr[]){
	cout<<"kich thuoc mang"<<sizeof(arr)<<endl;
}
void f2(int * arr){
	cout<<"kich thuoc mang"<<sizeof(arr)<<endl;}
int main(){
	int A[10];
	cout<<"kich thuoc mang:"<<sizeof(A)<<endl;
	f1(A);
	f2(A);
	return 0;
}
/* out put la 40 8 8 cm truyen ham thuc chaat la con tro*/

