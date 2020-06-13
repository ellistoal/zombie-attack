#include <iostream>
#include <unistd.h>
using namespace std;

int createZombie() {
if(rand()% 70 < 10)
return 11;
else
return rand() % 10 + 1;
}





int main() {
srand(time(0));

bool playerAlive = true;
int playerSkill = 9;
int playerScore = 1;
string playerName = "";
int zombieCount = 0;
int zombiesKilled = 0;

cout << "Welcome to Zombie Fight." << endl << "press [Enter] to start";

cin.get();

cout << "please Enter You Name: ";
cin >> playerName;

cout << "how many zombies do you wish to fight? ";
cin >> zombieCount;

cout << "get ready to fight for your life, " << playerName << "!" << endl;

  while(playerAlive == true && zombiesKilled < zombieCount) {
    int zombieSkill = createZombie();

    if (zombieSkill > 10) {
      cout << endl <<  "here comes a huge zombie !!" << endl;
    } else {
      cout << endl << "Here comes zombie " << zombiesKilled + 1 << endl;
    }

    cout << "Fighting..." << endl;
    sleep(2);

    if (playerSkill < zombieSkill) {
      playerAlive = false;
      cout << "You're wasted" << endl;
    }
    else {
      cout << "You killed the zombie" << endl;
      playerScore = playerScore * 2;
      zombiesKilled++;
    }

  }

  cout << "G A M E   O V E R ! ! ! " << zombiesKilled << " zombies!" << endl;
  cout << playerScore << endl;
}