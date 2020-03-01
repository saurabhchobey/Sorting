#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int ls=m-l+1;
	int rs=r-m;
	int leftarr[ls];
	int rightarr[rs];
	
	for(int i=0;i<ls;i++)
	{
		leftarr[i]=arr[l+i];	
	}	
	for(int i=0;i<rs;i++)
	{
		rightarr[i]=arr[m+1+i];	
	}
	
	int i=0;
	int j=0;
	int k=l;
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

void mergsort(int arr[],int l,int r){
	
	
	if(l<r){
		
		int m=(l+r)/2;
		
		mergsort(arr,l,m);
		mergsort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	cout<<endl;
}



int main(){
	
	int a[]={1,4,2,3};
	 int arr_size = sizeof(a)/sizeof(a[0]); 
	 mergsort(a,0,arr_size-1);
	 print(a,arr_size);
	 
	 
	 return 0;
}
