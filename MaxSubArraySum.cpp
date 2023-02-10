#include<iostream>
using namespace std;
int MaxSubArraySum(int a[],int n){
    int sum = 0;
    int max = a[0];
    for(int i =0;i<n;i++){
        sum = sum+a[i];
        if(sum>=max){
            max = sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    return max;
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[100];
    cout<<"enter the element in array"<<endl;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int ans = MaxSubArraySum(a,n);
    cout<<"maximum sum of subarray of array is "<<ans;
}