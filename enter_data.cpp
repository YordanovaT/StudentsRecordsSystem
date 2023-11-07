/* Module to input student's data */

#include "students.h"

void enter_data(students_info *st)
{
    float help;

    std::cout<<"----------------------- Entering student data -----------------------\n";
    std::cout<<"Enter faculty number: ";
    std::cin>>st->faculty_number;
    std::cin.ignore();
    std::cout<<"\n";

    std::cout<<"Enter first name: ";
    std::cin>>st->name.first_name;
    std::cin.ignore();
    std::cout<<"\n";
    fflush(stdin);

    std::cout<<"Enter last name: ";
    std::cin>>st->name.last_name;
    std::cin.ignore();
    std::cout<<"\n";
    fflush(stdin);

    std::cout<<"How many marks you wish to input?: ";
    std::cin>>st->count_marks;
    std::cin.ignore();
    std::cout<<"\n\n";

    for(int i=0; i<st->count_marks;i++)
    {
        std::cout<<"Enter "<<i+1<<" subject\n";
        std::cin>>st->marks[i].subject;
        std::cin.ignore();
        fflush(stdin);
        do //check if the mark that is being inputed is correct
        {
            std::cout<<"Enter mark between 2 and 6 for the subject: ";
            std::cin>>help;
            std::cin.ignore();
            std::cout<<"\n";
            fflush(stdin);
        } while (help<2 || help>6);

        st->marks[i].sb_mark = help;
        
    }    
    std::cout<<"\n";
    fflush(stdin);

}