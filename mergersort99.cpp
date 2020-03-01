#include<iostream>
using namespace std;



void merge(int arr[],int l,int m,int r){
	
	int ls=m-l+1;
	int rs=r-m;
	int leftarr[ls];
	int rightarr[rs];
	
	
	for (int i=0;i<ls;i++){
		
		leftarr[i]=arr[l+i];
	}
	for (int i=0;i<rs;i++){
		
		rightarr[i]=arr[m+1+i];
	}
	int i=0;int j=0;int k=1;
	while(i<ls && j<rs){
		if(leftarr[i]<rightarr[j]){
			arr[k]=leftarr[i];
			i++;
		}
		else{
			arr[k]=rightarr[j];
			j++;
		}
		k++;
	}
	while(i<ls){
		arr[k]=leftarr[i];
		i++;
		k++;
	}
	while(j<rs){
		arr[k]=rightarr[j];
		j++;
		k++;
	}
}
void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}







int mergesort(int arr[],int l,int r){
	
	if(l<r){
	
	int mid;
	mid=(l+r)/2;
	
	
	mergesort(arr,l,mid);
	mergesort(arr,mid+1,r);
	merge(arr,l,mid,r);
}
}





int main(){
	int arr[]={1,5,3,2};
	int l=sizeof(arr)/sizeof(arr[0]);
	
	mergesort(arr,0,l-1);
	display(arr,l);
	
	
	
	
	
	
	return 0;
}
