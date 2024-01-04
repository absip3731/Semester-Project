#include<iostream>
#include<string>
#include <cstring>
#include <windows.h>

using namespace std;

string inventory[5];
int health;
const int totalGems = 3;
string places[totalGems] = { "Mystic Hallows", "Luminous Glade", "Tranquil Vale" };
string gems[totalGems] = { "Ethereal Saphyra","Radiant Topaz","Serene Emerald" };
bool collected[totalGems] = { false,false,false };
string healthPotions[totalGems];
char choose;

void animation(const char a[]) {
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < 19584000; j++);
		cout << a[i];
	}
}

string LowerCase(string str) {
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}

void Continue() {
	cout << "Press Enter to continue....\n";
	cin.ignore();
	cin.get();

	//Loading Bar
	char a = 178;
	int i = 0;

	do
	{
		cout << "\t Loading... \n";

		for (int j = 0; j <= i; j++) {
			cout << a;
		}
		Sleep(100);

		i++;

		system("cls");

	} while (i != 30);
}

void CharacterDetail(string& name, string& warrior_class, int& health, int& enemyHealth) {
	cout << "Name: " << name << endl;
	cout << "Warrior Class: " << warrior_class << endl;
	cout << "User Health: " << health << endl;
	cout << endl;
	cout << "Enemy Health: " << enemyHealth << endl;
	cout << endl;
}

