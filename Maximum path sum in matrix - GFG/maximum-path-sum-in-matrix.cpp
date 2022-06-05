// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> mat)
   {
       // code here
       int n=mat.size(),m=mat[0].size();
       for(int i=n-2;i>=0;i--){
           for(int j=0;j<m;j++){
               int temp=mat[i+1][j];
               if(j-1>=0)temp=max(temp,mat[i+1][j-1]);
               if(j+1<n)temp=max(temp,mat[i+1][j+1]);
               mat[i][j]+=temp;
               
           }
       }
       int ans=0;
       for(int j=0;j<m;j++){
           ans=max(ans,mat[0][j]);
       }
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends