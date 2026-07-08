int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) return 0;

    int cash = 0;                // 不持有股票时的最大现金
    int hold = -prices[0];       // 持有股票时的最大现金（买入了第一天的股票）

    for (int i = 1; i < pricesSize; i++) {
        // 先保存旧值，避免同时更新相互影响
        int prev_cash = cash;
        int prev_hold = hold;

        // 今天结束后不持有：昨天不持有 或 昨天持有今天卖出
        cash = prev_cash > (prev_hold + prices[i]) ? prev_cash : (prev_hold + prices[i]);
        // 今天结束后持有：昨天持有 或 昨天不持有今天买入
        hold = prev_hold > (prev_cash - prices[i]) ? prev_hold : (prev_cash - prices[i]);
    }

    return cash;
}