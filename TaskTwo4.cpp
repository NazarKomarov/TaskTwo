#include <iostream>
#include <string>
#include <vector>

// Структура для зберігання інформації про користувача
struct User {
    std::string firstName;
    std::string lastName;
    int age;
    bool isStudent;
};

int main() {
    int numberOfUsers;
    std::cout << "Скільки користувачів ви хочете ввести? ";
    std::cin >> numberOfUsers;
    std::cin.ignore();

    // Вектор для зберігання користувачів
    std::vector<User> users;

    // Збір даних про кожного користувача
    for (int i = 0; i < numberOfUsers; ++i) {
        User user;
        std::cout << "\nКористувач " << i + 1 << ":\n";
        std::cout << "Введіть ім'я: ";
        std::cin >> user.firstName;
        std::cout << "Введіть прізвище: ";
        std::cin >> user.lastName;
        std::cout << "Введіть вік: ";
        std::cin >> user.age;
        std::cout << "Чи є ви студентом? (1 - так, 0 - ні): ";
        std::cin >> user.isStudent;

        // Додаємо користувача до списку
        users.push_back(user);
    }

    // Вивід даних про всіх користувачів
    std::cout << "\nІнформація про користувачів:\n";
    for (int i = 0; i < users.size(); ++i) {
        std::cout << "\nКористувач " << i + 1 << ":\n";
        std::cout << "Ім'я: " << users[i].firstName << "\n";
        std::cout << "Прізвище: " << users[i].lastName << "\n";
        std::cout << "Вік: " << users[i].age << "\n";
        std::cout << "Статус студента: " << (users[i].isStudent ? "Так" : "Ні") << "\n";
    }

    return 0;
}
