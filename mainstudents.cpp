#include "student.h"

int main()
{
    int choice;

    do
    {
        cout << "\t\t===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "\t\t1.Add Student\n";
        cout << "\t\t2.Display Students\n";
        cout << "\t\t3.Search Student\n";
        cout << "\t\t4.Update Student\n";
        cout << "\t\t5.Delete Student\n";
        cout << "\t\t6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice. Try Again.\n";
        }
    } 
while (choice != 6);

    return 0;
}
