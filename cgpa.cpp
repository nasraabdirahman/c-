#include <iostream> 
#include <cstdlib>
#include <ctime>

/* 
   computer science = 5
   Math = 4 
   Psychics = 3 
   History = 2 
   whatever = 1
 */

const int cred_CS = 5;
const int cred_math = 4;
const int cred_psychics = 3;
const int cred_his = 2;
const int whatever = 1;

const int total_credit = cred_CS + cred_math + cred_psychics + cred_his + whatever;

double calculate_gpa(double grade_gpa)
{

    return grade_gpa / total_credit;
}


int main()
{
    srand(time(NULL));

    for(int student = 0; student < 10; student++)
    {
        int cs = rand() % 5;
        int math = rand() % 5;
        int psychics = rand() % 5;
        int history = rand() % 5;
        int useless = rand() % 5;


        double grade_gpa = (cs * cred_CS) + (math * cred_math) + (psychics * cred_psychics) + (history * cred_his) + (whatever * useless);

        double total_gpa = calculate_gpa(grade_gpa);

        std::cout << "Student " << student + 1 << " GPA: " << total_gpa << "\n";
    }
}


