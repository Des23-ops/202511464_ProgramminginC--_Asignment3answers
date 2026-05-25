// including the header file, exact way we named it
#include "student.h"

Student students[10];
int totalStudents = 0;

void addStudent()
{
    cout << "Input Student's ID: ";
    cin >> students[totalStudents].id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, students[totalStudents].name);

    cout << "Enter Age: ";
    cin >> students[totalStudents].age;

    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, students[totalStudents].course);

    totalStudents++;

    cout << "Student Added Successfully!\n";
}

void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "no students available."<<endl;
        return;
    }

    cout << "\n===== STUDENT LIST =====\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
    }
}

void searchStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Search: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == id)
        {
            cout << "\nStudent Found!\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student Not Found.\n";
    }
}

void updateStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Update: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == id)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, students[i].name);

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cin.ignore();

            cout << "Enter New Course: ";
            getline(cin, students[i].course);

            cout << "Student Updated Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student Not Found.\n";
    }
}
void deleteStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to Delete: ";
    cin >> id;

    for (int i = 0; i < totalStudents; i++)
    {
        if (students[i].id == id)
        {
            for (int j = i; j < totalStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }
            totalStudents--;

            cout << "Student Deleted Successfully!\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << " The student is not Found.\n";
    }
}
