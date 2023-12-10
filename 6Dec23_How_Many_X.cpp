#include<iostream>
using namespace std;
class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        L++;
        int temp,ans=0;
        while(L!=R){
            temp=L;
            for(;temp>0;){
                if(temp%10==X){
                    ans++;
                }
                temp=temp/10;
            }
            L++;
        }
        return ans;
    }
};
int main(){
int L,R,X;
cin>> L >> R >> X;
Solution ob;
cout<< ob.countX(L,R,X) ;
}
