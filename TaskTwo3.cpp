#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string lastName;
    int age;
    bool isStudent;

    std::cout << "Введіть ваше ім'я: ";
    std::cin >> firstName;

    std::cout << "Введіть ваше прізвище: ";
    std::cin >> lastName;

    std::cout << "Введіть ваш вік: ";
    std::cin >> age;

    std::cout << "Чи є ви студентом? (1 - так, 0 - ні): ";
    std::cin >> isStudent;

    std::cout << "\nВведена інформація:\n";
    std::cout << "Ім'я: " << firstName << "\n";
    std::cout << "Прізвище: " << lastName << "\n";
    std::cout << "Вік: " << age << "\n";
    std::cout << "Статус студента: " << (isStudent ? "Так" : "Ні") << "\n";

    return 0;
}