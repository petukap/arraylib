#include<iostream>
#include "arraylib.h"
using namespace std;

int main(){
    int n;
    cout<<"размер :";
    cin>>n;
    int arr[n];
    cout<<"содержимое :"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr_sum(arr,n)<<" sum"<<endl;
    cout<<arr_max(arr,n)<<" max"<<endl;
    cout<<arr_min(arr,n)<<" min"<<endl;
    cout<<arr_average(arr,n)<<" aver"<<endl;
    cout<<arr_count_positive(arr,n)<<" >0"<<endl;
    cout<<arr_count_negative(arr,n)<<" <0"<<endl;
    cout<<arr_count_zero(arr,n)<<" =0"<<endl;
    cout<<arr_product(arr,n)<<" proizv"<<endl;
    cout<<arr_median(arr,n)<<" med"<<endl;
}