#include <bits/stdc++.h>

using namespace std;

int kth_largest(vector<int> values, int k) {
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < values.size(); i++) {
    pq.push(values.at(i));
    if (pq.size() > k) {
      pq.pop();
    }
  }
  return pq.top();
}
