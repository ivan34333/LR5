#include <iostream> 

#include "windows.h" 

  

using namespace std; 

  

int main() 

{ 

SetConsoleCP(1251); 

SetConsoleOutputCP(1251); 

  

int x; 

cout << "Введіть цифру : "; 

cin >> x; 

  

switch (x) 

{ 

case 0: cout << "Відсутні"; break; 

case 1: cout << "Відсутні"; break; 

case 2: cout << "А Б В Г"; break; 

case 3: cout << "Д Е Ж З"; break; 

case 4: cout << "И Й К Л"; break; 

case 5: cout << "М Н О П"; break; 

case 6: cout << "Р С Т У"; break; 

case 7: cout << "Ф Х Ц Ч"; break; 

case 8: cout << "Ц Ш Ъ Ы"; break; 

case 9: cout << "Ь Э Ю Я"; break; 

default: cout << "Неправильна цифра"; break; 

} 

} 