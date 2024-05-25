#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    setlocale(LC_ALL, "ru");
    
    char operator;
    double firstNumber, secondNumber, result;

    // Ввод операнда и двух чисел
    printf("Введите операцию (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Введите два числа: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Выполнение операции в зависимости от введенного операнда
    /**
    \brief Шаблонная функция выполнения простейших математических операций

    \param [in] a Операция, которую надо совершить

    \return Ответ, равный операции *a* с *firstNumber* и *secondNumber*.
    */
    switch (operator) {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            if (secondNumber != 0) {
                result = firstNumber / secondNumber;
            } else {
                printf("Ошибка! Деление на ноль.\n");
                return 1; // Выход из программы с ошибкой
            }
            break;
        default:
            printf("Ошибка! Неправильная операция.\n");
            return 1; // Выход из программы с ошибкой
    }

    // Вывод результата
    printf("Результат: %.2lf\n", result);

    return 0;
}
