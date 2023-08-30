#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Include the algorithm header

struct Student {
    std::string name;
    int age;
    std::string course;
};

class StudentRegistrationSystem {
private:
    std::vector<Student> students;

public:
    void registerStudent(const std::string& name, int age, const std::string& course) {
        students.push_back({name, age, course});
    }

    void viewStudents() {
        if (students.empty()) {
            std::cout << "No students registered." << std::endl;
            return;
        }

        std::cout << "Registered Students:" << std::endl;
        for (const auto& student : students) {
            std::cout << "Name: " << student.name << ", Age: " << student.age << ", Course: " << student.course << std::endl;
        }
    }

    void searchStudent(const std::string& query) {
        bool found = false;
        for (const auto& student : students) {
            if (student.name == query || student.course == query) {
                std::cout << "Student found - Name: " << student.name << ", Age: " << student.age << ", Course: " << student.course << std::endl;
                found = true;
            }
        }

        if (!found) {
            std::cout << "No student found with the given name or course." << std::endl;
        }
    }

    void deleteStudent(const std::string& name) {
        students.erase(std::remove_if(students.begin(), students.end(),
            [&](const Student& student) {
                return student.name == name;
            }),
            students.end());
    }
};

int main() {
    StudentRegistrationSystem registrationSystem;

    while (true) {
        std::cout << "Student Registration System" << std::endl;
        std::cout << "1. Register Student\n2. View Students\n3. Search Student\n4. Delete Student\n5. Exit" << std::endl;
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name, course;
                int age;
                std::cout << "Enter student name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter student age: ";
                std::cin >> age;
                std::cin.ignore();
                std::cout << "Enter student course: ";
                std::getline(std::cin, course);
                registrationSystem.registerStudent(name, age, course);
                break;
            }
            case 2:
                registrationSystem.viewStudents();
                break;
            case 3: {
                std::string query;
                std::cout << "Enter student name or course to search: ";
                std::cin.ignore();
                std::getline(std::cin, query);
                registrationSystem.searchStudent(query);
                break;
            }
            case 4: {
                std::string name;
                std::cout << "Enter student name to delete: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                registrationSystem.deleteStudent(name);
                break;
            }
            case 5:
                return 0;
            default:
                std::cout << "Invalid choice. Please select again." << std::endl;
        }
    }

    return 0;
}
