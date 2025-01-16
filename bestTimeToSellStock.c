// beats 100%
int maxProfit(int* prices, int pricesSize) {
    int maxProf = 0;
    int curr = 1;
    int currMin = 0;
    while (curr < pricesSize) {
        if (prices[currMin] < prices[curr]) {
            int maxProfTemp = prices[curr] - prices[currMin];
            if (maxProfTemp > maxProf) {
                maxProf = maxProfTemp;
            }
        } else if (prices[currMin] > prices[curr]) {
            currMin = curr;
        }
        curr++;
    }
    return maxProf;
}