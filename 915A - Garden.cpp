// Codeforces-solutions
//=====================================================
// Author        : 7O0ODA
// Date          : 9 Jul 2025
// Problem Code  : 915A - Garden
// Problem Name  : Garden
// Learned       : ----------------- 
//=====================================================
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <cmath>
#include <map>
#include <set>
#include <deque>
#include <forward_list>
#include <string>
#include <cstring>
#include <utility>
#include <vector>
#include <array>
#include <climits>  
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'  
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    int res = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (k % a[i] == 0) {
            int h = k / a[i];
            res = min(res, h);
        }
    }
    cout << res << endl;
    return 0;
}
