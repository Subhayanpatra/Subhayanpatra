

#include <iostream>
using namespace std;
int partion(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    int j=first;
    for(;j<last;j++){
      if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
      }  
    }
    swap(arr[i+1],arr[last]);
    return i+1;
    
}
void quickShort(int arr[],int first,int last){
    if(first>=last){
        return;
    }
    int pi=partion(arr,first,last);
    quickShort(arr,first,pi-1);
    quickShort(arr,pi+1,last);
}
int main()
{
    int arr[]={20,12,35,16,18,30};
    int n =sizeof(arr)/sizeof(arr[0]);
    quickShort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}