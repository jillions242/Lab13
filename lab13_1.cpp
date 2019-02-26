#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i,j,k;
	for(j=1;j<N;j++){
		for ( i=0;i<N;i++){
			if(i==j) cout<<"["<<d[i]<<"]";
			else cout << d[i]<<" ";

		}cout<<"==>";
		int W=0;
		for ( k=0;k<j;k++){
			if(d[k]<d[j]){
				W++;
				swap(d,j,k);
			}
			
			
		}
		for ( i=0;i<N;i++){
			if(i==(j-W)) cout<<"["<<d[i]<<"]";
			else cout << d[i]<<" ";
		}
		cout<<"\n";
	}
	
	
//if(d[i]<d[i+1]) swap(d,i,i+1);

//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
