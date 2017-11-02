/*Given a string and a non-negative int n, return a larger string that is n
copies of the original string.*/

public String stringTimes(String str, int n) {
  if (n == 0) {return "";}
  StringBuilder string = new StringBuilder(str);
  while (n > 1) {
    string.append(str);
    n--;
  }
  return string.toString();
}
