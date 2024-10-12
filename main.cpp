//
// Created by Arvinderjeet singh on 9/29/2024.
//
#include "iostream"

using namespace std;

class Student {

public:
    string name;
    int roll_no;
    int total_marks;
    string department;

    Student() {
        this->name = "abc";
        this->roll_no = 0000000000;
        this->total_marks = 0;
        this->department = "xyz";
    }

//    Student(string name, string roll_no, int total_marks, string department) {
//        this->name = name;
//        this->roll_no = roll_no;
//        this->total_marks = total_marks;
//        this->department = department;
//        name.clear();
//        roll_no.clear();
//        department.clear();
//    }
    void remove() {
        name.clear();
        roll_no = 0000000000;
        total_marks = 0;
        department.clear();
    }

    void add_data() {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter roll no: " << endl;
        cin >> roll_no;
        cout << "Enter total marks: " << endl;
        cin >> total_marks;
        cout << "Enter department: " << endl;
        cin >> department;
    }

    void display_data() const {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "Total marks: " << total_marks << endl;
        cout << "Department: " << department << endl;
        cout << "=================================================";
    }

};

int main() {
    int choice;
    Student users[100];
    int last_user = 0;

    do {
        cout << "Main Menu: " << endl;
        cout << "\t1. Add user" << endl;
        cout << "\t2. Display users" << endl;
        cout << "\t3. Update user" << endl;
        cout << "\t4. Search user" << endl;
        cout << "\t5. Delete user" << endl;
        cout << "\t6. load users from file" << endl;
        cout << "\t0. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice == 1) {
            users[last_user].add_data();
            cout << "User added successfully!" << endl;
            cout << "=================================================";
            users[last_user].display_data();
            cout << "=================================================";
            cout << endl;
            last_user++;
        }

        if (choice == 2) {
            for (int i = 0; i < last_user; i++) {
                users[i].display_data();
            }
        }

        if (choice == 3) {
            int id;
            cout << "enter roll no. of user to update";
            cin >> id;
            for (int i = 0; i < last_user; i++) {
                if (users[i].roll_no == id) {
                    id = i;
                    break;
                }
            }
            if (id < last_user || id > 0) {
                users[id].display_data();
                cout << "Select what you want to update: " << endl;
                cout << "\t1. Name" << endl;
                cout << "\t2. Roll no" << endl;
                cout << "\t3. Total marks" << endl;
                cout << "\t4. Department" << endl;
                cout << "\t0. Exit" << endl;
                cout << "Enter your choice: " << endl;
                int update_choice;
                cin >> update_choice;

                switch (update_choice) {

                    case 1:
                        cout << "Enter new name: " << endl;
                        cin >> users[id].name;
                        break;

                    case 2:
                        cout << "Enter new roll no: " << endl;
                        cin >> users[id].roll_no;
                        break;

                    case 3:
                        cout << "Enter new total marks: " << endl;
                        cin >> users[id].total_marks;
                        break;

                    case 4:
                        cout << "Enter new department: " << endl;
                        cin >> users[id].department;
                        break;

                    case 0:
                        break;

                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }
            } else {
                cout << "user not found";
            }
        }

        if (choice == 4) {
            int id;

        }
        if (choice == 5) {
            int id;
            cout << "enter roll no. of user to delete";
            cin >> id;
            for (int i = 0; i < last_user; i++) {
                if (users[i].roll_no == id) {
                    id = i;
                    break;
                }
            }
            if (id > 0 || id < last_user) {
                users[id].display_data();
                users[id].remove();
                cout << "user deleted successfully";
                for (int i = id; i < last_user; i++) {
                    users[i] = users[i + 1];
                }
                last_user--;
            } else {
                cout << "user not found" << endl;
            }
        }

        if (choice == 6) {

        }

    } while (choice != 0);

    while (last_user--) {
        users[last_user].remove();
    }

    return 0;
}