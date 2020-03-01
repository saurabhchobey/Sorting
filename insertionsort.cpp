#include<iostream>
using namespace std;
int main(){
	
	
	int a[5]={1,5,3,6,3};
	int temp;
	int j;
	for(int k=0;k<5;k++){
		
		temp=a[k];
		j=k-1;
		while(j>=0&&temp<=a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		
			
			
			
		}
		for(int i=0;i<6;i++){
			
			
			cout<<a[i]<<" ";
			
			
			
		}
		
		
		return 0;
		
		
	
	
	
}

