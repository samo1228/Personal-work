#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

bool compare_name_func(std::string a, std::string b) { return a < b; }

int main()
{
	std::string WHU_Player_Names[] = { "Fabianski", "Fredericks", "Ogbonna", "Diop", "Cresswell", "Noble", "Rice", "Yarmolenko", "Lanzini", "Anderson", "Haller" };

	std::vector<std::string> player_vector(WHU_Player_Names, WHU_Player_Names + 11);
	std::sort(player_vector.begin(), player_vector.end(), compare_name_func);

	std::cout << "Team Lineup in position order" << std::endl;
	for (auto const& v : WHU_Player_Names)
		std::cout << v << std::endl;

	std::cout << "Team Lineup in alphabetical order" << std::endl;
	for (std::vector<std::string>::iterator it = player_vector.begin(); it != player_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}