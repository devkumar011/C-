#include<iostream>
#include<algorithm>
using namespace std;

void sortZeroOne(int arr[],int n){

    int zeroCount = 0;
    int oneCount =0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    //insertion 
    
    // for(int i=0; i<zeroCount;i++){
    //     arr[i]=0;
    // }
    // for(int i=0; i<zeroCount; i++){
    //     arr[i]=1;
   // }
}

int main(){
    int arr[]={0,1,1,1,0,0,1};
    int size = 7;

    //sortZeroOne(arr,size);
    sort(arr,arr+size);


    sortZeroOne(arr,size);
    //printing the array

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}