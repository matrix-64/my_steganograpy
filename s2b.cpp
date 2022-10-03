#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <bitset<7>> S;
    char c;
    while(scanf("%c",&c)!=EOF){
        bitset<7> bs(c);
        S.push_back(bs);
    }
    for(int i=0;i<S.size();i++){
        cout << S[i];
    }
    return EXIT_SUCCESS;
}
