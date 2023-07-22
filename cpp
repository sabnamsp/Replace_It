#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--) 
    {
        string S, X;
        cin >> S >> X;
        while (S.find(X) != std::string::npos) //npos static member constant value with the greatest possible value
        {
            S.replace(S.find(X), X.length(), "$");
        }
        cout << S << endl;
    }
    return 0;
}
