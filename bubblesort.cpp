#include<iostream>
using namespace std;
int main(){
	
	
	int a[7]={1,3,2,56,4,7,5};
		int temp;
		for (int i=0;i<7;i++){
			for (int j=i+1;j<7;j++){
				if (a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		
		}
		for (int i=7;i>=0;i--){
			cout<<a[i]<<" ";
		}
		
		
		
		return 0;
			
}
