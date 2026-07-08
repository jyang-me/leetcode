
int maxProfit(int* prices, int pricesSize) {
    // 初始化最低价格和最大利润
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // 1. 更新历史最低价格
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // 2. 计算如果明天卖出的利润，并更新最大利润
        int profit = prices[i+1] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }
    return maxProfit;
}