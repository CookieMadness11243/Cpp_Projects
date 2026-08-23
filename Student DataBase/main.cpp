#include <iostream>
#include <string>
#include <map>
#include <iomanip>

class StudentInfo{
	public:
		std::string Name;
		std::string Class;
		int Grade;

		std::string ID; // Depends on Student Class and Name

};

void input(char key, bool &loop);

int main(){
	char key;
	
	bool loop = true;
	while (loop){
		std::cout<<"input: e{exit} a{add} v{view} d{edit}: "; std::cin>>key;
		input(key, loop);

		loop = false;
	}

	return 0;
}




void input(char key, bool &loop){
	char Lkey = tolower(key);

	if (Lkey == 'e'){
		loop = false;
	}else if(Lkey == 'a'){
		StudentInfo Student;
		std::cout<<std::endl<<"Enter The mentioned Info: "<<std::endl;
		std::cout<<"Name"<<std::setw(20); std::cout<<"Class"<<std::setw(20); std::cout<<"Grade"<<std::setw(20)<<std::endl;

		std::cin>>Student.Name; std::cout<<"\x1b[A";
		std::cin>>Student.Class; std::cout<<"";
		std::cin>>Student.Grade;

	}
}
