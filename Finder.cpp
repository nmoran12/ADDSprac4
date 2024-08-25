#include "Finder.h"

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  string stringHold = "";

  for (size_t i = 1; i <= s2.size(); i++) {
    stringHold += s2[i - 1];
    size_t found = s1.find(stringHold);
    if (found != string::npos) {
      result.push_back(found);
    } else {
      result.push_back(-1);
    }
  }
  return result;
}