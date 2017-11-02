/*Given an array of ints, we'll say that a triple is a value appearing 3 times
in a row in the array. Return true if the array does not contain any triples.*/

public boolean noTriples(int[] nums) {
  int length = nums.length;
  if (length < 3) {
    return true;
  }
  int c = 1, num = nums[0];
  for (int i = 1; i < length; i++) {
    if (nums[i] == num) {
      c++;
      if (c == 3) {
        return false;
      }
    } else {
      c = 1;
    }
    num = nums[i];
  }
  return true;
}
