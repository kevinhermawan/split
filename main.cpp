#include <iostream>
#include <vector>

using namespace std;

vector<string> split(const string& s, const string& d);
string join(const vector<string>& v, const string& s);

int main() {
  string str = "10 20 30 40 50 60 70 80 90 100";
  vector<string> splitted_str = split(str, " ");

  cout << "Splitted: ";
  for (auto & i : splitted_str) { cout << i << " "; }

  cout << endl;

  cout << "Joined: ";
  cout << join(splitted_str, "-");

  return 0;
}

vector<string> split(const string& s, const string& d) {
  string temp;
  vector<string> result;

  for (char i : s) {
    string i_str;
    i_str = i;

    if(i_str == d) {
      result.push_back(temp);
      temp.clear();
    } else {
      temp.append(i_str);
    }
  }

  result.push_back(temp);

  return result;
}

string join(const vector<string>& v, const string& s) {
  string result;

  for (int i = 0; i < v.size(); ++i) {
    if(i == v.size() - 1) {
      result.append(v[i]);
    } else {
      result.append(v[i]);
      result.append(s);
    }
  }

  return result;
}
