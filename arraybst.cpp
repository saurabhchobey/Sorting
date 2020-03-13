

#include<iostream>
using namespace std;

//void ser(int ar[],int l,int,r,int x){
//	
//	if(ar[mid]==x){
//		cout<<mid;
//	}
//	if(ar[mid]>x)
//		
//	{
//		
//	}









int bst(int ar[],int l,int r,int x){
	
	if(l<r){
		int mid=(l+r)/2;
		if(ar[mid]==x){
		
			return mid;
			
		
	
	if(ar[mid]<x)
	
         	return bst(ar,l,mid,x);
    
if(ar[mid]>x)

	return bst(ar,mid+1,r,x);
}

//	ser(ar,l,r,x);
}
}





int main() {
	int b;
	cin>>b;
	
	int *a=new int[b];
	int k;
	for (int i=0;i<b;i++){
		
		a=new int[b];
	}
	for (int i=0;i<b;i++){
		cin>>k;
		a[i]=k;
	}
for (int i=0;i<b;i++){
cout<<a[i]<<" ";
}
int size=sizeof(a)/sizeof(a[0]);
int x;
cin>>x;
     int result=bst(a,0,size,x);
     cout<<result;


return 0;
}
