# SGPA Calculator

This is a C++ program that calculates the SGPA (Semester Grade Point Average) for a single semester based on the grades obtained in each course. It also provides an option to calculate the CGPA (Cumulative Grade Point Average) based on the SGPA obtained in that semester.

## SGPA Calculation Method

The SGPA is calculated using the following formula:
SGPA = Sum(creditEarned[i] * gradePoints[grades[i]]) / TotalCredits
where:
- `creditEarned[i]`: The credit Earned for the ith course.
- `gradePoints[grades[i]]`: The grade point corresponding to the grade obtained in the ith course.
- `TotalCredits`: The total credit earned for all courses in the semester.

The CGPA can be calculated over multiple semesters by considering the SGPA obtained in each semester and using the following formula:
CGPA = Sum(SGPA[i] * SemesterCredits[i]) / TotalCredits
where:
- `SGPA[i]`: The SGPA obtained in the ith semester.
- `SemesterCredits[i]`: The total credit hours in the ith semester.
- `TotalCredits`: The overall total credit hours across all semesters.

## Grading Scale

The following grading scale is used in the calculation:
- O: 10
- A+: 9
- A: 8
- B+: 7
- B: 6
- C: 5
- P: 4
- F: Fail (0)

## Input Details

The program takes the following input from the user for each course:
- Course name: The name of the course.
- Credit earned: The credit earned in the respective course.
- Grade: The grade obtained in the course (must be one of the grades in the grading scale).

## Usage

1. Clone the repository to your local machine.
2. Compile the C++ code using a C++ compiler (e.g., g++).
3. Run the executable file and follow the on-screen instructions to input course details.
4. The program will display the calculated SGPA for the semester.

## Example

Enter the number of Courses in a Semester: 4
Enter Course Details:
Course 1:
Name: Mathematics
Credit Earned: 4
Grade: A
Course 2:
Name: Physics
Credit Earned: 3
Grade: B+
Course 3:
Name: English
Credit Earned: 3
Grade: A+
Course 4:
Name: Computer Science
Credit Earned: 5
Grade: B

SGPA for this Semester: 7.625
