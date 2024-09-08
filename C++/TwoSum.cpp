/*
Array of integers and integer target
Return indeces that add up to target
Assume array is ordered
*/

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
}

pair<int, int> two_sum(vector<int> v, int target) {
    int iFirst = 0;
    int iLast = v.size() -1;
    
    while(iFirst < iLast) {
        int sum = v[iFirst] + v[iLast];
        //Base case
        if(sum == target) {
            pair<int, int> p(iFirst, iLast);
            return p;
        }
        else if(sum > target) --iLast;
        else if(sum < target) ++iFirst;   
    }
    pair<int, int> nF(-1, -1);
}

int main(){
    int nV, target;
    cin >> nV;
    vector<int> v(nV);
    input_vector(v);
    cin >> target;
    
    pair<int, int> result = two_sum(v, target);
    cout << result.first << " " << result.second << endl;
}
