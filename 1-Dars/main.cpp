#include <iostream>
#include <cstdlib> // rand() va srand() funksiyalari uchun
#include <ctime>   // time() funksiyasi uchun

using namespace std;

int main() {
    // Tasodifiy sonlar generatorini boshlash uchun urug' (seed) qiymatini o'rnatish
    srand(static_cast<unsigned int>(time(0)));

    // Tasodifiy son hosil qilish
    int randomNumber = rand();

    // Natijani chiqarish
    cout << "Tasodifiy son: " << randomNumber << endl;

    return 0;
}
