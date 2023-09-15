#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

double calculateSGPA(const vector<string>& courseNames, const vector<int>& creditEarned, const vector<string>& grades)
{
    map<string, int> gradePoints = {{"O", 10}, {"A+", 9}, {"A", 8}, {"B+", 7}, {"B", 6}, {"C", 5}, {"P", 4}, {"F", 0}};

    double totalCredits = 0.0;
    double totalGrades = 0.0;

    for(int i = 0; i < courseNames.size(); i++)
    {
        if(grades[i] == "Q")
        {
            continue;
        }
        
        if(gradePoints.find(grades[i]) == gradePoints.end())
        {
            cout << "Invalid Grade: " << grades[i] << " for course " << courseNames[i] << "." << endl;
            return -1;
        }

        totalCredits += creditEarned[i];
        totalGrades += creditEarned[i] * gradePoints[grades[i]];
    }

    if(totalCredits == 0.0)
    {
        cout << "Total Credits cannot be zero." << endl;
        return -1;
    }

    return totalGrades / totalCredits;
}

int main()
{
    int numCourses, Total_Credits;
    
    cout << "Enter the number of Courses in a Semester: ";
    cin >> numCourses;
    cout << endl;

    vector<string> coursenames(numCourses);
    vector<int> creditEarned(numCourses);
    vector<string> grades(numCourses);

    cout << "Enter Course Details: \n" << endl;

    for(int i = 0; i < numCourses; i++)
    {
        cout << "Course " << i + 1 << ": " << endl;
        
        cout << "Name: ";
        cin.ignore();           //ignore the newline character after pressing enter
        getline(cin, coursenames[i]);
        
        cout << "Credit Earned: ";
        cin >> creditEarned[i];
        Total_Credits += creditEarned[i];
        
        cout << "Grade: ";
        cin >> grades[i];

        cout << endl;
    }

    double SGPA = calculateSGPA(coursenames, creditEarned, grades);
    cout << "SGPA for this Semester: " << SGPA << endl << "Total Credits: " << Total_Credits << endl;

    return 0;
}
