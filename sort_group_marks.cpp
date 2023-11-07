#include "students.h"

void sort_group_marks(students_info *st, int st_num)
{
    students_info temp;

    for(int i=0; i<st_num;i++)
    {
        for(int j=0;j<st_num-1;j++)
        {
            if(st[j].average_grade<st[j+1].average_grade)
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }
        }
    }
    std::cout<<"\n\n The highest mark amoung the whole students group is: "<<(float)st[0].average_grade<<"\n";
    fflush(stdin);
    
}