// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
         int i = 0;
        int *ans = new int[2];
        
        while(i < n) {
    
            if(arr[i] != i+1) {
                if(arr[i] == arr[arr[i] - 1]) {
                    i++;
                } else {
                    swap(arr[i], arr[arr[i] - 1]);
                }
            } else {
                i++;
            }
        }
        
        for(int i = 0; i< n; i++) {
            if(arr[i] != i+1) {
                ans[0] = arr[i];
                ans[1] = i+1;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends