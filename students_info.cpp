// Program to store information about student or all students.
// It also allows to redact student data such as:
// name, avg grade, faculty number

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
    


int main()
{
    students_info students_group[5];
    int choice=0;
    int st_count;
    int f_num;
    int flag;

    do
    {
        std::cout<<"Enter students count between 1 and 5: \n";
        std::cin>>st_count;
    } while (st_count<1 ||st_count>5);

    //enter data for each student in the group
    for(int i=0;i<st_count;i++)
    {
        enter_data(&students_group[i]);
    }
    //sort the avg_marks for the students in the group and output the highest one
    
    for(int i=0; i<st_count;i++)
    {
        print_data(&students_group[i]);
    }
    sort_group_marks(students_group,st_count);

    //creating the menu options for the program
    while (1)
    {
        std::cout<<"\n\n----------------------- MENU -----------------------\n\n";
        std::cout<<"Do you wish to perforn an operation? Choose between 0 - 3.\n";
        std::cout<<"1. Input new mark.\n";
        std::cout<<"2. Print all marks for a perticular discipline.\n";
        std::cout<<"3. Print data for one student.\n";
        std::cout<<"0. Exit the program.\n";
        std::cin>>choice;
        std::cin.ignore();

        if(choice==0)
        {
            break;
        }
        
        switch (choice)
        {
            case 1:
               
                flag=0;
                std::cout<<"Enter faculty number: \n";
                std::cin>>f_num;
                std::cin.ignore();
                
                for(int i=0; i<st_count;i++)
                {
                    if(f_num==students_group[i].faculty_number)
                    {
                        input_one_mark(&students_group[i]);
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    std::cout<<"No person found with the given faculty number. Try again.\n";

                }
                break;
            case 2:
                
                char discipline[30];
                std::cout<<"Enter discpiline\n";
                std::cin>>discipline;
                std::cin.ignore();
                fflush(stdin);
                for(int i=0; i<st_count; i++)
                {
                    marks_for_discipline(&students_group[i], discipline);
                }

                break;
            case 3:
                f_num;
                flag=0;
                std::cout<<"Enter faculty number: \n";
                std::cin>>f_num;
                fflush(stdin);
                for(int i=0; i<st_count;i++)
                {
                    if(f_num==students_group[i].faculty_number)
                    {
                        print_data(&students_group[i]);
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    std::cout<<"No person found with the given faculty number. Try again.\n";

                }
                break;
    }       
    }
    return 0;

}
