int maxProfit(int* prices, int pricesSize) {
    int maxprof=0;
    int best=prices[0];
    for(int i=0;i<pricesSize;i++){
        if(prices[i]>best){
            maxprof=maxprof>(prices[i]-best)?maxprof:prices[i]-best;
        }
        best=prices[i]<best?prices[i]:best;
    }
    return maxprof;
}