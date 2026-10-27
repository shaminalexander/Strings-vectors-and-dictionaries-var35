/*************************************
 * Автор: Шамин Александр             *
 * Задание: Строки, векторы и словари *
 * Вариант: 35, часть D               *
 *************************************/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int recordCount;
  cin >> recordCount;

  if (recordCount < 0 || recordCount > 100) {
    cout << "INVALID";
    return 0;
  }

  map<string, pair<int, int> > prices;

  for (int recordIndex = 0; recordIndex < recordCount; ++recordIndex) {
    string itemName;
    int itemPrice;

    cin >> itemName >> itemPrice;

    if (itemPrice < 0 || itemPrice > 1000) {
      cout << "INVALID";
      return 0;
    }

    if (prices.find(itemName) == prices.end()) {
      prices[itemName] = make_pair(itemPrice, itemPrice);
    } else {
      if (itemPrice < prices[itemName].first) {
        prices[itemName].first = itemPrice;
      }

      if (itemPrice > prices[itemName].second) {
        prices[itemName].second = itemPrice;
      }
    }
  }

  if (prices.empty()) {
    cout << "EMPTY";
  } else {
    for (map<string, pair<int, int> >::const_iterator item = prices.begin();
         item != prices.end(); ++item) {
      cout << item->first << " " << item->second.first << " "
           << item->second.second << endl;
    }
  }

  return 0;
}
