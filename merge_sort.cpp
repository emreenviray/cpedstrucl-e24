#include<iostream>
using namespace std;

void display(int i){
	cout<< "\n\nPass " << i <<endl;
}

int main(){
	int n(8), l1, l2, h1, h2, i, j, k, v(1), size, temp[99];
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	
	cout<<"Origial Array: ";
	for (int o=0; o<n; o++)
			cout<<A[o]<<" ";
	
	for (size=1; size<n; size*=2){
		display(v);
		l1 = 0;
		k = 0;
		while (l1+size < n){
			h1 = l1+size-1;
			l2 = h1+1;
			h2 = l2+size-1;
			if (h2 >= n)
				h2 = n-1;
			i = l1;
			j = l2;
			while(i<=h1 && j<=h2){
				if(A[i] <= A[j])
					temp[k++] = A[i++];
				else
					temp[k++] = A[j++];
			}
			while (i <= h1)
				temp[k++] = A[i++];
			while (j <= h2)
				temp[k++] = A[j++];
			l1 = h2 + 1;
		}
		for (i=l1; k<n; i++)
			temp[k++] = A[i];
		for (i=0; i<n; i++)
			A[i] = temp[i];
	
			
		cout<<"\nCurrent Array: ";
		for (int m=0; m<n; m++)
			cout<< A[m] << " ";
		cout << "\n" ;
		v++;
	}
	return 0;
}
