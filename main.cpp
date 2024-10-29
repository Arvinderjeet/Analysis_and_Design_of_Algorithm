//
// Created by Arvinderjeet singh on 9/29/2024.
//

#include "iostream"
#include <utility>
#include <vector>
#include "fstream"
#include "string"

using namespace std;

class Student {

public:
    string name;
    int roll_no{};
    int total_marks{};
    string department;

    Student() = default;

    Student(string name, int roll_no, int total_marks, string department)
            : name(std::move(name)), roll_no(roll_no), department(std::move(department)), total_marks(total_marks) {}

    void saveToFile(std::ofstream &outFile) const {
        outFile << roll_no << "," << name << "," << total_marks << "," << department << std::endl;
    }

    void add_data() {
        cout << "Enter name: " << endl;
        cin.ignore();
        getline(cin, name);
        cout << "Enter roll no [****]: " << endl;
        cin >> roll_no;
        cout << "Enter total marks [out of 100]: " << endl;
        cin >> total_marks;
        cout << "Enter department: " << endl;
        cin.ignore();
        getline(cin, department);
    }

    void display_data() const {
        cout << "__________________Student Details:__________________" << std::endl;
        cout << "Name: " << name << std::endl;
        cout << "Roll No: " << roll_no << std::endl;
        cout << "Total Marks: " << total_marks << std::endl;
        cout << "Department: " << department << std::endl;
        cout << "____________________________________________________" << std::endl;
        cout << std::endl;
    }

    static vector<Student> loadFromFile(const string &filename) {
        vector<Student> students;
        ifstream inFile(filename);
        if (!inFile) {
            std::cerr << "Error opening file!" << std::endl;
            return students;
        }

        int rollNo;
        string name;
        int total_marks;
        string department;

        while (inFile >> rollNo) {
            inFile.ignore();
            getline(inFile, name, ',');
            inFile >> total_marks;
            inFile.ignore();
            getline(inFile, department);
            students.emplace_back(name, rollNo, total_marks, department);
        }

        inFile.close();
        return students;
    }

};

int binary_search_roll(Student arr[], int size_of_array, int &target) {
    int st, mid, end;
    st = 0;
    end = size_of_array - 1;
    while (st <= end) {
        mid = (st + end) / 2;
        if (arr[mid].roll_no == target) {
            return mid;
        } else if (target > arr[mid].roll_no) {
            st = mid + 1;
        } else if (target < arr[mid].roll_no) {
            end = mid - 1;
        }
    }
    return -1;
}

int linear_search_roll(Student arr[], int n, string &target) {
    for (int i = 0; i < n; i++) {
        if (arr[i].name == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int choice;
    vector<Student> users;
    users = Student::loadFromFile("students_data.txt");
    cout << "users loaded from file" << endl;

    do {
        cout << "Main Menu: " << endl;
        cout << "\t1. Add user" << endl;
        cout << "\t2. Display users" << endl;
        cout << "\t3. Update user" << endl;
        cout << "\t___Search user by algos___" << endl;
        cout << "\t   4. Using Binary search" << endl;
        cout << "\t   5. Using Linear search" << endl;
        cout << "\t6. Delete user" << endl;
        cout << "\t0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            Student user;
            user.add_data();
            users.push_back(user);
            ofstream outFile("students_data.txt", ios::app);
            user.saveToFile(outFile);
            outFile.close();
        }

        if (choice == 2) {
            for (auto &user: users) {
                user.display_data();
            }
        }

        if (choice == 3) {
            int id;
            cout << "enter roll no. of Student to update: ";
            cin >> id;
            for (int i = 0; i < users.size(); i++) {
                if (users[i].roll_no == id) {
                    id = i;
                    break;
                }
            }
            if (id > 0 || id < users.size()) {
                users[id].display_data();
                users[id].add_data();
                ofstream outFile("students_data.txt", ios::app);
                users[id].saveToFile(outFile);
                outFile.close();
            } else {
                cout << "user not found" << endl;
            }
        }

        if (choice == 4) {
            int id;
            cout << "enter roll no. of Student to search: ";
            cin >> id;
            int index = binary_search_roll(users.data(), int(users.size()), id);
            if (index != -1) {
                cout << "Student with roll no. " << id << " found at index: " << index << endl;
            } else {
                cout << "user not found" << endl;
                break;
            }
            users[index].display_data();
        }

        if (choice == 5) {
            string username;
            cout << "enter name of user to search: ";
            cin.ignore();
            getline(cin, username);
            int index = linear_search_roll(users.data(), int(users.size()), username);
            if (index != -1) {
                cout << "Student with name [" << username << "] found at index: [" << index <<"]"<< endl;
            } else {
                cout << "user not found" << endl;
                break;
            }
            users[index].display_data();
        }

        if (choice == 6) {
            int id;
            cout << "enter roll no. of Student to delete";
            cin >> id;
            for (int i = 0; i < users.size(); i++) {
                if (users[i].roll_no == id) {
                    users.erase(users.begin() + i);
                    cout << "user deleted successfully" << endl;
                    break;
                }
                if (i == users.size() - 1) {
                    cout << "user not found" << endl;
                }
            }
        }

    } while (choice != 0);

    return 0;
}