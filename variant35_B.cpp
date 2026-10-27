/***************************************
 * Автор: Шамин Александр              *
 * Задание: Строки, векторы и словари  *
 * Вариант: 35, часть B                *
 **************************************/

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int firstSize;
  cin >> firstSize;

  if (firstSize < 0 || firstSize > 100) {
    cout << "INVALID";
    return 0;
  }

  vector<int> firstVector(firstSize);

  for (int numberIndex = 0; numberIndex < firstSize; ++numberIndex) {
    cin >> firstVector[numberIndex];

    if (firstVector[numberIndex] < -1000 || firstVector[numberIndex] > 1000) {
      cout << "INVALID";
      return 0;
    }
  }

  int secondSize;
  cin >> secondSize;

  if (secondSize < 0 || secondSize > 100) {
    cout << "INVALID";
    return 0;
  }

  vector<int> secondVector(secondSize);

  for (int numberIndex = 0; numberIndex < secondSize; ++numberIndex) {
    cin >> secondVector[numberIndex];

    if (secondVector[numberIndex] < -1000 || secondVector[numberIndex] > 1000) {
      cout << "INVALID";
      return 0;
    }
  }

  vector<int> resultVector;

  for (int numberIndex = 0; numberIndex < firstSize; ++numberIndex) {
    bool isAlreadyAdded = false;

    for (int resultIndex = 0; resultIndex < static_cast<int>(resultVector.size()); ++resultIndex) {
      if (resultVector[resultIndex] == firstVector[numberIndex]) {
        isAlreadyAdded = true;
        break;
      }
    }

    if (!isAlreadyAdded) {
      resultVector.push_back(firstVector[numberIndex]);
    }
  }

  for (int numberIndex = 0; numberIndex < secondSize; ++numberIndex) {
    bool isAlreadyAdded = false;

    for (int resultIndex = 0; resultIndex < static_cast<int>(resultVector.size()); ++resultIndex) {
      if (resultVector[resultIndex] == secondVector[numberIndex]) {
        isAlreadyAdded = true;
        break;
      }
    }

    if (!isAlreadyAdded) {
      resultVector.push_back(secondVector[numberIndex]);
    }
  }

  if (resultVector.empty()) {
    cout << "EMPTY";
  } else {
    for (int resultIndex = 0; resultIndex < static_cast<int>(resultVector.size()); ++resultIndex) {
      if (resultIndex > 0) {
        cout << " ";
      }
      cout << resultVector[resultIndex];
    }
  }

  return 0;
}
