// beats 100%
int maxProfit(int* prices, int pricesSize) {
    int maxProf = 0;
    int i = 1;
    int currMin = 0;
    while (i < pricesSize) {
        if (prices[currMin] < prices[i]) {
            maxProf += (prices[i] - prices[currMin]);
            currMin = i;
        } else if (prices[currMin] > prices[i]) {
            currMin = i;
        }
        i++;
    }

    return maxProf;
}