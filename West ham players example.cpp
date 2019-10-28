#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

class player_class
{
private:
	std::string player_name;
	int age;
	int goals_scored;
	int assists;
	std::vector <player_class> Squad_players;
public:
	player_class(std::string name, int player_age, int goals, int assists_made)
	{
		player_name = name;
		age = player_age;
		goals_scored = goals;
		assists = assists_made;
	}

	void display_player();
	
};

void player_class::display_player()
{
	std::cout <<"Name:"<< player_name <<","<<"Age:"<< age <<"," << "Goals Scored:" << goals_scored << "," << "Assists:" << assists << std::endl;
}

int main()
{
	player_class p1("Fabianski", 34, 0, 0);
	p1.display_player();

	player_class p2("Fredericks", 27, 0, 1);
	p2.display_player();

	player_class p3("Diop", 22, 0, 0);
	p3.display_player();

	player_class p4("Ogbonna", 31, 0, 0);
	p4.display_player();

	player_class p5("Cresswell", 29, 2, 0);
	p5.display_player();

	player_class p6("Noble", 32, 1, 0);
	p6.display_player();

	player_class p7("Rice", 20, 0, 0);
	p7.display_player();

	player_class p8("Yarmolenko", 30, 3, 1);
	p8.display_player();

	player_class p9("Lanzini", 26, 0, 1);
	p9.display_player();

	player_class p10("Anderson", 26, 0, 3);
	p10.display_player();

	player_class p11("Haller", 25, 4, 1);
	p11.display_player();
}