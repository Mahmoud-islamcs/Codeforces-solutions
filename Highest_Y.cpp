// Codeforces-solutions
//=====================================================
// Author        : 7O0ODA
// Date          : 5 Jul 2025
// Problem Code  : --
// Problem Name  : Highest Y
// Learned       : pair 
//=====================================================
#define _CRT_SECURE_NO_WARNINGS
#define endl '\n'   
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 1;
    cin >> n;
    vector<pair<int, int>> poi(n);
    for (int i = 0; i < n; ++i) {
        cin >> poi[i].first >> poi[i].second;
    }
    sort(poi.begin(), poi.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
        });
    for (auto p : poi)
        cout << p.first << " " << p.second << endl;
    return 0;
}
