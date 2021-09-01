#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

  map<int, char> m;
  int num = 52031;
  for (int i = 65; i <= 90; i++){
    m[num] = char(i);
    num++;
  }

  int num2 = 52063;
  for (int i = 97; i <= 122; i++){
    m[num2] = char(i);
    num2++;
  }

  vector<int> v = {37, 77, 77, 66, 46, 63, 81, 81, 85, 77, 80, 66};

  for (int i = 0; i < v.size(); i++){
    v[i] = v[i] + 52000;
  }

  string ans = ":: ";
  for (int i = 0; i < v.size(); i++){
    auto it = m.find(v[i]);
    if (it != m.end()){
      ans += it->second;
    }
  }

  cout << "Ans"
       << "" << ans << endl;
  return 0;
}