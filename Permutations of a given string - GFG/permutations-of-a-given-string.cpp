// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		void solve(string s, int i, vector<string> &ans) {
	        // Base Case
	        int n = s.size();
	        if(i == n) {
	            ans.push_back(s);
	            return ;
	        }
	        
	        for(int j = i; j < n; j++) {
	            swap(s[i], s[j]);
	            solve(s, i+1, ans);
	            // Backtrack
	            swap(s[i], s[j]);
	        }
	        
	    }
		vector<string>find_permutation(string S) {
		    vector<string> ans;
		    solve(S, 0, ans);
		    map<string,int> m;
		    for(int i = 0; i < ans.size(); i++) {
		        m[ans[i]]++;
		    }
		    vector<string> a;
		    for(auto i: m) {
		        a.push_back(i.first);
		    }
		    return a;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends