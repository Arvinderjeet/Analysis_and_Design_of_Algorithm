//
// Created by Arvinderjeet singh on 9/29/2024.
//

#include "iostream"
#include <chrono>
//#include <bits/stdc++.h>

using namespace std;

int STUDENTS_ROLL_NO[] = {
        1012, 1054, 1096, 1123, 1156, 1198, 1224, 1267, 1302, 1335, 1378, 1401, 1450, 1486, 1509, 1553, 1597, 1624,
        1658, 1699,
        1723, 1755, 1792, 1836, 1864, 1901, 1937, 1970, 2012, 2058, 2094, 2131, 2167, 2205, 2239, 2265, 2309, 2345,
        2392, 2423,
        2459, 2504, 2536, 2567, 2609, 2635, 2679, 2703, 2754, 2789, 2824, 2851, 2897, 2935, 2969, 3012, 3057, 3084,
        3128, 3164,
        3203, 3245, 3278, 3314, 3359, 3397, 3430, 3476, 3509, 3542, 3586, 3629, 3658, 3694, 3730, 3768, 3815, 3852,
        3896, 3927,
        3963, 4005, 4049, 4086, 4121, 4168, 4203, 4246, 4280, 4324, 4361, 4398, 4435, 4473, 4507, 4542, 4585, 4623,
        4659, 4698,
        4730, 4768, 4806, 4840, 4887, 4926, 4964, 4998, 5031, 5075, 5104, 5150, 5183, 5228, 5264, 5305, 5349, 5387,
        5421, 5463,
        5502, 5547, 5583, 5610, 5659, 5698, 5734, 5769, 5803, 5850, 5887, 5924, 5961, 5998, 6035, 6072, 6119, 6153,
        6198, 6230,
        6267, 6304, 6352, 6389, 6431, 6465, 6509, 6542, 6586, 6623, 6667, 6703, 6749, 6795, 6829, 6874, 6913, 6959,
        6994, 7031,
        7075, 7110, 7152, 7187, 7234, 7265, 7309, 7353, 7398, 7431, 7476, 7513, 7558, 7596, 7630, 7674, 7715, 7759,
        7796, 7834

};
string STUDENTS_NAMES[] = {"Alex Johnson", "Samantha Lee", "Michael Davis", "Emily Turner", "Daniel Smith",
                           "Olivia Harris", "Matthew Brown", "Sophia Wilson", "James Clark", "Grace Robinson",
                           "David Martinez", "Isabella Lopez", "Benjamin White", "Mia Gonzalez",
                           "Christopher Scott",
                           "Abigail Hall", "Jacob Phillips", "Amelia Campbell", "Andrew Walker", "Charlotte Baker",
                           "Joshua Young", "Avery Adams", "Nicholas Allen", "Harper res", "Tyler Brooks",
                           "Madison Sanders", "Ryan Ramirez", "Evelyn Evans", "Ethan Collins", "Victoria Howard",
                           "Zachary Kelly", "Lily Patterson", "Nathan Reed", "Chloe Torres", "Adam Gray",
                           "Ella Peterson", "Jack Cooper", "Scarlett Parker", "Samuel Morgan", "Zoe Morris",
                           "Logan Hill", "Hannah Wood", "Connor Rivera", "Lucy Ross", "Dylan Powell",
                           "Layla Jenkins", "Evan Barnes", "Riley Foster", "Isaac Murray", "Aria Hayes",
                           "Andrew Robinson", "Thomas Robinson", "Olivia Taylor", "John Harris", "James Anderson",
                           "William Garcia", "David Robinson", "Matthew Moore", "Emily Jackson", "Emily Garcia",
                           "Matthew Jackson", "Robert Taylor", "Emma Harris", "Jessica White", "Robert Thompson",
                           "Emma Smith", "David Harris", "Sarah Johnson", "Laura Thompson", "Olivia Brown",
                           "John White", "William White", "Anna Thompson", "John Davis", "Thomas Davis",
                           "Laura Johnson",
                           "Olivia Anderson", "Chloe Smith", "David Williams", "Michael Harris", "Andrew Taylor",
                           "James Robinson",
                           "Andrew Johnson", "Jessica White", "Thomas Brown", "Robert Thompson", "David Williams",
                           "John Smith",
                           "David Jackson", "Anna Williams", "Olivia White", "Andrew Robinson", "Thomas Wilson",
                           "Robert Davis",
                           "James Wilson", "Robert Williams", "Daniel Moore", "Sophie White", "Jessica Brown",
                           "Andrew Jackson",
                           "Olivia Anderson", "Anna Johnson", "Daniel Robinson", "Robert Wilson", "Anna Wilson",
                           "James Brown",
                           "Matthew Thompson", "John Johnson", "James Robinson", "Michael Wilson", "Jessica Smith",
                           "Chloe White",
                           "Andrew Thompson", "Michael Garcia", "Andrew Davis", "Sarah Taylor", "Chloe Garcia",
                           "John Wilson",
                           "Michael Thompson", "John Wilson", "David Johnson", "John Taylor", "Anna Garcia",
                           "Thomas Garcia",
                           "Daniel Johnson", "Anna Garcia", "Michael Johnson", "James Davis", "Michael Robinson",
                           "Andrew Davis",
                           "Olivia Moore", "Thomas Robinson", "Matthew Jackson", "Matthew Davis", "James Thompson",
                           "Andrew White",
                           "David Anderson", "Jessica Johnson", "Chloe White", "Daniel Anderson", "Jessica Wilson",
                           "Robert Wilson",
                           "Sarah Anderson", "Laura Moore", "James Garcia", "Michael Anderson", "John Anderson",
                           "Anna Anderson",
                           "Sophie Davis", "James Williams", "Emily Thompson", "Sarah Anderson", "Matthew Thompson",
                           "David Moore",
                           "Robert Anderson", "Sophie Thompson", "Sophie Johnson", "Sarah Williams", "William Smith",
                           "Robert Johnson",
                           "Anna Robinson", "Sophie Moore", "Andrew Garcia", "William Taylor", "William Anderson",
                           "Matthew Robinson",
                           "Chloe Williams", "Anna Johnson", "Thomas Johnson", "Sophie Johnson", "David Smith",
                           "Daniel Robinson",
                           "Emily Anderson", "Emily Robinson", "Robert Smith", "Laura Smith", "Jessica Garcia",
                           "Chloe Anderson",
                           "John Moore", "Emily Williams", "Laura Anderson", "Sarah Thompson", "Sarah Davis",
                           "Chloe Anderson",
                           "Sophie Taylor", "Sarah Moore", "James Smith", "Daniel Johnson", "Jessica Johnson",
                           "Michael Moore",
                           "William Garcia", "Anna Johnson", "Anna Garcia", "Thomas Taylor", "Chloe Robinson",
                           "John Williams",
                           "Emily Williams", "William Johnson", "Anna Anderson", "William Taylor", "Laura Garcia"

};
int STUDENTS_MARKS[] = {
        82, 74, 91, 68, 57, 93, 86, 69, 88, 72, 75,
        99, 61, 85, 92, 77, 55, 66, 73, 81, 94,
        79, 58, 83, 62, 89, 65, 90, 76, 87, 59,
        80, 67, 63, 70, 95, 78, 84, 71, 96, 54,
        88, 73, 89, 85, 64, 92, 83, 95, 79, 61,
        99, 86, 60, 75, 74, 68, 84, 63, 91, 81,
        66, 78, 90, 56, 87, 77, 80, 57, 72, 65,
        67, 71, 93, 62, 96, 55, 69, 82, 58, 54,
        88, 79, 91, 60, 86, 74, 66, 92, 89, 63,
        95, 84, 61, 83, 73, 57, 93, 90, 70, 68,
        87, 76, 99, 78, 88, 81, 64, 96, 80, 59,
        91, 65, 85, 77, 66, 55, 89, 75, 62, 83,
        72, 93, 70, 57, 99, 67, 76, 78, 90, 68,
        61, 91, 84, 74, 95, 60, 86, 64, 79, 54,
        88, 80, 89, 63, 83, 69, 92, 87, 65, 96,
        73, 77, 55, 82, 71, 72, 85, 90, 57, 93,
        59, 67, 81, 63, 92, 74, 76, 89, 68, 95,
        84, 60, 91, 86, 88, 65, 99, 83, 66, 97,
        62, 89, 71, 64, 92, 85, 79, 66, 90, 73,
        88, 61, 94, 83, 67, 76, 87, 55, 82, 87


};
string STUDENTS_DEPARTMENTS[] = {
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Civil Engineering", "Information Technology",
        "Electronics and Communication", "Chemical Engineering",
        "Computer Science", "Mechanical Engineering", "Civil Engineering",
        "Electrical Engineering", "Electronics and Communication", "Information Technology",
        "Chemical Engineering", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Civil Engineering", "Information Technology",
        "Electronics and Communication", "Chemical Engineering",
        "Computer Science", "Mechanical Engineering", "Civil Engineering",
        "Electrical Engineering", "Electronics and Communication", "Information Technology",
        "Chemical Engineering", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Electronics and Communication",
        "Information Technology", "Chemical Engineering", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Information Technology",
        "Civil Engineering", "Computer Science", "Mechanical Engineering",
        "Electrical Engineering", "Electronics and Communication", "Chemical Engineering",
        "Information Technology", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Electronics and Communication",
        "Information Technology", "Chemical Engineering", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Information Technology",
        "Civil Engineering", "Computer Science", "Mechanical Engineering",
        "Electrical Engineering", "Electronics and Communication", "Electrical Engineering",
        "Electronics and Communication",
        "Information Technology", "Chemical Engineering", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Information Technology",
        "Civil Engineering", "Computer Science", "Mechanical Engineering",
        "Electrical Engineering", "Electronics and Communication", "Chemical Engineering",
        "Information Technology", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Chemical Engineering",
        "Information Technology", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Chemical Engineering", "Mechanical Engineering",
        "Electrical Engineering", "Electrical Engineering", "Electronics and Communication",
        "Information Technology", "Chemical Engineering", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Information Technology",
        "Civil Engineering", "Computer Science", "Mechanical Engineering",
        "Electrical Engineering", "Electronics and Communication", "Chemical Engineering",
        "Information Technology", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Mechanical Engineering",
        "Electrical Engineering", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Civil Engineering", "Computer Science",
        "Mechanical Engineering", "Electrical Engineering", "Electronics and Communication",
        "Information Technology", "Chemical Engineering", "Civil Engineering",
        "Computer Science", "Mechanical Engineering", "Electrical Engineering",
        "Electronics and Communication", "Chemical Engineering", "Information Technology",
        "Civil Engineering", "Computer Science", "Mechanical Engineering",
        "Electrical Engineering", "Electronics and Communication", "Electrical Engineering", "Information Technology",
        "Chemical Engineering", "Electronics and Communication", "Chemical Engineering", "Mechanical Engineering",
        "Electrical Engineering", "Electrical Engineering"
};

uint64_t timeSinceEpochMillisec() {
    using namespace std::chrono;
    return duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
}

class Student {

public:
    string name;
    int roll_no;
    int total_marks;
    string department;

    Student() {
        this->name = "abc";
        this->roll_no = 000;
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
        roll_no = 000;
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
        cout << endl << "=================================================" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
        cout << "Total marks: " << total_marks << endl;
        cout << "Department: " << department << endl;
    }

};

int binary_search_roll(Student arr[], int size_of_array, int target) {
    int st, mid, end;
    int counter = 0;
    st = 0;
    end = size_of_array - 1;
    while (st <= end) {
        counter++;
        mid = (st + end) / 2;
        if (arr[mid].roll_no == target) {
            cout << counter;
            return mid;
        } else if (target > arr[mid].roll_no) {
            st = mid + 1;
        } else if (target < arr[mid].roll_no) {
            end = mid - 1;
        }
    }
    cout << counter;
    return -1;
}

int linear_search_roll(Student arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i].roll_no == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int choice;
    Student users[10000];
    int last_user = 0;

    int size = sizeof(STUDENTS_NAMES) / sizeof(STUDENTS_NAMES[0]);

    for (int i = 0; size > i; ++i) {
        users[i].name = STUDENTS_NAMES[i];
        users[i].roll_no = STUDENTS_ROLL_NO[i];
        users[i].total_marks = STUDENTS_MARKS[i];
        users[i].department = STUDENTS_DEPARTMENTS[i];
        last_user++;
    }

    do {
        cout << "Main Menu: " << endl;
        cout << "\t1. Add user" << endl;
        cout << "\t2. Display users" << endl;
        cout << "\t3. Update user" << endl;
        cout << "\t4. Search user by algos" << endl;
        cout << "\t5. Delete user" << endl;
        cout << "\t6. load users from file" << endl;
        cout << "\t0. Exit" << endl;
        cout << "Enter your choice: ";
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
            cout << "=================================================" << endl;
        }

        if (choice == 3) {
            int id;
            cout << "enter roll no. of user to update : ";
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
            int id_to_find;
            cout << endl << "Enter roll no. of user to search : ";
            cin >> id_to_find;

            auto start_time = timeSinceEpochMillisec();
//            ios_base::sync_with_stdio(false);
            int user_index_binary = binary_search_roll(users, last_user, id_to_find);
            if (user_index_binary != -1) {
                cout << "\t  [" << users[user_index_binary].roll_no << "] "
                     << "Name: " << users[user_index_binary].name << endl
                     << "\t Total Marks: " << users[user_index_binary].total_marks << endl
                     << "\t Dept. " << users[user_index_binary].department << endl;
            }
            auto stop_time = timeSinceEpochMillisec();
            cout << "time taken by binary search [in milliseconds] :" << stop_time - start_time << endl;
            cout << "=================================================================" << endl;

            start_time = timeSinceEpochMillisec();
//            ios_base::sync_with_stdio(false);
            int user_index_linear;
            user_index_linear = linear_search_roll(users, last_user, id_to_find);
            if (user_index_linear != -1) {
                cout << "\t [" << users[user_index_linear].roll_no << "] "
                     << "Name: " << users[user_index_linear].name << endl
                     << "\t Total Marks: " << users[user_index_linear].total_marks << endl
                     << "\t Dept. " << users[user_index_linear].department << endl;
            }
            stop_time = timeSinceEpochMillisec();
            cout << "time taken by linear search [in milliseconds] :" << stop_time - start_time << endl;


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
            cout << "pending to code" << endl;
            cout << "directly added arrays of data" << endl;
        }

    } while (choice != 0);

    while (last_user--) {
        users[last_user].remove();
    }

    return 0;
    //end of the program
}