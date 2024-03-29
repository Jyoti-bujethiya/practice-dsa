class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& A) {
        S.insert(A.begin(),A.end());
        long long ans=0; for (auto x: S) ans+=go(x);
        return int(ans % 1000000007);
    }
private:
    unordered_set<int> S;
    unordered_map<int,long long> M;
    long long go(int x){
        if (M.count(x)) return M[x];
        long long cnt=1; for (int i: S) if (x%i==0 && S.count(x/i)) cnt+=go(i)*go(x/i);
        return M[x]=cnt;
    }
};