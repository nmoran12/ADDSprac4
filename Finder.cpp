#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

  size_t index =
      0;  // This index lets us search from the beginning of the 's1' string

  for (size_t i = 1; i <= s2.size(); ++i) {
    size_t found =
        s1.find(s2.substr(0, i),
                index);  // This lets us search for a certain sub string 's2'
                         // within the larger string 's1' from the start index.
                         // In this instance, the starting index is 0
    if (found != string::npos && found == index) {
      result.push_back(found);
      index =
          found + 1;  // This increments the index value so we are searching for
                      // the next value at the next index, e.g. first iteration
                      // is index = 0, next interation is index = 1, etc.
    } else {
      result.push_back(-1);
      break;  // This breaks out of the algorithm if we don't find the first
              // value in the substring, as if the first value isnt there then
              // the substring is already not able to be found.
    }
  }
  return result;
}
