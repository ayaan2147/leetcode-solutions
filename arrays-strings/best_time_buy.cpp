#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int> & prices){
    int minprice = prices[0];
    int maxprofit=0;

    for(int i=0;i<prices.size();i++){
        if(prices[i]<minprice){
            minprice=prices[i];
        }
        int profit =prices[i]-minprice;
        if(maxprofit<profit){
            maxprofit=profit;
        }
    }
    return maxprofit;
}

int main(){
    int n;
    cout<<"enter the number of days";
    cin>>n;
    vector<int> prices(n);
    cout<<"enter the stock prices:"<<endl;
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int result=maxprofit(prices);
    cout<<"the maxium profit is:"<<result<<endl;

    return 0;
}