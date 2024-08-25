#include "Finder.h"

using namespace std;

// try change this around before you upload it. learn different ways of doing
// the same optimisation to learn
vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;
  size_t size1 = s1.length();
  size_t size2 = s2.length();

  size_t index =
      0;  // This index lets us search from the beginning of the 's1' string

  for (size_t i = 1; i <= s2.size(); i++) {
    bool found = false;
    while (index < size1) {
      if (s1[index] == s2[i]) {
        result.push_back(index);
        index = found +
                1;  // This increments the index value so we are searching for
                    // the next value at the next index, e.g. first iteration is
                    // index = 0, next interation is index = 1, etc.
        found = true;
        break;
      }
      index++;
    }
    if (found == false) {
      result.push_back(-1);
    }
  }
  return result;
}
