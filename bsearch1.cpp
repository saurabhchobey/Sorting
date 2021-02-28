
#include<bits/stdc++.h>
using namespace std;
int btt(int arr[],int l,int mid,int r){
	
	
	
}





int bst(int arr[],int l,int r,int x){
	
	while(r>=l){
	
		
	
		int mid ;
		mid = (l+(r-1))/2;
		
		if  (arr[mid]==x)
			
			return mid;
		if(arr[mid]>x)
	    {
	    	r=mid;
	}
	     
		else 
		l=mid+1;
		
	
		
		
	
	
}
}
int main(){


	int a[]={1,2,4,3,8,5,6,7};
	int k=sizeof(a)/sizeof(a[0]);
//	sort(a,a+k);

	
	
	int x;
	cin>>x;
	
	
	int result=bst(a,0,k,x);
	cout<<result;
	
	
	
	return 0;
	
	
	
}
