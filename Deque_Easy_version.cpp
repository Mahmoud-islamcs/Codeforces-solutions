// Codeforces-solutions
//=====================================================
// Author        : 7O0ODA
// Date          : 5 Jul 2025
// Problem Code  : --
// Problem Name  : Deque Easy version
// Learned       : Deque
//=====================================================
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'   
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1, n, id;
    cin >> t;
    deque<int>dq;
    while (t--) {
        string query;
        cin >> query;
        if (query == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (query == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (query == "pop_front") {
            dq.pop_front();
        }
        else if (query == "pop_back") {
            dq.pop_back();
        }
        else if (query == "front") {
            cout << dq.front() << endl;
        }
        else if (query == "back") {
            cout << dq.back() << endl;
        }
        else if (query == "print") {
            int x;
            cin >> x;
            cout << dq[x - 1] << endl;
        }
    }
    return 0;
}
