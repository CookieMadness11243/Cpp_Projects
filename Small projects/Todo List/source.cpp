#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

void clearTerminal(){system("cls");}

std::map<std::string, std::string> Tasks;

void List()
{
    int TaskNum = 1;
    for(auto& itr : Tasks)
    {
        std::cout << TaskNum << "- " <<
            itr.first << " = " <<
            itr.second << std::endl;
        TaskNum++;
    }
}

void Add()
{
    clearTerminal();
    std::string Task, Status;
    int StatusNum;
    std::cin.ignore();
    std::cout << "Task: "; std::getline(std::cin, Task);
//    std::cin.ignore();
    std::cout << "Status: " << std::endl; 
    std::cout << "1- Done\n" << "2- Doing\n" << "3- Not Done" << std::endl;
    std::cin >> StatusNum;
    if (StatusNum == 1) Status = "Done";
    else if(StatusNum == 2) Status = "Doing";
    else if(StatusNum == 3) Status = "Not Done"; 
    else{ std::cout << "Not a number"; Add(); }
    Tasks[Task] = Status;
    clearTerminal();
}

//void Edit()
//{
//    clearTerminal();
//    int Task;
//    int Num = 1;
//    std::cout << "What task do you wanna edit?: "; std::cin >> Task;
//    
//    std::string NewTask;
//    int NewStatus;
//    for(auto& itr : Tasks)
//    {
//        if(Num == Task)
//        {
//            std::cout << "New Task: "; std::cin >> NewTask;
//            
//            std::cout << "New Status: " << std::endl <<
//            "1- Done" << std::endl <<
//            "2- Doing" << std::endl <<
//            "3- Not Doing"; std::cin >> NewStatus;
//            
//        }
//
//        Num++;
//    }
//}

void Remove()
{
    clearTerminal();
    int Task;
    std::cout << "What task do you wanna remove?: ";
    std::cin >> Task;

    int Num = 1;
    for (auto& itr : Tasks)
    {
        if (Task == Num)
        {
            Tasks.erase(itr.first);
        }else{std::cout << "Please Try again."; Remove();} 

        Num++;
    }
}