//delete from array
#include <iostream>
using namespace std;
int main (){
	int A[10] = {2,6,8,7,1};  // array pf size 10 but only 5 elements used
	int size = 5;      //logicalsize of array
	int pos = 2;    //delete element at index of 2 (value 8)
	//shift elements left to overwrite deleted one 
	for(int i = size; i<size-1;++i){
		A[i] = A[i+1];
	}
	size--;    //reduce logical size
		cout<<"After deletion : ";
	for(int i=0; i<size;++i)
		cout<<A[i]<<" "<<endl;
	cout<<endl;
	
	return 0;
}