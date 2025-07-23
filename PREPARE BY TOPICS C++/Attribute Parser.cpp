#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> tagMap;
    vector<string> tagStack;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        line = line.substr(1, line.size() - 2);

        stringstream ss(line);
        string word;
        ss >> word;

        if (word[0] == '/') {
            tagStack.pop_back();
        } 
        
        else {
            tagStack.push_back(word);
            string attrName, equal, attrValue;

            while (ss >> attrName >> equal >> attrValue) {
                attrValue = attrValue.substr(1, attrValue.size() - 2);
                string fullPath = "";

                for (int j = 0; j < tagStack.size(); ++j) {
                    if (j > 0) 
                        fullPath += ".";
                    fullPath += tagStack[j];
                }
                
                fullPath += "~" + attrName;
                tagMap[fullPath] = attrValue;
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (tagMap.count(query)) {
            cout << tagMap[query] << endl;
        } 
        
        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
