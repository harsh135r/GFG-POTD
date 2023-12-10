#include<iostream>
using namespace std;
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0, i=0,count=0;
        next:;
        //checking sum of sub array starts from count(variable)
        for(;i<n;i++){
            if(arr[i]==0){
                return 1;
            }
            sum=sum+arr[i];
            
            if(sum==0){
                return 1;
            }
            
        }
        count++;//changing starting index
        if(count<n){
            i=count;
            sum=0;
            goto next;
        }
        //sum of all subarray is non zero
        else{
            return 0;
        }
    }
};
main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution ob;
    cout<<ob.subArrayExists(arr,n);
}
