state of project: yet imcomplete, but has some features going on

i wanted something simple to make as my first project in c++
  so i found the idea from geeks for geeks website

so i started programming the idea, first it was simple
just guess the number then i started adding more ideas like a wallet and a shop system

so yeah, it's a simple project really
  i have images that i may post later after i finish the project completely maybe even put it in a real engine
and actually developing it and making it a rougue like game, but that's after i finish my c++ learning arc

//Casino Number Guessing Game with diffuculuties and other stuff, Note: a bonus if you make it so that if the guess is close then it says how close it is and the oppisite is true;
// Check List:

// Guesser: State: In Work
// Wallet System: State: In Work

// Shop System: "Idea None Implumented"
//
```
#include <iostream>
#include <random>
#include <string>
class Play{
	public:
  // Variables
		std::string diff;
		int prize;
		int wallet;

    int Rnum;
		int guess;
		// Diffuculity
		void start(std::string diff){
			this-> diff = diff;
			this-> prize = prize;

      // Prize pools
			if (diff == "Hard"){
				prize = 1000;
        Rnum = 100;
				std::cout<<"prize pool: "<<prize<<std::endl;
			}else if(diff == "Easy"){
        Rnum = 25;
				prize = 250;
				std::cout<<"prize pool: "<<prize<<std::endl;
			}else {
				std::cout<<"Try Again"<<std::endl;
			}
		}

    // Player Guesser
    void accuracy(int guess){
      this-> guess = guess;
      
// Start Coding From Here: ; "Switches and conditions"

    }
};
int main(){
  // Dice
  srand(time(NULL));

  // Player class
	Play player;

	std::cout<< "Hard or Easy: ";
  std::cin>>player.diff;
	player.start(player.diff);
  int dice = (rand() % player.Rnum) + 1;
  
  std::cout<<"Note: the "<<player.diff<<" diffuculuty is between 1 and "<<player.Rnum<<"\n Start: ";
  std::cin>>player.guess;

	return 0;
}
```
