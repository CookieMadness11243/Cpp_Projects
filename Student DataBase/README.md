// Status: Still working on it, and I'll keep updating it till it has it's own GUI 👍

first i included the libraries needed like the
iostream, vector, map (In case of Dictionaries), and string

then i applied the class:
class StudentInfo{
	public:
		// here i added the following info required to add:
		std::string Name;
		std::string Class;
		int Grade;

		std::string ID; // the ID is automatically applied depending on the Class And Seat

}

then the main code:
char key; // here the use inputs a key

while (loop){
	// the DB loop

	input(key, loop);

}

// the functions (here Problems start to happen)

void input(char key, bool &loop){
	char Lkey = tolower(key); // In case uppercase letters

	if (Lkey == 'e'){
		loop = false; // To leave
	}else if(Lkey == 'a'){
		// here all the problems start to happen
	}

}
