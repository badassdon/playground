#include <iostream>
#include <string>
using namespace std; string replace(string s, const string& from, const string& to) { size_t start = 0; while((start = s.find(from, start)) != string::npos) { s.replace(start, from.length(), to); start += to.length(); } return s; } int main() { string qq(1, (char) 34); string esc(1, (char) 92); string escqq = esc + qq; string cr(1, (char) 10); string a = "string b = \"#include <iostream>\" + cr + \"#include <string>\" + cr + \"using namespace std; string replace(string s, const string& from, const string& to) { size_t start = 0; while((start = s.find(from, start)) != string::npos) { s.replace(start, from.length(), to); start += to.length(); } return s; } int main() { string qq(1, (char) 34); string esc(1, (char) 92); string escqq = esc + qq; string cr(1, (char) 10); string a = \" + qq + replace(a, qq, escqq) + qq + \"; \" + a + \"; cout << b; }\" + cr"; string b = "#include <iostream>" + cr + "#include <string>" + cr + "using namespace std; string replace(string s, const string& from, const string& to) { size_t start = 0; while((start = s.find(from, start)) != string::npos) { s.replace(start, from.length(), to); start += to.length(); } return s; } int main() { string qq(1, (char) 34); string esc(1, (char) 92); string escqq = esc + qq; string cr(1, (char) 10); string a = " + qq + replace(a, qq, escqq) + qq + "; " + a + "; cout << b; }" + cr; cout << b; }