//insert into array
#include <iostream>  // include input/output library
using namespace std; //use standard namespace
int main (){
	int A[10] = {2,6,8,7,1};  // array pf size 10 but only 5 elements used
	int size = 5;  //logicalsize of array
	int pos = 3;  //index where we want to save
	int val = 9;  //new value of insert
	//shift elements right from the end until position
	for(int i = size; i<pos;--i){
		A[i] = A[i-1];
	}
	A[pos]=val; //place the new value
	size++;  // update logical size
	cout<<"After insertion : ";
	for(int i=0; i<0;++i)
		cout<<A[i]<<" "<<endl;
	cout<<endl;
	
	return 0;
}