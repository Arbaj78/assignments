#include<iostream>

using namespace std;

// Define class

class Student {
    
    public:
    string Name;
    int RollNumber;
    string Course;
    int Age;

};

int main() {

    //create an object of stdudent

    Student std1;
       std1.Name = "ARBAJ KHAN";
       std1.RollNumber  = 13;
       std1.Course = "Computer Science and Engineering ";
       std1.Age =22; 

    Student std2;
       std2.Name = "Chandu";
       std2.RollNumber = 17;
       std2.Course = "Computer Science and engineering";
       std2.Age = 21;

    Student std3;
       std3.Name = "Divyansh";
       std3.RollNumber = 23;
       std3.Course = "Computer Science and engineering";
       std3.Age = 20;

    // Print the details of all student

    cout << "Student 1 details: \n Name:" << std1.Name << "\n RollNumber:" <<  std1.RollNumber << "\n Course:" << std1.Course << "\n Age:" <<  std1.Age << endl ;

    cout << "Student 2 details: \n Name:" << std2.Name << "\n RollNumber:" <<  std2.RollNumber << "\n Course:" <<  std2.Course << "\n Age:" <<  std2.Age << endl ;
    
    cout << "Student 3 details: \n Name:" <<  std3.Name << "\n RollNUmber:"<<   std3.RollNumber << "\n Course:"<<  std3.Course << "\n Age:" <<  std3.Age << endl ;
 

    return 0;
}