so basically, i held a project that took way too long for me to keep up with, and now I've dont nothing in the past 3 weeks,
so this project just brought me back to it, and I'ma release small projects to learn basic things then return
to big projects

Here i just included the libraries required + comments
```
// CGPA Calculator, basically a calculator to count GPA with the user inputs:
// Course Name, Credits, Grade.
// Output Total Points Earned

// Example:
// Math, 4, A, 4x4=16
// Physics, 3, B, 3x3=9
// English, 3, A, 3x4=12

// Total, 10, , , 37
// CGPA = 37 / 10 = 3.7


#include <iostream>
#include <cstdlib>
#include <iomanip>
```
cstdlib for the cls command and iomanip for the std::setpercision

here i created a function to clear terminal easily, and
tbh i always include it in my other projects
```
void clearTerminal(std::string type){if(type == "home"){std::cout<<"\033[2J\033[H";}
    else if(type == "cls"){system("cls");}}
```

here i just made another function for the grade conversion
```
float letterConversion(char Grade){
    Grade=(char)toupper(Grade);
    switch(Grade)
    {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0;
        default: return 0;
    }

}
```

and here is the main function which pretty much is readable
like i said, the project is simple and it just asks for some info
and returns a number, no explination is needed i guess
```
int main(){
    while(true){
        clearTerminal("cls");

        std::string Course;
        float Credit; char Grade;

        int itr; std::cout<<"How many classes do you have: "; std::cin>>itr;
        float Final, Credits;
        for(int i = 0; i != itr; i++){
            std::cout<<"Course Name: "; std::cin>>Course;
            std::cout<<"Credit: "; std::cin>>Credit;
            std::cout<<"Grade: "; std::cin>>Grade; 
            auto num = letterConversion(Grade);
            Final += num * Credit;
            Credits += Credit;
            std::cout<<"<------------------------>"<<std::endl;
        }
        std::cout<<"CGPA = "<<std::fixed<<std::setprecision(1)<<Final/Credits;
        break;
        
    }

    return 0;
```
}

// CGPS = (Grade Points x Credit) / Credit
