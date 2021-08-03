//job sequencing problem
class Solution 
{
    
    static bool comparator(Job a,Job b){
        return a.profit>b.profit;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort (arr,arr+n,comparator);
        vector<int> v;
        v.push_back(0);     //1st element stores job count
        v.push_back(0);     //2nd element stores max profit
        
        int slot[n]={0};
        for (int i=0;i<n;i++){
            int k;
            for (k=min(n-1,arr[i].dead-1);k>=0;k--){
                if (slot[k]==0){
                    slot[k]=1;
                    break;
                }
            }
            if (k!=-1){
                v[0]++;
                v[1]+=arr[i].profit;
            }
        }
        
        return v;
    } 
};
