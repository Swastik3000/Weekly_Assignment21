//Activity selection
class Solution
{
    public:
    bool comparator(const pair<int,int> &a, const pair<int,int> &b){
        return a.second<b.second;
    }
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back(make_pair(end[i],start[i]));
        }
        sort(p.begin(), p.end());
        
        int c=1,j=0;
        for (int i=1;i<n;i++){
            if(p[i].second>p[j].first){
                c++;
                j=i;
            }
        }
        return c;
    }
};
