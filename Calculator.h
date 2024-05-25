#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/**
 * @brief Основная функция калькулятора.
 *
 * Программа запрашивает у пользователя ввод операции (+, -, *, /) и двух чисел,
 * выполняет соответствующую операцию и выводит результат. В случае деления на ноль
 * или ввода неправильной операции выводится ошибка.
 *
 * @return Возвращает ответ при успешном завершении или 1 при ошибке.
 */
int main() {
    char a;  ///< Операция, которую нужно выполнить (+, -, *, /).
    double firstNumber, secondNumber, result; ///< Два числа, с которыми будет выполнена операция и результат.

    // Ввод операнда и двух чисел
    printf("Введите операцию (+, -, *, /): ");
    scanf("%c", &a);
    printf("Введите два числа: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch (a) {
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
        }
        else {
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