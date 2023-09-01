#include <iostream>
#define MODE 0
#ifdef MODE
    #if MODE == 1
        int add(int a, int b) {
            return a + b;
        }
    #endif
#else
#error MODE not define
#endif

int main() {
#if(MODE == 1)
        int a, b;
        std::cout << "Работаю в боевом режиме\nВведите число 1:";
        std::cin >> a;
        std::cout << "Введите число 2:";
        std::cin >> b;
        std::cout << "Результат сложения: " << add(a, b) << std::endl;

#elif(MODE == 0)
        std::cout << "«Работаю в режиме тренировки»" << std::endl;
#else
        std::cout << "«Неизвестный режим. Завершение работы»" << std::endl;
#endif
    return 0;
}
