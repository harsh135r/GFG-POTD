//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here
        long sum=0,count=0,i=0,max=0;
        
        next:
        for(i = count; i < count+K; i++){
            if(i>=arr.size()){
                break;
            }
            sum=sum+arr[i];
        }
        count++;
        if(sum>max){
            max=sum;
        }
        
        if(count<=arr.size()-K){
            sum=0;
            goto next;
        }
        return max;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
