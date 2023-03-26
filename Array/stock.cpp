class Solution {
public:
     int maxProfit(vector<int>& prices) {
         int buy=0;
         int sell=1;
         int profit=0;
         while(sell<prices.size())
         {
             if(prices[sell]-prices[buy]<0)
             {
                 buy=sell;
                 sell++;
             }

             else
             {
                 if(prices[sell]-prices[buy]>profit)
                 {
                     profit=prices[sell]-prices[buy];
                     
                 }
                 sell++;
             }
         }

         return profit;
     }
};