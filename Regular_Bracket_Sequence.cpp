// Codeforces-solutions
//=====================================================
// Author        : 7O0ODA
// Date          : 5 Jul 2025
// Problem Code  : --
// Problem Name  : Regular Bracket Sequence
// Learned       : stack
//=====================================================
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'   
using namespace std;
bool ch(string s) {
    stack<char>st;
    for (char ch : s) {
        if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            if (st.empty())
                return false;
            st.pop();
        }
    }
    return st.empty();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t; 
    while (t--) {
        string st; cin >> st;
        if (ch(st))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
