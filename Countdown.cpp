#include <iostream>
#include <chrono>
#include <thread>

typedef unsigned int uint;

void print_countdown(const uint);
void print_take_off(const uint);

int main()
{
	print_countdown(12);
}


//Print a countdown until takeoff
//Receive the time in seconds as argument
void print_countdown(const uint take_off_time)
{

	for (uint i = 0; i < take_off_time; i++)
	{
		std::cout << "Time until takeoff :" << take_off_time - i;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		system("CLS");
	}
	
	print_take_off(5);
}

//Blink the message for Take off for a period of time
//Receive the time in seconds as paramenter
void print_take_off(const uint time)
{
	for (uint i = 0; i < time; i++)
	{
		//blick the message 5 times in a second
		for (uint i = 0; i < 5; i++)
		{
			std::cout << "Takeoff!";
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			system("CLS");
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

		}
	}

}
