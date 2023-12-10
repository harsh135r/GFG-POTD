//driver code starts
      #include<iostream>
      using namespace std;
//driver code ends
      class Solution
      {
          public:
          int minNumber(int arr[],int N)
          {
              int sum=0,count=0;
              for(int i=0;i<N;i++){
                  sum=sum+arr[i];
              }
              prime:
              for(int k=2;k<sum;k++){
                  if(sum%k==0){
                      sum++;
                      count++;
                      goto prime;
                  }
              }
              return count;
          }
      };
//driver code starts
      int main(){
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
              cin>>arr[i];
          }
          Solution ob;
          cout<<ob.minNumber(arr,n);
      }
//driver code ends
