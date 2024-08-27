    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int t;
        //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
        cin >> t;
        while(t--) {
            double N, M = 10000;
            cin>> N;
            N *= 1.25;
            cout << min({M, N}) << endl;
        }
        return 0;
    }