void Menu() {
	int choice;

	do
	{
			cout << "1. Resume\n";
			cout << "2. Inventory\n";
			cout << "3. Exit\n";
			cin >> choice;

			switch (choice) {
			case 1:
				break;
			case 2:
				cout << "\tInventory\n";
				for (int i = 0; i < 10; i++) {
					if (!inventory[i].empty()) {
						cout << "Slot " << i + 1 << ": " << inventory[i] << endl;
					}
				}
				cout << "Press Enter to go to menu....";
				cin.ignore();
				cin.get();
				continue;
			case 3:
				animation("Thanks for playing");
				exit(0);
			}
			break;

		} while (true);
	}

	bool IsEmpty() {
		for (int i = 0; i < 3; i++)
		{
			if (!healthPotions[i].empty())
			{
				return false;

				break;
			}
		}
		return true;
	}

	int main() {

		do
		{
		string choice;

		cout << "Chosen Horizon: Vilgax's Resurgence\n\n";

		cout << "Start (s)\n"
			<< "Quit (q)\n\n";
		cin >> choice;
		choice = LowerCase(choice);

		if (choice == "q") {
			cout << "Thanks for Playing the game\n\n";
		}
		else if (choice == "s") {

			animation("Let's Go back to where it all began.....\n\n");
			animation("WELCOME, this is your journey in conquering the mythical state of ELDORIA. This precious piece of land had seen some very bad times and rulers though the people here are very loving and hardworking. However, since last couple of decades the people have found a leader of their choice who has lifted this State through the skies. The state and people were going through a very good time until they faced invasion from VILGAX (The most feared Emperor amongst all leaders throughout the universe from planet ALDABRA) , with the support of The Forever_Knights (commonly known as Pirates conquering different states and planets in the universe) and lastly WULKANUS (A general from planet ARBURIA well known for his strength and use of great strong attacks in defeating his opponents).");
			animation("\n\nOn their invasion the guards and generals were all killed, and the Leader KHAN was sent to prison in a dark cell with no contact to his people. Since their takeover, they have imprisoned a dozen of people from the state who have stood against them or ostracized them. The people always live with their fear and lifes of people of ELDORIA have become miserable. No one in the state was able to find a solution for their independence from this VILGAX.");
			animation("\n\nAfter sometime and old man named Bawa told everyone about a prophecy that a boy will come who will lead ELDORIA to freedom. The people listened intently as Bawa painted a picture of a Chosen One, a beacon of light in the darkness that had befallen Eldoria. Whispers of anticipation filled the air, and a flicker of hope ignited within the hearts of those who had lost everything. As the news of the prophecy spread, the oppressed people of Eldoria began to look to the skies and wonder when the Chosen One would arrive, clad in the armor of destiny, ready to face the evils that plagued their once-peaceful land.");
			animation("\n\nThis prophecy got to tyraanical Vilgax and it clouded his head and he could.nt ignore it. All the people of ELDORIA got hope and were not afraid of Vilgax like before. To silence everyone he told Bawa that he cannot predict the future and there is no one powerful other than Vilgax in the world. By saying this he told the forever knights to evict him of the state. He told everyone that whoever said anything about the prophecy will be executed infront of everyone.");
			animation("\n\n The prophecy stood in his mind all the time and he cannot get rid of it. The voices of the boy destroying him always made him panic so he commanded all of his knights to execute every new born child and if a child was born he should be killed.");
			animation("\n\n BAWA got evicted from the state and no one knew where he is....");
			animation("\n\nLet the game begin.\n\n");

			Continue();

			string name;

			cout << "Enter a name for your character: ";
			getline(cin, name);

			string warrior_class;
			health = 100;

			while (true) {

				cout << "What do you want to become:\n"
					<< "a. Rogue\n"
					<< "b. Mage\n"
					<< "c. Warrior\n";
				cout << "Choose: ";
				cin >> choice;

				choice = LowerCase(choice);
				while (true)
				{
					if (choice == "a") {
						warrior_class = "Rogue";
						cout << name << " chose to become a Rogue.\n";
						animation("Nice choice. Rogues are good in stealth and are resiliant.\n\n");

						animation("There is a village where a farmer with his wife and a son live peacefully and work in the farm. The boy is a teenager having interest in becoming a stealth hunter. He likes to hunt animals and bring them to his home to eat. He is very good in hunting animals because of his stealth.\n\n One day he was hunting in the woods where he heard voice of a wolf. He rushed to the place to hunt the wolf where he saw an old man with torned clothes and wounds. The wolf was attacking the old man. He fired an arrow towards the wolf. The wolf got wounded and attacked the boy. He fired another arrow on the head of the wolf and killed it.\n\n");
						cout << name;
						animation(": (Rushed to the old man and placed cloth on his wound) 'why are you here and what are you doing?'\n");
						animation("OLD MAN: (Looking in the eyes of the boy realising a spark of fury and Enthusiasm).I am known by the name of Bawa. I was evicted from the great ELDORIA because of confronting the mad king Vilgax.\n");
						cout << name;
						animation(": Why were you evicted?");
						animation("BAWA: Because i told them a prophecy that one day a chosen one will come and destroy this destructive and torturing rule of VILGAX. I think the prophecy was true. You might be the chosen one. I can see it in your eyes....\n");
						cout << name;
						animation(": (SHOCKED) I don't know what you are saying. I don't trust on prophecies but if there were one how can I be the chosen one. I am a simple farmer.\n");
						animation("BAWA: You are the chosen one who can save and free thousand of lives. Come to meet me if you want to know more. (Pointing to the trees...) I will meet you there in that cave below the 2 longest pine trees.\n");
						animation("The boy left thinking what he was talking about.... \n");

						Continue();

						cout << name;
						animation("(reaching home) found his father in an argument with 2 of the forever knights of eldoria who were in his farm plucking from his field. One of the knight grabbed his father from the neck and the boy went in between fighting for his father. The knights told him that he will be punished.\n\n");
						animation("The knights went back to the king and told him about the farmer and his boy. Vilgax got a flash of the boy as he maybe the chosen one. He ordered the knight to bring the boy to him. If anyone comes in the way... kill him.");
						cout << "\n\nForever knight marching towards the village.....";
						animation("\nFarmer seeing the knights goes to meet them.\n\n");

						animation("FARMER: Yes what do you want now?\n");
						animation("KNIGHT: We told you not to challenge us. Now we are here to take your baby boy on order of the king and if someone came in our way, he will be executed.\n");
						animation("FARMER: I will not give my boy. You cannot have him.\n");
						animation("KNIGHT: (Pointing sword towards farmer...) Where is he..!??\n");
						animation("FARMER: If I'd know, I would still not tell you.\n");
						animation("KNIGHT: (Attacks the farmer with his sword and also kills his wife) we will find him and he will soon join you.\n\n");

						Continue();

						animation("\nThe boy hunts down a huge bear and is very happy to bring the meat to his father. As he starts chopping the bear he sees fire coming from the right. He rushes to the area and sees his house and farm all burnt down. (Shocked....) He runs towards the house where he saw his mother dead with a huge cut on the heart. He sees his father choking and wounded very badly.\n\n");
						cout << name;
						animation(": (Emotionally rushes to his father) Father what happened are you fine?");
						animation("\nFATHER: They are after you son (Coughing...)\n");
						cout << name;
						animation(": WHO? FATHER WHO....?\n");
						animation("FATHER: (Coughing...)The Fore... Forever Knig.... Knights. Take care son. (Coughs and dies)\n");
						cout << name;
						animation(": NOOOOOOOO! FATHERRRRR (Crying loudly....)");

						Continue();

						animation("The boy gets very angry and remebers the old man. He goes to the old man.....\n");
						animation("BAWA: I knew you would come. I heard they killed your parents. Do you want to avenge your parents and save millions of lives??\n");
						cout << name;
						animation(": (In angry voice) Yes I will avenge my parents and kill that Vilgax. He will die. Tell me how to do it.\n");
						animation("BAWA: I will tell you but you must promise me that you will use the power for the greater good and destroy it when the work is done....\n");
						cout << name;
						animation(": What power are you talking about? I promise I will use it for good.\n");
						animation("There is a portal in ELYSIAN ENCLOSURE which can only be opened with 3 GEMS which are located in Mystic Hallows, Luminous Glade, and Tranquil Vale. You have to get the 3 gems in order to open up the portal but you may encounter threats while finding the gems. There is a forged weapon known as the Luthera's Shield Forged with the black steel of the equinox. It hold power that makes the person holding it invincible that is why it cannot be in the wrong hands.\n");
						cout << name;
						animation(": I will find it and kill Vilgax and then destroy the weapon.\n\n");

						animation("He starts the journey of finding the gems.");

						Continue();

						cout << "Choose a place: \n";
						for (int j = 0; j < totalGems; j++) {
							if (!collected[j]) {
								cout << j + 1 << ". " << places[j] << endl;
							}
						}
						int option;
						cin >> option;

						if (option == 1) {

							while (true)
							{
								cout << "The Mystic Hallows\n\n";
								animation("The boy reaches the mystic hallows. A shadowy and foggy area with darkness every where. By walking couple of steps he sees a dlash of light. He goes to the light where he finds torch.\n\n");
								cout << "Add torch in inventory?";
								cout << "Press Enter to Continue....";
								cin.ignore();
								cin.get();

								inventory[0] = "Torch";
								animation("Torch added Successfully...\n\n");

								animation("He takes out the torch and goes forward where he finds shiny treasure. He moves forward and sees a very shiny gem there but 3 people come infront of him.....\n\n");
								animation("Person1: Who are you? You cannot take the Gem or you have to fight us....\n");
								cout << name;
								animation(": Well I am here to take the gem to open the portal and help other people and avenge my father\n");
								animation("Person2: Well then you have to fight with us..... But you will die.\n\n");

								cout << "Start the fight";

								int enemyHealth = 150;

								Continue();

								while (health != 0 || enemyHealth != 0) {

									CharacterDetail(name, warrior_class, health, enemyHealth);

									Menu();
									int userAttack = rand() % 25 + 1;
									int enemyAttack = rand() % 5 + 1;

									animation("Press Enter to attack....");
									cin.ignore();
									cin.get();

									animation("User Attack = ");
									cout << userAttack << endl << endl;
									health -= userAttack;

									animation("Enemy Attack = ");
									cout << enemyAttack << endl << endl;
									enemyHealth -= enemyAttack;
									if (health <= 0) {
										animation("You LOST! Retry\n");
										Continue();

										continue;
									}
									else if (enemyHealth <= 0) {
										animation("You WON!\n\n");
										break;
									}
								}
								break;
							}
							animation("Person3: You defeated us....\n Person2: (In shock) He might be the chosen one.... \nPerson1: No one has ever defetaed us unless according to the prophecy a chosen one will open the portal. you are the chosen one, take us with you.....");

							cout << "Let us give you our powers because we cannot come with you.\n";

							cout << "Take powers";
							Continue();

							animation("You got the Ethereal Saphyra (Gem). You also got power of the 3 people");

							health += 150;
							inventory[1] = "Ethereal Saphyra";
							collected[0] = true;
							gems[0] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;
						}
						else if (option == 2) {
							cout << "Luminous Glade\n\n";
							animation("The boy reaches Luminous Glade, a magical forest filled with bioluminescent plants and magical creatures. ");
							cout << name;
							animation(": I can feel a strange power here.... Lets see what it is.\n\n");
							animation("He walks towards the power where he find a mystic creature (large wings, nice big beak, some aura coming out of it) which is attacking someone.\n\n");
							cout << name;
							animation(": He's getting attacked, let's help him.\n");
							cout << name;
							animation(": Hey I am coming to help\n");
							animation("MAN: No don't.\n\n");

							animation("Takes out his arrow and it gets on fire, shoots the arrow towards the creature but he flies away.");
							Continue();

							cout << name;
							animation(": Let's GO. (Attacking.... ahhhhhhh)\n\n");

							animation("The creature flew away by seeing the fire.\n\n");
							cout << name;
							animation(": (To the man) Who are you, Why was he attacking you? Why did he flew away?\n");
							animation("MAN: That was Aetherion Specter. A mythic creature that takes the aura of people and then feed them to everyone.(Who are you and why did you help me? What are you doing here?)\n");
							cout << name;
							animation(": (Thinking... he might know of the gem) (to the man) I am looking for a special gem that....");
							animation("MAN: Luminous Glade... You are after Luminous Glade. I don't think you should go there. Many have come and failed. \n");
							cout << name;
							animation(": Let me try, I was sent according to the prophecy.");
							animation("MAN: Many have said that but failed my boy. If you want to go then (pointing in direction) you see that cave? There it is situated but you might face Aetherion Specters. You should take this aura of mine a little, it will help your arrows catch fire and you can kill them. Also take this potion, when you need health use the potion.\n");
							cout << name;
							animation(": OK thank you.\n");
							animation("Continue to the cave....");
							Continue();

							animation("(Reaches and enters the cave) There are 3 Aetherion Specters here. Lets kill them.\n\n");

							int enemyHealth = 200;

							while (health != 0 || enemyHealth != 0) {

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();
								int userAttack = rand() % 40 + 1;
								int enemyAttack = rand() % 10 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								bool usedPotion = false;
								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;
											usedPotion = true;
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									cout << "Sorry you do not have a heath potion....";
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("Congrats! You have defeated Aetherion Specters\n GO and claim the gem.");
							animation("MAN: (Shocked) How could it be, no one has ever defeated the Aetherion Specters. Wait... You must be the chosen one. Respect to you chosen one. If there is anything you like to ask?\n");
							cout << name;
							animation(": I would like if you could give me some of those health potions....\n");
							animation("MAN: Anything for the chosen one. Here are 3 potions.\n\n");

							Continue();

							animation("You got the Luminara Crystalline(Gem). Also you got 3 healing potions");

							health += 200;

							for (int i = 0; i < 3; i++)
							{
								healthPotions[i] = "Healing Potion";
							}

							inventory[2] = "Luminara Crystalline";
							collected[1] = true;
							gems[1] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;

						}
						else if (option == 3) {
							cout << "Tranquil Vale\n\n";
							animation("Reached Tranquil Vale. The place of calmness having all fantasies fairies, unicorns etc.... Maybe to protect the in need.\n\n");
							animation("Walking to a sanction near by.... (Closed door) Tries to open.... What! Spirit has arrived.\n\n");
							animation("SPIRIT: What do you seek?\n");
							cout << name;
							animation(": I seek for a gem known to....\n");
							animation("SPIRIT: Yes I know about Shadowfire Onyx. But you may face a monster in there. And if you once go in, there is no coming back.\n");
							animation("Boy replies: OK. Wish me luck\n\n");
							animation("Goes in...");

							Continue();

							animation("MONSTER: Who wants himself dead? Who has entered the sanction?\n");
							cout << name;
							animation(": I have entered the sanction and I want the Shadowfire Onyx. You cannot stop me. I am the chosen one.");
							animation("MONSTER: (Laughing...)You... Look at yourself, how can you say you are the chosen one? Let's see if you could defeat me.\n\n");
							Continue();

							int enemyHealth = 300;

							while (health != 0 || enemyHealth != 0) {
								bool usedPotion = IsEmpty();

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();

								int userAttack;
								if (!usedPotion) {
									userAttack = rand() % 25 + 1;
								}
								else {
									userAttack = rand() % 80 + 1;
								}

								int enemyAttack = rand() % 15 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;

											for (int i = 0; i < 3; i++)
											{
												if (!healthPotions[i].empty()) {
													healthPotions[i] = "";
													break;
												}
											}
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									animation("SPIRIT: You are fighting bravely, here have some power.\n");
									userAttack = rand() % 80 + 1;
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("SPIRIT: You are the chosen one who have now came after decades of waiting. The gem is yours.\n");
							cout << name;
							animation(": Thank you. Farewell Spirit friend.\n\n");

							inventory[3] = "Shadowfire Onyx";
							gems[2] = "";
							collected[2] = true;

							animation("Let's continue the journey.");

							Continue();

							break;
						}
						else {
							cout << "Invalid value\n";
							system("cls");
							continue;
						}

						animation("The boy fighting with other devils and creatures from other realms has now come back to BAWA to get to know about the portal.\n\n");

						cout << name;
						animation(": (Reaches BAWA) I have got the 3 gems. Now tell me where the portal is....\n\n");
						animation("BAWA: I knew you were the chosen one, now do you still think prophecies are wrong...!?\n");
						animation("BAWA: The portal is located at ELYSIAN ENCLOSURE. You have to travel to there but when you get the sword you can get to anywhere you like at speed of light. But you must destroy it after your work is done.");
						cout << name;
						animation(": Ok I will.");

						animation("The Journey to Elysian Enclosure begins");

						Continue;

						animation("Reached Elysian Enclosure. A broken building having a glow in the middle as the boy gets near it. He walks inside where he finds a large portal having 3 spaces for the gems.\n\n");

						animation("Take out gems and place them in portal...");

						Continue();

						inventory[1] = "";
						inventory[2] = "";
						inventory[3] = "";

						animation("The building is shivering with huge blow of winds. The portal opens up and he walks in. (Eyes opened) Sees a vast void with nothing but pieces of crystal and stones moving in space. He jumps on to stones to go to other small piece or area where he finds the forge of the Luthera's shield forged from the black steel of equinox.\n\n");

						inventory[4] = "Luthera's Shield";

						cout << name;
						animation(": (Teleports to Eldoria and confronts Vilgax) I am here Vilgax. I am the one BAWA told you about. You killed my parents now you will die\n");
						animation("VILGAX: What how.....? Forever Knights... Wulcanus attack.\n\n");
						animation("With the blink of an eye, he defeated each and every one of the knight.\n");
						cout << name;
						animation(": Now it's your turn to die Vilgax.");

						cout << "Attack....";

						Continue();

						animation("Vilgax was killed and the boy won hearts of all the people in  Eldoria.\n\n ");

						cout << "choose if you want to use the sword or destroy it at the forge.";
						cout << "\n1. destroy\n" << "2. Keep\n";

						int choice;

						switch (choice) {
						case 2:
							animation("You must take care of the sword at all cost, if it falls in wrong hands all is doomed.\n\n");
							break;
						case 1:
							animation("Goes back to the forge and destroys the sword with the molten special lava that can only melt black steel of the equinox.");
							break;
						}
					}
					else if (choice == "b") {
						cout << name << " chose to become a Mage.\n";
						animation("Nice choice. Mages are good in Wizardary and are good in casting spells.\n\n");

						animation("There is a village where a farmer with his wife and a son live peacefully and work in the farm. The boy is a teenager having interest in becoming a wizard. He likes cast spells on different things in the forest. He takes regular teaching of wizardary and spells.\n\n One day he was wandering in the woods where he heard voice of a wolf. He rushed to the place to cast a new spell of levitation he learned on the wolf where he saw an old man with torned clothes and wounds. The wolf was attacking the old man. He left the levitating spell and killed the wolf by an advannced spell. The wolf blasted from inside.\n\n");
						cout << name;
						animation(": (Rushed to the old man and placed cloth on his wound and casted a healing spell) 'why are you here and what are you doing?'\n");
						animation("OLD MAN: (Looking in the eyes of the boy realising a spark of fury and Enthusiasm).I am known by the name of Bawa. I was evicted from the great ELDORIA because of confronting the mad king Vilgax.\n");
						cout << name;
						animation(": Why were you evicted?");
						animation("BAWA: Because i told them a prophecy that one day a chosen one will come and destroy this destructive and torturing rule of VILGAX. I think the prophecy was true. You might be the chosen one. I can see it in your eyes....\n");
						cout << name;
						animation(": (SHOCKED) I don't know what you are saying. I don't trust on prophecies but if there were one how can I be the chosen one. I am a simple farmer who doesn't even know much spells to fight someone.\n");
						animation("BAWA: You are the chosen one who can save and free thousand of lives. Come to meet me if you want to know more. (Pointing to the trees...) I will meet you there in that cave below the 2 longest pine trees.\n");
						animation("The boy left.... thinking what he was talking about.... \n");

						Continue();

						cout << name;
						animation("(reaching home) found his father in an argument with 2 of the forever knights of eldoria who were in his farm plucking from his field. One of the knight grabbed his father from the neck and the boy went in between and threatened the knights to cast a spell on them. (Laughing...) The knights told him that he will be punished.\n\n");
						animation("The knights went back to the king and told him about the farmer and his boy. Vilgax got a flash of the boy as he maybe the chosen one. He ordered the knight to bring the boy to him. If anyone comes in the way... kill him.");
						cout << "\n\nForever knight marching towards the village.....";
						animation("\nFarmer seeing the knights goes to meet them.\n\n");

						animation("FARMER: Yes what do you want now?\n");
						animation("KNIGHT: We told you not to challenge us. Now we are here to take your baby boy on order of the king and if someone came in our way, he will be executed.\n");
						animation("FARMER: I will not give my boy. You cannot have him.\n");
						animation("KNIGHT: (Pointing sword towards farmer...) Where is he..!??\n");
						animation("FARMER: If I'd know, I would still not tell you.\n");
						animation("KNIGHT: (Attacks the farmer with his sword and also kills his wife) we will find him and he will soon join you.\n\n");

						Continue();

						animation("\nThe boy hunts down a boar with his spells and trapped him and is very happy to bring the meat to his father. As he starts chopping the boar he sees fire coming from the right. He rushes to the area and sees his house and farm all burnt down. (Shocked....) He runs towards the house where he saw his mother dead with a huge cut on the heart. He sees his father choking and wounded very badly. He tries healing spell and put off the fire by spell but he was not much advanced but just a rookie.\n\n");
						cout << name;
						animation(": (Emotionally rushes to his father) Father what happened are you fine?");
						animation("\nFATHER: They are after you son (Coughing...)\n");
						cout << name;
						animation(": WHO? FATHER WHO....?\n");
						animation("FATHER: (Coughing...)The Fore... Forever Knig.... Knights. Take care son. (Coughs and dies)\n");
						cout << name;
						animation(": NOOOOOOOO! FATHERRRRR (Crying loudly....)");

						Continue();

						animation("The boy gets very angry and remebers the old man. He goes to the old man.....\n");
						animation("BAWA: I knew you would come. I heard they killed your parents. Do you want to avenge your parents and save millions of lives??\n");
						cout << name;
						animation(": (In angry voice) Yes I will avenge my parents and kill that Vilgax. He will die. Tell me how to do it.\n");
						animation("BAWA: I will tell you but you must promise me that you will use the power for the greater good and destroy it when the work is done....\n");
						cout << name;
						animation(": What power are you talking about? I promise I will use it for good.\n");
						animation("There is a portal in ELYSIAN ENCLOSURE which can only be opened with 3 GEMS which are located in Mystic Hallows, Luminous Glade, and Tranquil Vale. You have to get the 3 gems in order to open up the portal but you may encounter threats while finding the gems. There is a forged weapon. It is the pendant of ancient master mastodon holding the power of nature. It hold power that makes the person holding it invincible that is why it cannot be in the wrong hands.\n");
						cout << name;
						animation(": I will find it and kill Vilgax and then destroy the weapon.\n\n");

						animation("He starts the journey of finding the gems.");

						Continue();

						cout << "Choose a place: \n";
						for (int j = 0; j < totalGems; j++) {
							if (!collected[j]) {
								cout << j + 1 << ". " << places[j] << endl;
							}
						}
						int option;
						cin >> option;

						if (option == 1) {

							while (true)
							{
								cout << "The Mystic Hallows\n\n";
								animation("The boy reaches the mystic hallows. A shadowy and foggy area with darkness every where. He uses a spell to make a little light. By walking couple of steps he sees a flash of light. \n\n");

								cout << "Press Enter to Continue....";
								cin.ignore();
								cin.get();

								animation("He goes forward where he finds shiny treasure. He moves forward and sees a very shiny gem there but 3 people come infront of him.....\n\n");
								animation("Person1: Who are you? You cannot take the Gem or you have to fight us....\n");
								cout << name;
								animation(": Well I am here to take the gem to open the portal and help other people and avenge my father\n");
								animation("Person2: Well then you have to fight with us..... But you will die.\n\n");

								cout << "Start the fight";

								int enemyHealth = 150;

								Continue();

								while (health != 0 || enemyHealth != 0) {

									CharacterDetail(name, warrior_class, health, enemyHealth);

									Menu();
									int userAttack = rand() % 25 + 1;
									int enemyAttack = rand() % 5 + 1;

									animation("Press Enter to attack....");
									cin.ignore();
									cin.get();

									animation("User Attack = ");
									cout << userAttack << endl << endl;
									health -= userAttack;

									animation("Enemy Attack = ");
									cout << enemyAttack << endl << endl;
									enemyHealth -= enemyAttack;
									if (health <= 0) {
										animation("You LOST! Retry\n");
										Continue();

										continue;
									}
									else if (enemyHealth <= 0) {
										animation("You WON!\n\n");
										break;
									}
								}
							}
							animation("Person3: You defeated us....\n Person2: (In shock) He might be the chosen one.... \nPerson1: No one has ever defetaed us unless according to the prophecy a chosen one will open the portal. you are the chosen one.....");

							cout << "Let us give you our powers because we cannot come with you.\n";

							cout << "Take powers.....";
							Continue();

							animation("You got the Ethereal Saphyra (Gem). You also got power of the 3 people");

							health += 150;
							inventory[1] = "Ethereal Saphyra";
							collected[0] = true;
							gems[0] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;
						}
						else if (option == 2) {
							cout << "Luminous Glade\n\n";
							animation("The boy reaches Luminous Glade, a magical forest filled with bioluminescent plants and magical creatures. ");
							cout << name;
							animation(": I can feel a strange power here.... Lets see what it is.\n\n");
							animation("He walks towards the power where he find a mystic creature (large wings, nice big beak, some aura coming out of it) which is attacking someone.\n\n");
							cout << name;
							animation(": He's getting attacked, let's help him.\n");
							cout << name;
							animation(": Hey I am coming to help\n");
							animation("MAN: No don't.\n\n");

							animation("Casts a spell and fires a fire on it, It gets hit and flies away.");
							Continue();

							cout << name;
							animation(": Let's GO. (Attacking.... ahhhhhhh)\n\n");

							animation("The creature flew away by seeing the fire.\n\n");
							cout << name;
							animation(": (To the man) Who are you, Why was he attacking you? Why did he flew away?\n");
							animation("MAN: That was Aetherion Specter. A mythic creature that takes the aura of people and then feed them to everyone.(Who are you and why did you help me? What are you doing here?)\n");
							cout << name;
							animation(": (Thinking... he might know of the gem) (to the man) I am looking for a special gem that....");
							animation("MAN: Luminous Glade... You are after Luminous Glade. I don't think you should go there. Many have come and failed. \n");
							cout << name;
							animation(": Let me try, I was sent according to the prophecy.");
							animation("MAN: Many have said that but failed my boy. If you want to go then (pointing in direction) you see that cave? There it is situated but you might face Aetherion Specters. You should take this aura of mine a little, it will help your powers to grow strong and you can kill them. Also take this potion, when you need health use the potion.\n");
							cout << name;
							animation(": OK thank you.\n");
							animation("Continue to the cave....");
							Continue();

							animation("(Reaches and enters the cave) There are 3 Aetherion Specters here. Lets kill them.\n\n");

							int enemyHealth = 200;

							while (health != 0 || enemyHealth != 0) {

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();
								int userAttack = rand() % 40 + 1;
								int enemyAttack = rand() % 10 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								bool usedPotion = false;
								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;
											usedPotion = true;
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									cout << "Sorry you do not have a heath potion....";
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("Congrats! You have defeated Aetherion Specters\n GO and claim the gem.");
							animation("MAN: (Shocked) How could it be, no one has ever defeated the Aetherion Specters. Wait... You must be the chosen one. Respect to you chosen one. If there is anything you like to ask?\n");
							cout << name;
							animation(": I would like if you could give me some of those health potions....\n");
							animation("MAN: Anything for the chosen one. Here are 3 potions.\n\n");

							Continue();

							animation("You got the Luminara Crystalline(Gem). Also you got 3 healing potions");

							health += 200;

							for (int i = 0; i < 3; i++)
							{
								healthPotions[i] = "Healing Potion";
							}

							inventory[2] = "Luminara Crystalline";
							collected[1] = true;
							gems[1] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;

						}
						else if (option == 3) {
							cout << "Tranquil Vale\n\n";
							animation("Reached Tranquil Vale. The place of calmness having all fantasies fairies, unicorns etc.... Maybe to protect the in need.\n\n");
							animation("Walking to a sanction near by.... (Closed door) Tries to open.... What! Spirit has arrived.\n\n");
							animation("SPIRIT: What do you seek?\n");
							cout << name;
							animation(": I seek for a gem known to....\n");
							animation("SPIRIT: Yes I know about Shadowfire Onyx. But you may face a monster in there. And if you once go in, there is no coming back.\n");
							animation("Boy replies: OK. Wish me luck\n\n");
							animation("Goes in...");

							Continue();

							animation("MONSTER: Who wants himself dead? Who has entered the sanction?\n");
							cout << name;
							animation(": I have entered the sanction and I want the Shadowfire Onyx. You cannot stop me. I am the chosen one.");
							animation("MONSTER: (Laughing...)You... Look at yourself, how can you say you are the chosen one? Let's see if you could defeat me.\n\n");
							Continue();

							int enemyHealth = 300;

							while (health != 0 || enemyHealth != 0) {
								bool usedPotion = IsEmpty();

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();

								int userAttack;
								if (!usedPotion) {
									userAttack = rand() % 25 + 1;
								}
								else {
									userAttack = rand() % 80 + 1;
								}

								int enemyAttack = rand() % 15 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;

											for (int i = 0; i < 3; i++)
											{
												if (!healthPotions[i].empty()) {
													healthPotions[i] = "";
													break;
												}
											}
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									animation("SPIRIT: You are fighting bravely, here have some power.\n");
									userAttack = rand() % 80 + 1;
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("SPIRIT: You are the chosen one who have now came after decades of waiting. The gem is yours.\n");
							cout << name;
							animation(": Thank you. Farewell Spirit friend.\n\n");

							inventory[3] = "Shadowfire Onyx";
							gems[2] = "";
							collected[2] = true;

							animation("Let's continue the journey.");

							Continue();

							break;
						}
						else {
							cout << "Invalid value\n";
							system("cls");
							continue;
						}

						animation("The boy fighting with other devils and creatures from other realms has now come back to BAWA to get to know about the portal.\n\n");

						cout << name;
						animation(": (Reaches BAWA) I have got the 3 gems. Now tell me where the portal is....\n\n");
						animation("BAWA: I knew you were the chosen one, now do you still think prophecies are wrong...!?\n");
						animation("BAWA: The portal is located at ELYSIAN ENCLOSURE. You have to travel to there but when you get the Pendant you can get to anywhere you like at speed of light. But you must destroy it after your work is done.");
						cout << name;
						animation(": Ok I will.");

						animation("The Journey to Elysian Enclosure begins");

						Continue;

						animation("Reached Elysian Enclosure. A broken building having a glow in the middle as the boy gets near it. He walks inside where he finds a large portal having 3 spaces for the gems.\n\n");

						animation("Take out gems and place them in portal...");

						Continue();

						inventory[1] = "";
						inventory[2] = "";
						inventory[3] = "";

						animation("The building is shivering with huge blow of winds. The portal opens up and he walks in. (Eyes opened) Sees a vast void with nothing but pieces of crystal and stones moving in space. He jumps on to stones to go to other small piece or area where he finds the forge of the Pendant forged from the black steel of equinox.\n\n");

						inventory[4] = "Pendant";

						cout << name;
						animation(": (Teleports to Eldoria and confronts Vilgax) I am here Vilgax. I am the one BAWA told you about. You killed my parents now you will die\n");
						animation("VILGAX: What how.....? Forever Knights... Wulcanus attack.\n\n");
						animation("With the blink of an eye, he defeated each and every one of the knight.\n");
						cout << name;
						animation(": Now it's your turn to die Vilgax.");

						cout << "Attack....";

						Continue();

						animation("Vilgax was killed and the boy won hearts of all the people in  Eldoria.\n\n ");

						cout << "choose if you want to use the pendant to expand your strength or destroy it at the forge.";
						cout << "\n1. destroy\n" << "2. Keep\n";

						int choice;

						switch (choice) {
						case 2:
							animation("You must take care of the Pendant at all cost, if it falls in wrong hands all is doomed.\n\n");
							break;
						case 1:
							animation("Goes back to the forge and destroys the sword with the molten special lava that can only melt black steel of the equinox.");
							break;
						}
					}
					else if (choice == "c") {
						cout << name << " chose to become a Warrior.\n";
						animation("Nice choice. Warriors are strong and confident in fighting with wearing heavy armor on frontline.\n\n");

						animation("There is a village where a farmer with his wife and a son live peacefully and work in the farm. The boy is a teenager having interest in becoming a Warrior. He has a sword made from wood from which he practices sword fight by hitting trees.\n\n One day he went in the forest to practice with his iron sword where he heard voice of a wolf. He rushed to the place to attack the wolf where he saw an old man with torned clothes and wounds. The wolf was attacking the old man. He attacked and killed the wolf.\n\n");
						cout << name;
						animation(": (Rushed to the old man and placed cloth on his wound) 'why are you here and what are you doing?'\n");
						animation("OLD MAN: (Looking in the eyes of the boy realising a spark of fury and Enthusiasm).I am known by the name of Bawa. I was evicted from the great ELDORIA because of confronting the mad king Vilgax.\n");
						cout << name;
						animation(": Why were you evicted?");
						animation("BAWA: Because i told them a prophecy that one day a chosen one will come and destroy this destructive and torturing rule of VILGAX. I think the prophecy was true. You might be the chosen one. I can see it in your eyes....\n");
						cout << name;
						animation(": (SHOCKED) I don't know what you are saying. I don't trust on prophecies but if there were one how can I be the chosen one. I am a simple farmer who doesn't even know much spells to fight someone.\n");
						animation("BAWA: You are the chosen one who can save and free thousand of lives. Come to meet me if you want to know more. (Pointing to the trees...) I will meet you there in that cave below the 2 longest pine trees.\n");
						animation("The boy left.... thinking what he was talking about.... \n");

						Continue();

						cout << name;
						animation("(reaching home) found his father in an argument with 2 of the forever knights of eldoria who were in his farm plucking from his field. One of the knight grabbed his father from the neck and the boy went in between and threatened the knights with his sword. (Laughing...) The knights told him that he will be punished.\n\n");
						animation("The knights went back to the king and told him about the farmer and his boy. Vilgax got a flash of the boy as he maybe the chosen one. He ordered the knight to bring the boy to him. If anyone comes in the way... kill him.");
						cout << "\n\nForever knight marching towards the village.....";
						animation("\nFarmer seeing the knights goes to meet them.\n\n");

						animation("FARMER: Yes what do you want now?\n");
						animation("KNIGHT: We told you not to challenge us. Now we are here to take your baby boy on order of the king and if someone came in our way, he will be executed.\n");
						animation("FARMER: I will not give my boy. You cannot have him.\n");
						animation("KNIGHT: (Pointing sword towards farmer...) Where is he..!??\n");
						animation("FARMER: If I'd know, I would still not tell you.\n");
						animation("KNIGHT: (Attacks the farmer with his sword and also kills his wife) we will find him and he will soon join you.\n\n");

						Continue();

						animation("\nThe boy hunts down a boar with his spells and trapped him and is very happy to bring the meat to his father. As he starts chopping the boar he sees fire coming from the right. He rushes to the area and sees his house and farm all burnt down. (Shocked....) He runs towards the house where he saw his mother dead with a huge cut on the heart. He sees his father choking and wounded very badly.\n\n");
						cout << name;
						animation(": (Emotionally rushes to his father) Father what happened are you fine?");
						animation("\nFATHER: They are after you son (Coughing...)\n");
						cout << name;
						animation(": WHO? FATHER WHO....?\n");
						animation("FATHER: (Coughing...)The Fore... Forever Knig.... Knights. Take care son. (Coughs and dies)\n");
						cout << name;
						animation(": NOOOOOOOO! FATHERRRRR (Crying loudly....)");

						Continue();

						animation("The boy gets very angry and remebers the old man. He goes to the old man.....\n");
						animation("BAWA: I knew you would come. I heard they killed your parents. Do you want to avenge your parents and save millions of lives??\n");
						cout << name;
						animation(": (In angry voice) Yes I will avenge my parents and kill that Vilgax. He will die. Tell me how to do it.\n");
						animation("BAWA: I will tell you but you must promise me that you will use the power for the greater good and destroy it when the work is done....\n");
						cout << name;
						animation(": What power are you talking about? I promise I will use it for good.\n");
						animation("There is a portal in ELYSIAN ENCLOSURE which can only be opened with 3 GEMS which are located in Mystic Hallows, Luminous Glade, and Tranquil Vale. You have to get the 3 gems in order to open up the portal but you may encounter threats while finding the gems. There is a forged weapon. It is the Armour of ancient citidel master oogway holding the power to bare any attack and return half the damage. It hold power that makes the person holding it invincible that is why it cannot be in the wrong hands.\n");
						cout << name;
						animation(": I will find it and kill Vilgax and then destroy the weapon.\n\n");

						animation("He starts the journey of finding the gems.");

						Continue();

						cout << "Choose a place: \n";
						for (int j = 0; j < totalGems; j++) {
							if (!collected[j]) {
								cout << j + 1 << ". " << places[j] << endl;
							}
						}
						int option;
						cin >> option;

						if (option == 1) {

							while (true)
							{
								cout << "The Mystic Hallows\n\n";
								animation("The boy reaches the mystic hallows. A shadowy and foggy area with darkness every where. He uses a spell to make a little light. By walking couple of steps he sees a flash of light. \n\n");

								cout << "Press Enter to Continue....";
								cin.ignore();
								cin.get();

								animation("He goes forward where he finds shiny treasure. He moves forward and sees a very shiny gem there but 3 people come infront of him.....\n\n");
								animation("Person1: Who are you? You cannot take the Gem or you have to fight us....\n");
								cout << name;
								animation(": Well I am here to take the gem to open the portal and help other people and avenge my father\n");
								animation("Person2: Well then you have to fight with us..... But you will die.\n\n");

								cout << "Start the fight";

								int enemyHealth = 150;

								Continue();

								while (health != 0 || enemyHealth != 0) {

									CharacterDetail(name, warrior_class, health, enemyHealth);

									Menu();
									int userAttack = rand() % 25 + 1;
									int enemyAttack = rand() % 6 + 1;

									animation("Press Enter to attack....");
									cin.ignore();
									cin.get();

									animation("User Attack = ");
									cout << userAttack << endl << endl;
									health -= userAttack;

									animation("Enemy Attack = ");
									cout << enemyAttack << endl << endl;
									enemyHealth -= enemyAttack;
									if (health <= 0) {
										animation("You LOST! Retry\n");
										Continue();

										continue;
									}
									else if (enemyHealth <= 0) {
										animation("You WON!\n\n");
										break;
									}
								}
							}
							animation("Person3: You defeated us....\n Person2: (In shock) He might be the chosen one.... \nPerson1: No one has ever defetaed us unless according to the prophecy a chosen one will open the portal. you are the chosen one.....");

							cout << "Let us give you our powers because we cannot come with you.\n";

							cout << "Take powers.....";
							Continue();

							animation("You got the Ethereal Saphyra (Gem). You also got power of the 3 people");

							health += 150;
							inventory[1] = "Ethereal Saphyra";
							collected[0] = true;
							gems[0] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;
						}
						else if (option == 2) {
							cout << "Luminous Glade\n\n";
							animation("The boy reaches Luminous Glade, a magical forest filled with bioluminescent plants and magical creatures. ");
							cout << name;
							animation(": I can feel a strange power here.... Lets see what it is.\n\n");
							animation("He walks towards the power where he find a mystic creature (large wings, nice big beak, some aura coming out of it) which is attacking someone.\n\n");
							cout << name;
							animation(": He's getting attacked, let's help him.\n");
							cout << name;
							animation(": Hey I am coming to help\n");
							animation("MAN: No don't.\n\n");

							animation("Attacks with his sword and wounds the creature.");
							Continue();

							cout << name;
							animation(": Let's GO. (Attacking.... ahhhhhhh)\n\n");

							animation("The creature flew away by seeing his fury.\n\n");
							cout << name;
							animation(": (To the man) Who are you, Why was he attacking you? Why did he flew away?\n");
							animation("MAN: That was Aetherion Specter. A mythic creature that takes the aura of people and then feed them to everyone.(Who are you and why did you help me? What are you doing here?)\n");
							cout << name;
							animation(": (Thinking... he might know of the gem) (to the man) I am looking for a special gem that....");
							animation("MAN: Luminous Glade... You are after Luminous Glade. I don't think you should go there. Many have come and failed. \n");
							cout << name;
							animation(": Let me try, I was sent according to the prophecy.");
							animation("MAN: Many have said that but failed my boy. If you want to go then (pointing in direction) you see that cave? There it is situated but you might face Aetherion Specters. You should take this aura of mine a little, it will help your powers to grow strong and you can kill them. Also take this potion, when you need health use the potion.\n");
							cout << name;
							animation(": OK thank you.\n");
							animation("Continue to the cave....");
							Continue();

							animation("(Reaches and enters the cave) There are 3 Aetherion Specters here. Lets kill them.\n\n");

							int enemyHealth = 200;

							while (health != 0 || enemyHealth != 0) {

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();
								int userAttack = rand() % 40 + 1;
								int enemyAttack = rand() % 9 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								bool usedPotion = false;
								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;
											usedPotion = true;
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									cout << "Sorry you do not have a heath potion....";
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("Congrats! You have defeated Aetherion Specters\n GO and claim the gem.");
							animation("MAN: (Shocked) How could it be, no one has ever defeated the Aetherion Specters. Wait... You must be the chosen one. Respect to you chosen one. If there is anything you like to ask?\n");
							cout << name;
							animation(": I would like if you could give me some of those health potions....\n");
							animation("MAN: Anything for the chosen one. Here are 3 potions.\n\n");

							Continue();

							animation("You got the Luminara Crystalline(Gem). Also you got 3 healing potions");

							health += 200;

							for (int i = 0; i < 3; i++)
							{
								healthPotions[i] = "Healing Potion";
							}

							inventory[2] = "Luminara Crystalline";
							collected[1] = true;
							gems[1] = "";

							animation("Let's Continue the journey.");

							Continue();

							break;

						}
						else if (option == 3) {
							cout << "Tranquil Vale\n\n";
							animation("Reached Tranquil Vale. The place of calmness having all fantasies fairies, unicorns etc.... Maybe to protect the in need.\n\n");
							animation("Walking to a sanction near by.... (Closed door) Tries to open.... What! Spirit has arrived.\n\n");
							animation("SPIRIT: What do you seek?\n");
							cout << name;
							animation(": I seek for a gem known to....\n");
							animation("SPIRIT: Yes I know about Shadowfire Onyx. But you may face a monster in there. And if you once go in, there is no coming back.\n");
							animation("Boy replies: OK. Wish me luck\n\n");
							animation("Goes in...");

							Continue();

							animation("MONSTER: Who wants himself dead? Who has entered the sanction?\n");
							cout << name;
							animation(": I have entered the sanction and I want the Shadowfire Onyx. You cannot stop me. I am the chosen one.");
							animation("MONSTER: (Laughing...)You... Look at yourself, with just a sword, how can you say you are the chosen one? Let's see if you could defeat me.\n\n");
							Continue();

							int enemyHealth = 300;

							while (health != 0 || enemyHealth != 0) {
								bool usedPotion = IsEmpty();

								CharacterDetail(name, warrior_class, health, enemyHealth);

								Menu();

								int userAttack;
								if (!usedPotion) {
									userAttack = rand() % 30 + 1;
								}
								else {
									userAttack = rand() % 80 + 1;
								}

								int enemyAttack = rand() % 12 + 1;

								animation("Press Enter to attack....");
								cin.ignore();
								cin.get();

								animation("User Attack = ");
								cout << userAttack << endl << endl;
								health -= userAttack;

								animation("Enemy Attack = ");
								cout << enemyAttack << endl << endl;
								enemyHealth -= enemyAttack;

								if (!usedPotion) {
									if (health <= 10) {
										char choice;
										cout << "Use Potion to heal. yes(y) or no(n): ";
										cin >> choice;

										if (choice == 'y') {
											cout << "DRINKING....DRINKING....\n";
											cout << "Health fully restored";
											health = 100;

											for (int i = 0; i < 3; i++)
											{
												if (!healthPotions[i].empty()) {
													healthPotions[i] = "";
													break;
												}
											}
										}
										else if (choice == 'n') {
											break;
										}
										else {
											cout << "Invalid input!";
											continue;
										}
									}
								}
								else {
									animation("SPIRIT: You are fighting bravely, here have some power.\n");
									userAttack = rand() % 80 + 1;
								}

								if (health <= 0) {
									animation("You LOST! Retry\n");
									Continue();

									continue;
								}
								else if (enemyHealth <= 0) {
									animation("You WON!\n\n");
									break;
								}
							}

							animation("SPIRIT: You are the chosen one who have now came after decades of waiting. The gem is yours.\n");
							cout << name;
							animation(": Thank you. Farewell Spirit friend.\n\n");

							inventory[3] = "Shadowfire Onyx";
							gems[2] = "";
							collected[2] = true;

							animation("Let's continue the journey.");

							Continue();

							break;
						}
						else {
							cout << "Invalid value\n";
							system("cls");
							continue;
						}

						animation("The boy fighting with other devils and creatures from other realms has now come back to BAWA to get to know about the portal.\n\n");

						cout << name;
						animation(": (Reaches BAWA) I have got the 3 gems. Now tell me where the portal is....\n\n");
						animation("BAWA: I knew you were the chosen one, now do you still think prophecies are wrong...!?\n");
						animation("BAWA: The portal is located at ELYSIAN ENCLOSURE. You have to travel to there but when you get the Citidel Armour no one will be able to damage you rather they will get 50% of the damage. But you must destroy it after your work is done.");
						cout << name;
						animation(": Ok I will.");

						animation("The Journey to Elysian Enclosure begins");

						Continue;

						animation("Reached Elysian Enclosure. A broken building having a glow in the middle as the boy gets near it. He walks inside where he finds a large portal having 3 spaces for the gems.\n\n");

						animation("Take out gems and place them in portal...");

						Continue();

						inventory[1] = "";
						inventory[2] = "";
						inventory[3] = "";

						animation("The building is shivering with huge blow of winds. The portal opens up and he walks in. (Eyes opened) Sees a vast void with nothing but pieces of crystal and stones moving in space. He jumps on to stones to go to other small piece or area where he finds the forge of the Armour forged from the black steel of equinox.\n\n");

						inventory[4] = "Pendant";

						cout << name;
						animation(": (Teleports to Eldoria and confronts Vilgax) I am here Vilgax. I am the one BAWA told you about. You killed my parents now you will die\n");
						animation("VILGAX: What! how.....? Forever Knights... Wulcanus attack.\n\n");
						animation("With the blink of an eye, he defeated each and every one of the knight.\n");
						cout << name;
						animation(": Now it's your turn to die Vilgax.");

						cout << "Attack....";

						Continue();

						animation("Vilgax was killed and the boy won hearts of all the people in  Eldoria.\n\n ");

						cout << "choose if you want to use the armour to expand your strength or destroy it at the forge.";
						cout << "\n1. destroy\n" << "2. Keep\n";

						int choice;

						switch (choice) {
						case 2:
							animation("You must take care of the armour at all cost, if it falls in wrong hands all is doomed.\n\n");
							break;
						case 1:
							animation("Goes back to the forge and destroys the armour with the molten special lava that can only melt black steel of the equinox.");
							break;
						}
					}
					else {
						cout << "Invalid choice.\n";
						system("cls");
						continue;
					}
					break;
				}
			}
		}

		cout << "Do you want to play again? (y/n):";
		cin >> choice;

		choice = tolower(choose);

		if (choose == 'n') {
			cout << "Thanks for playing :)";
			exit(0);
		}

	} while (choose == 'y');
	








	return 0;
}
