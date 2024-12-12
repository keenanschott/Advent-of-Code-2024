#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ifstream file("in.txt");
  if (!file) {
    cerr << "Error opening file!" << endl;
    return 1;
  }
  string line;
  vector<int> leftList;
  vector<int> rightList;
  while (getline(file, line)) {
    leftList.push_back(stoi(line.substr(0, 5)));
    rightList.push_back(stoi(line.substr(8, 5)));
  }
  sort(leftList.begin(), leftList.end());
  sort(rightList.begin(), rightList.end());
  int sum = 0;
  for (int i = 0; i < leftList.size(); i++) {
    sum += abs(rightList[i] - leftList[i]);
  }
  cout << sum << endl;
  return 0;
}