#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x, ai;
    vector<int> a;

    cin >> n >> k >> x;
    for (int i = 0; i < n; i++){
        cin >> ai;
        a.push_back(ai);
    }
    
    if (k % 2 == 0){
        sort(a.begin(), a.end());
        cout << a.back() << " " << a.front() << endl;
    }else{
        int maxX = a[0]^x;
        int minX = a[0]^x;
        for (int i = 2; i < n; i += 2) {
            maxX = max(maxX, a[i]^x);
            minX = min(minX, a[i]^x);
        }

        cout << maxX << " " << minX << endl;
    }
    return 0;
}