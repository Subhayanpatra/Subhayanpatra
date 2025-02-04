#include<iostream>
using namespace std;
void mergeShort(int arr1[],int n,int arr2[],int m,int result[]){
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			result[k]=arr1[i];
			k++;
			i++;
		}else{
			result[k]=arr2[j];
			k++;
			j++;
		}
	}
	while(i<n){
		result[k]=arr1[i];
		k++;
		i++;
	}
	while(j<m){
		result[k]=arr2[j];
		k++;
		j++;
	}
}
int main(){
	int arr1[]={1,2,3,9,10};
	int arr2[]={0,3,8,5,6};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	int result[n+m];
	mergeShort(arr1,n,arr2,m,result);
	for(int i=0;i<n+m;i++){
		cout<<result[i]<<" , ";
	}
	
}










