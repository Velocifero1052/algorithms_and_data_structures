#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
  size_t fast, slow = 0;
  for (fast = 0; fast < nums.size(); fast++) {
    if (nums[fast] != nums[slow]) {
      slow++;
      swap(nums[fast], nums[slow]);
    }
  }
  return slow + 1;
}

bool isSubsequence(string s, string t) {
  for (size_t i = 0; i < s.length(); i++) {
    cout << s[i] << endl;
  }
  return false;
}

int main() {

  isSubsequence("abc", "abc");

  return 0;
}
