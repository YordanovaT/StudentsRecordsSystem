/* Module to edit student's mark on perticular subject */

#include "students.h"

void edit_mark(students_info *st)
{
    char discipline[30];
    int help_mark=0;
    std::cout<<"\n Enter Subject: \n";
    std::cin>>discipline;
    std::cin.ignore();
    fflush(stdin);

    for(int i=0;i<st->count_marks;i++)
    {
        if(strcmp(st->marks[i].subject, discipline)==0){
            std::cout<<"Current mark: "<<st->marks[i].sb_mark<<"\n";
            std::cout<<"---------------------------------------------------------------------------------\n";
            std::cout<<"\n Enter new mark: \n";
            std::cin>>help_mark;
            st->marks[i].sb_mark=help_mark;
            std::cin.ignore();
            fflush(stdin);
            
        }
    }
    std::cout<<"---------------------------------------------------------------------------------\n";
}
