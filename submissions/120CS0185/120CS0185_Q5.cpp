//product of array except self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1,c=0;    //c to count no of zeroes
        
        for (int x : nums){
            if (x==0){
                c++;
            }
            else
                p*=x;
        }
        
        vector<int> v;
        if (c>1){
            vector<int> v1(nums.size());
            fill(v1.begin(),v1.end(),0);
            return v1;
        }
        
        for (int x : nums){
            if (x==0){
                v.push_back(p);
            }
            else if (c==1){
                v.push_back(0);
            }
            else {
                v.push_back(p/x);
            }
        }
        
        return v;
            
    }
};