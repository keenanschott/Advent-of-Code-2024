#include <fstream>
#include <iostream>
#include <map>
using namespace std;

struct SimScore {
  int countL;
  int countR;
};

int main() {
  ifstream file("in.txt");
  if (!file) {
    cerr << "Error opening file!" << endl;
    return 1;
  }
  string line;
  int left, right;
  map<int, SimScore> simMap;
  while (getline(file, line)) {
    left = stoi(line.substr(0, 5));
    right = stoi(line.substr(8, 5));
    if (simMap.find(left) == simMap.end()) {
      simMap[left] = {1, 0};
    } else {
      simMap[left].countL += 1;
    }
    if (simMap.find(right) == simMap.end()) {
      simMap[right] = {0, 1};
    } else {
      simMap[right].countR += 1;
    }
  }
  int sum = 0;
  for (const auto &pair : simMap) {
    sum += pair.first * pair.second.countL * pair.second.countR;
  }
  cout << sum << endl;
  return 0;
}