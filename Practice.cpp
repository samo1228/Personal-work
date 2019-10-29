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

	std::string get_player_name(){ return player_name; }
	int get_age(){ return age; }
	int get_goals_scored(){ return goals_scored; }
	int get_assists(){ return assists; }

	player_class( std::string name, int player_age, int goals, int assists_made )

	{

		player_name = name;

		age = player_age;

		goals_scored = goals;

		assists = assists_made;

	}



	void display_player();



};

bool compare_name_func( player_class a, player_class b ) { return a.get_player_name() < b.get_player_name(); }
bool compare_age_func( player_class a, player_class b ) { return a.get_age() > b.get_age(); }
bool compare_goals_scored_func( player_class a, player_class b ) { return a.get_goals_scored() > b.get_goals_scored(); }
bool compare_assists_func( player_class a, player_class b ) { return a.get_assists() > b.get_assists(); }

void player_class::display_player()

{

	std::cout << "Name:" << player_name << "," << "Age:" << age << "," << "Goals Scored:" << goals_scored << "," << "Assists:" << assists << std::endl;

}



int main()

{
	std::vector<player_class> player_list;

	player_list.push_back( player_class( "Fabianski", 34, 0, 0 ) );
	player_list.push_back( player_class( "Fredericks", 27, 0, 1 ) );
	player_list.push_back( player_class( "Diop", 22, 0, 0 ) );
	player_list.push_back( player_class( "Ogbonna", 31, 0, 0 ) );
	player_list.push_back( player_class( "Cresswell", 29, 2, 0 ) );
	player_list.push_back( player_class( "Noble", 32, 1, 0 ) );
	player_list.push_back( player_class( "Rice", 20, 0, 0 ) );
	player_list.push_back( player_class( "Yarmolenko", 30, 3, 1 ) );
	player_list.push_back( player_class( "Lanzini", 26, 0, 1 ) );
	player_list.push_back( player_class( "Anderson", 26, 0, 3 ) );
	player_list.push_back( player_class( "Haller", 25, 4, 1 ) );

	std::string output_type_string;

	//get inpptu
	std::cout << "Enter Output: ";
	std::getline( std::cin, output_type_string );

	//convert string to number
	int output_id = std::stoi( output_type_string );

	switch ( output_id )
	{
	case 0:
		{
			std::cout << "West Ham squad in alphabetical order:" << std::endl;

			std::sort( player_list.begin(), player_list.end(), compare_name_func );

			for ( auto player : player_list )
			{
				player.display_player();
			}
		}
		std::cout << "" << std::endl;
		break;
	case 1:
		{
			std::cout << "West Ham squad (oldest to youngest):" << std::endl;

			std::sort( player_list.begin(), player_list.end(), compare_age_func );

			for ( auto player : player_list )
			{
				player.display_player();
			}

			std::cout << "" << std::endl;
		}
		break;
	case 2:
		{
			std::cout << "West Ham squad top scorers:" << std::endl;

			std::sort( player_list.begin(), player_list.end(), compare_goals_scored_func );

			for ( auto player : player_list )
			{
				player.display_player();
			}

			std::cout << "" << std::endl;
		}
		break;
	case 3:
		{
			std::cout << "West Ham squad top assisters:" << std::endl;

			std::sort( player_list.begin(), player_list.end(), compare_assists_func );

			for ( auto player : player_list )
			{
				player.display_player();
			}

			std::cout << "" << std::endl;
		}
		break;
	default:
		{
			std::cout << "Incorrect Input" << std::endl;
		}
		break;
	}


	

	







}
