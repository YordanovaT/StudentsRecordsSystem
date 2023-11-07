#ifndef STUDENTS
#define STUDENTS
    #include <iostream>
    #include <string>
    #include <cstring>
    #include <cstdbool>
    #include <stdio.h>
    #include <stdlib.h>
    #include <iomanip>


    struct student_name
    {
        char first_name [10];
        char last_name[20];
    };

    struct discipline
    {
        char subject [30];
        float sb_mark;
    };

    struct students_info
    {
        struct student_name name;
        struct discipline marks [10];
        int faculty_number;
        float average_grade=0;
        int count_marks;

        
    };

    void enter_data(students_info *st);
    void print_data(students_info *st);
    void input_one_mark(students_info *st);
    void marks_for_discipline(students_info *st, char discipline[30]);

#endif