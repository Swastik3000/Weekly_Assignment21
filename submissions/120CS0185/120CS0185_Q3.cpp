//best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if (prices.size()==1){
        return  0;
    }
        
    int dif=0,b=0,s=1;

    for(int i=0;i<prices.size()-1;i++){
        if(prices[i]<prices[b]){
            b=i;
            s=b+1;
        }
        if (prices[i]>prices[b] && i>b && prices[i]>prices[s]){
            s=i;
        }
        dif=max(dif,prices[s]-prices[b]);
    }

    dif=max(dif,prices[prices.size()-1]-prices[b]);

    if (dif>0)
        return dif;
    else 
        return 0;
    }
};