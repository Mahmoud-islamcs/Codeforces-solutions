// Codeforces-solutions
//=====================================================
// Author        : 7O0ODA
// Date          : 5 Jul 2025
// Problem Code  : --
// Problem Name  : Queue ID
// Learned       : Queue 
//=====================================================
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'   
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1, n, id;
    cin >> t;
    queue<int>q;
    while (t--) {
        cin >> id >> n;
        if (id == 1)
            q.push(n);
        else if (id == 2 && q.empty()) {
            cout << "no" << endl;
        }
        else if (id == 2 && !q.empty()) {
            int x = q.front();
            q.pop();
            if (x == n)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}
