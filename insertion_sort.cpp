#include<iostream>
using namespace std;

void display(int i){
	cout<< "\n\nPass " << i <<endl;
}

int main(){
	int n=5, j;
	int A[] = { 40, 30, 20, 50, 10 };
	
	cout<<"Origial Array: ";
	for (int k=0; k<n; k++)
			cout<<A[k]<<" ";
	
	for (int i=1; i<n; i++){
		display(i);
		int temp=A[i];
		for(j=i-1; j>=0 && temp<A[j]; j--)
			A[j+1] = A[j];
		
		if(temp==A[j+1])
			cout<<"Nothing changed.\n";
		else
			cout<< temp <<" moved to first place.\n";
		
		A[j+1] = temp;
		
		cout<<"Current Array: ";
		for (int k=0; k<n; k++)
			cout<<A[k]<<" ";
		cout<<"\n";
	}
	return 0;
}
