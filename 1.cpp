// Calculates percentage of marks of student in subjects( 5 )
#include <iostream>
#define SUBJECTS 5

int main() {
	//std::cout << "Enter Marks";
	float marks{}, sub{};
		
	for ( int i{1}; i <= SUBJECTS; i++ ) {
		std::cout << "Enter Marks of Subject " << i << ':' << ' ';
		std::cin >> sub;
		marks += sub;
	}
	
	int totalMarks{};
	std::cout << "Enter Total Marks: ";
	std::cin >> totalMarks;
	
	float marksInPer{ ( marks / totalMarks ) * 100 };
	
	std::cout << "Percentage: " << marksInPer;
	return 0;
}
