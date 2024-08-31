using namespace std;
#include <iostream>
#include <vector>

void input_vector(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}

void print_vector(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
}

int main(){
    int n, maxBuy = -1;
    cin >> n;
    vector<int> prices(n);
    input_vector(prices);

    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(prices[j] - prices[i] > maxBuy) maxBuy = prices[j] - prices[i];
        }
    }

    cout << maxBuy << endl;

}