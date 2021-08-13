//celebrity problem
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int a=0,b=n-1;
        
        while (a<b){
            if (M[a][b]){
                a++;
            }
            else{
                b--;
            }
        }
        
        int c=0,p=0;
        for (int i=0;i<n;i++){
            if (M[a][i])
                c++;
            
            if (M[i][a])
                p++;
        }
        if (c==0 && p == n-1)
            return a;
        else 
            return -1;
        
    }
};
