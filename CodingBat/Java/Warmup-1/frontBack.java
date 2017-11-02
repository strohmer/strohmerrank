public String frontBack(String str) {
  int length = str.length();
  if (length <= 1) {
    return str;
  }
  String str2 = str.substring(length-1) + str.substring(1,length-1)
    + str.substring(0,1);
  return str2;
}
