/* Module to outpust all marks for given subject */

#include "students.h"

void marks_for_discipline(students_info *st, char discipline[30])
{
    int i;
     std::cout<<"---------------------------------------------------------------------------------\n";
    std::cout<< "Faculty number: "<< st->faculty_number <<"\t"<< "Name: " << st->name.first_name <<" "<< st->name.last_name << "\n";
    for(i=0;i<st->count_marks;i++)
    {
        if(strcmp(st->marks[i].subject, discipline)==0){
            std::cout<<"\n Subject: "<<st->marks[i].subject<<": "<<std::setprecision(4)<<st->marks[i].sb_mark<<"\n";
            std::cout<<"---------------------------------------------------------------------------------\n";
            fflush(stdin);
        }
    }
}