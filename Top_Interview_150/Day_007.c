/*
 Array/String:
 -> Best Time to Buy and Sell Stock (Easy)
   #121 | Array | Dynamic Programming
*/

int maxProfit(int *prices, int pricesSize){
    if (pricesSize == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 0; i<pricesSize; i++){
        int profit = prices[i] - minPrice;

        if(profit > maxProfit) maxProfit = profit;

        if(prices[i] < minPrice) minPrice = prices[i];
    }

    return maxProfit;
}
