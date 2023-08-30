# Student-Registration-cpp
 The "Student Registration System" is a console-based application written in C++. Its purpose is to manage student information by allowing users to perform various actions related to student registration and management. Here's an explanation of the main components and functionalities of the project:

#Student Structure (struct Student):

This structure holds the information for each registered student.
It includes three attributes: name (student's name), age (student's age), and course (course the student is enrolled in).
#StudentRegistrationSystem Class:

This class is the core of the application and encapsulates all the operations related to student management.
It has private data members, including a vector of Student objects (students) to store registered student information.
#Functionality:

#Register Student (registerStudent):

Users can input a student's name, age, and course.
The information is then added to the students vector, creating a new Student object.

#View Registered Students (viewStudents):

Displays a list of all registered students along with their details (name, age, and course).

#Search for Students (searchStudent):

Allows users to search for students by entering either a student's name or course.
If a match is found, the student's details are displayed.

#Delete Student (deleteStudent):

Users can input a student's name to delete.
The system searches for the student by name and removes them from the students vector if found.

#Main Function (main):

The program's entry point where the user interacts with the application.
Displays a menu of options for the user to choose from: Register Student, View Students, Search Student, Delete Student, and Exit.
Based on the user's choice, it calls the relevant methods from the StudentRegistrationSystem class.
#Looping Structure:

The application runs in an infinite loop, allowing users to perform multiple actions without restarting the program.

#Header Inclusions:

The necessary header files (<iostream>, <vector>, <string>, and <algorithm>) are included to enable the use of relevant functionalities.
Overall, this project provides a basic example of how a console application can be used to manage student registration and information. You can expand on this project by adding features like data persistence (storing student data in files), error handling, sorting options, and more. It's a great way to practice C++ programming and understand the fundamentals of data structures and user interaction.
<img width="191" alt="image" src="https://github.com/yusufbaig666/Student-Registration-cpp/assets/93441934/dc1591db-86a3-4673-9c87-c5a2d0f4147b">
