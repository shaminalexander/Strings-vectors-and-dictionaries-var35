/**************************************
 * Автор: Шамин Александр             *
 * Задание: Строки, векторы и словари *
 * Вариант: 35, часть A               *
 **************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;
  getline(cin, text);

  int digitSum = 0;

  for (int charIndex = 0; charIndex < text.length(); ++charIndex) {
    if (text[charIndex] >= '0' && text[charIndex] <= '9') {
      digitSum = digitSum + (text[charIndex] - '0');
    }
  }

  cout << digitSum;

  return 0;
}
