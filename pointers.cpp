// compile: g++ -std=c++11 -o pointers pointers.cpp
#include <iostream>
#include <string>

typedef struct Student {
    int id;
    char *f_name;
    char *l_name;
    int n_assignments;
    double *grades;
} Student;

int promptInt(std::string message, int min, int max);
double promptDouble(std::string message, double min, double max);
void calculateStudentAverage(void *object, double *avg);

int main(int argc, char **argv)
{
    Student student;
    double average;
    double score = 0;
    student.f_name = new char[128];
    student.l_name = new char[128];
    student.grades = &score;

    std::cout << "Please enter the student's id number: ";
    student.id = promptInt("Please enter the student's id number: ",0,9);
    std::cin.ignore();

    std::cout << "Please enter the student's first name: ";
    std::cin.getline(student.f_name,128);
    std::cout << "Please enter the student's last name: ";
    std::cin.getline(student.l_name,128);

    std::cout << "Please enter how many assignments were graded: ";
    std::cin >> student.n_assignments;
    //student.n_assignments = promptDouble("Please enter how many assignments were graded: ",1,1000);
    std::cin.ignore();

    int i;
    int *assignment_array = new int[student.n_assignments];
    for(i = 0; i < student.n_assignments; i++)
    {
       std::cout << "Please enter grade for assignment" << (i+1) << ": ";
       std::cin >> assignment_array[i];
       std::cin.ignore();
    }
    std::cin.ignore();

    //calculateStudentAverage(assignment_array, student.grades);
    std::cout << "Student: " << student.f_name << " " << student.l_name << " [" << student.id << "]\n";
    std::cout << "Average grade: " << average << std::endl;
      // Sequence of user input -> store in fields of `student`

      // Call `CalculateStudentAverage(???, ???)`
      // Output `average`
    return 0;
}

/*
   message: text to output as the prompt
   min: minimum value to accept as a valid int
   max: maximum value to accept as a valid int
*/
int promptInt(std::string message, int min, int max)
{
   Student student;
   std::cin >> student.id; 
   return student.id;
}

/*
   message: text to output as the prompt
   min: minimum value to accept as a valid double
   max: maximum value to accept as a valid double
*/
double promptDouble(std::string message, double min, double max)
{
   Student student;
   int i;
   char *character_array = new char[128];
   Student *assignment_array = new Student[student.n_assignments];
   //character_array = (char*)assignment_array;
   for(i = 0; i < student.n_assignments; i++)
   {
      std::cout << "Please enter grade for assignment " << (i+1) << ": ";
      //std::cin.getline(character_array[i],128);
      std::cin.ignore();
   }
   return 0;
}

/*
   object: pointer to anything - your choice! (but choose something that will be helpful)
   avg: pointer to a double (can store a value here)
*/
void calculateStudentAverage(void *object, double *avg)
{
	int i;
        Student student;
        int *int_array = new int[student.n_assignments];
        int sum = 0;
        object = int_array;
        int int_ptr = *(int*)object;

	for(i = 0; i < student.n_assignments; i++)
	{
		sum += 0;// int_ptr[i];
	}
    // Code to calculate and store average grade
}
