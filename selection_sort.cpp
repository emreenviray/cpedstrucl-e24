#include<iostream>
using namespace std;

void display(int i){
	cout<< "\n\nPass " << i+1 <<endl;
}

int main(){
	int n=5;
	int A[]={40, 30, 20, 50, 10};
	
	cout<<"Origial Array: ";
	for (int k=0; k<n; k++)
			cout<<A[k]<<" ";
	
	for (int i=0; i<n-1; i++){
		display(i);
		int min=A[i], index=i;
		for(int j=i+1; j<n; j++)
			if (A[j] < min){
				min = A[j];
				index = j;
			}
			
		A[index] = A[i];
		A[i] = min;
		cout<<A[index]<<" and "<<A[i]<< " swapped places.\n";
		
		cout<<"Current Array: ";
		for (int k=0; k<n; k++)
			cout<<A[k]<<" ";
		cout<<"\n";
	}
	return 0;
}
