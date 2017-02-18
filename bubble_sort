#include<iostream>
using namespace std;

void display(int i){
	cout<<"\n\nPass "<< i;
}

int main(){
	int n=5, a, b, z(1);
	int A[]={35, 10, 55, 20, 5};
	
	cout<<"Origial Array: ";
	for (int k=0; k<n; k++)
			cout<<A[k]<<" ";

	for (int i=n; i>1; i--){
		display(z);
		for(int j=0; j<i-1; j++)
			if (A[j] > A[j+1]){
				cout<<"\n"<<A[j]<<" and "<<A[j+1]<< " swapped places.\n";
				A[j] ^= A[j+1];
				A[j+1] ^= A[j];
				A[j] ^= A[j+1];
				
				for (int k=0; k<n; k++)
					cout<<A[k]<<" ";
			}
		cout<<"\nCurrent Array: ";
		for (int k=0; k<n; k++)
			cout<<A[k]<<" ";
		z++;
	}
	return 0;
}
