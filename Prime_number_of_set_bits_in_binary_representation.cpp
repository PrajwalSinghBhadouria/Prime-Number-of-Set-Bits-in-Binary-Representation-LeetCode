class Solution {
public:
bool isPrime(int n){
        int i;
        if(n<=1){
            return false;
        }
        for(i=2; i<=n; i++){
            if(n%i==0){
                break;
            }
        }
        if(i!=n){
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        map<int,int> mp;
        int n;
        bool ans;
        int count=0;
        for(int i = left; i<=right ; i++){
            n = i;
            while(n!=0){
                mp[n%2]++;
                n = n/2;
            }
            for(auto k:mp){
                if(k.first == 1){
                    ans = isPrime(k.second);
                    if(ans){
                        count++;
                    }
                }
            }
            mp.clear();
        }
        return count;
    }
};
