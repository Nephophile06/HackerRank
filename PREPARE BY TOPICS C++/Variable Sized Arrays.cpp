#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m; 
    cin >> n >> m;
    
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i].resize(x);
        
        for(int j = 0; j < x; j++){
            cin >> v[i][j];
        }
    }
    
    for(int j = 0; j < m; j++){
        int k, l;
        cin >> k >> l;
        cout << v[k][l] << endl;
    }
 
    return 0;
}
