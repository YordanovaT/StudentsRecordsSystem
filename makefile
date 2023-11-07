students.out: students_info.o print_data.o enter_data.o  input_one_mark.o marks_for_discipline.o
	g++ students_info.o print_data.o enter_data.o  input_one_mark.o marks_for_discipline.o -o students.out

students_info.o: students_info.cpp
	g++ -c students_info.cpp

print_data.o: print_data.cpp
	g++ -c print_data.cpp

enter_data.o: enter_data.cpp
	g++ -c enter_data.cpp

input_one_mark.o: input_one_mark.cpp
	g++ -c input_one_mark.cpp

marks_for_discipline.o: marks_for_discipline.cpp
	g++ -c marks_for_discipline.cpp

clean:
	rm *.o students.out