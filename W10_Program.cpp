#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int studentSize = 20;

struct studentType{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};
void readData(studentType student[]){
    cout<<"Enter student data: "<<endl;
    for(int i=0;i<studentSize;i++){
        cout<<"\nFirst Name: ";
        cin>>student[i].studentFName;
        cout<<"Last Name: ";
        cin>>student[i].studentLName;
        cout<<"Score: ";
        cin>>student[i].testScore;
        while(student[i].testScore<0 or student[i].testScore>100){
            cout<<"Invalid, try again: ";
            cin>>student[i].testScore;
        }
    }
}
void assignGrade(studentType student[]){
    for(int i=0;i<studentSize;i++){
        if(student[i].testScore>=90){
            student[i].grade = 'A';
        }
        else if(student[i].testScore>=80){
            student[i].grade = 'B';
        }
        else if(student[i].testScore>=70){
            student[i].grade = 'C';
        }
        else if(student[i].testScore>=60){
            student[i].grade = 'D';
        }
        else{
            student[i].grade = 'F';
        }
    }
}
int highestScore(studentType student[]){
    int highest = student[0].testScore;
    for(int i=0;i<studentSize;i++){
        if (student[i].testScore>highest){
            highest = student[i].testScore;
        }
    }
    return highest;
}
void printAll(studentType student[]){
    cout << "\nStudent Results:\n";
    cout << left << setw(25) << "Last,First" 
         << right << setw(10) << "Score"
         << setw(8) << "Grade" << endl;
    for(int i=0;i<studentSize;i++){
        cout << left << setw(25) << student[i].studentLName
             + ", " + student[i].studentFName << right
             << setw(10) << student[i].testScore << setw(8) 
             << student[i].grade << endl;
    }
    cout << endl;
}
void printTopStudent(studentType student[], int highestScore)
{
    cout << "Highest Score: " << highestScore << endl;
    cout << "Students with highest score:\n";

    for (int i = 0; i < studentSize; i++)
    {
        if (student[i].testScore == highestScore)
        {
            cout << student[i].studentLName << ", "
                 << student[i].studentFName << endl;
        }
    }
}
int main() {
    studentType student[studentSize];
    readData(student);
    assignGrade(student);
    int highScore = highestScore(student);
    printAll(student);
    printTopStudent(student, highScore);

    return 0;
}