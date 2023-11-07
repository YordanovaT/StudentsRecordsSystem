#include "students.h"



void print_data(students_info *st)
{
    int sum=0;
    std::cout<<"----------------------- Printing student data -----------------------\n";

    std::cout<<"Faculty number: "<<st->faculty_number<<"\n";

    std::cout<<"First name: "<<st->name.first_name<<"\n";

    std::cout<<"Last name: "<<st->name.last_name<<"\n";
    
    std::cout<<"All marks the student has:"<<st->count_marks<<std::endl;
    fflush(stdin);

    for(int i=0;i<st->count_marks;i++)
    {
        std::cout<<"\n "<<st->marks[i].subject<<": "<<st->marks[i].sb_mark;
        sum+=st->marks[i].sb_mark;
    }

    float avg=(float)sum/st->count_marks;
    st->average_grade=avg;
        
    std::cout<<"\n Average grade: "<< (float)st->average_grade<<"\n";


}