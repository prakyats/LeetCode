class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int profit=0,mini=prices[0],maxi=0;
        for(int i =1;i<n;i++){
        profit=prices[i]-mini;
        maxi=max(maxi,profit);
        mini=min(mini,prices[i]);
        }
        return maxi;
    }
};
        