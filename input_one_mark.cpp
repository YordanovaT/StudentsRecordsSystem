/* Module to input new mark for a student */

#include "students.h"

 void input_one_mark(students_info *st)
 {
    int i,temp;
    
    i=st->count_marks+1;

    std::cout<<"Subject: \n";
    std::cin>>st->marks[i-1].subject;
    std::cin.ignore();
    fflush(stdin);
    do
    {

        std::cout<<"Enter mark between 2 and 6 for the subject: ";
        std::cin>>temp;
        std::cin.ignore();
        std::cout<<"\n";
        fflush(stdin);
        
    }while (temp<2 || temp>6);
    

    st->marks[i-1].sb_mark=temp;
    st->count_marks=i;
    

 }