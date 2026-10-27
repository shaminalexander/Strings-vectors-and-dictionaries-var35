/**************************************
 * Автор: Шамин Александр             *
 * Задание: Строки, векторы и словари *
 * Вариант: 35, часть C               *
 *************************************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
 
  int pairCount;
  cin >> pairCount;

  if (pairCount < 0 || pairCount > 100) {
    cout << "INVALID";
    return 0;
  }

  map<string, int> values;

  for (int pairIndex = 0; pairIndex < pairCount; ++pairIndex) {
    string key;
    int value;
    cin >> key >> value;

    values[key] = value;
  }

  string keyToDelete;
  cin >> keyToDelete;

  values.erase(keyToDelete);

  if (values.empty()) {
    cout << "EMPTY";
  } else {
    for (map<string, int>::const_iterator item = values.begin();
         item != values.end(); ++item) {
      cout << item->first << " " << item->second << endl;
    }
  }

  return 0;
}
