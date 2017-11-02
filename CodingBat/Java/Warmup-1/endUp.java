/*Given a string, return a new string where the last 3 chars are now in upper
case. If the string has less than 3 chars, uppercase whatever is there. Note
that str.toUpperCase() returns the uppercase version of a string.*/

public String endUp(String str) {
  if (str.length() <= 3) {
    return str.toUpperCase();
  }
  int length = str.length();
  StringBuilder builder = new StringBuilder();
  builder.append(str.substring(0,length - 3));
  builder.append(str.substring(length - 3).toUpperCase());
  return builder.toString();
}
