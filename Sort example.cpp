#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

int main()
{
	std::vector<int>goal_values = { 10, 10, 10, 7, 10, 7, 10, 9, 9, 11 };
	std::sort(goal_values.begin(), goal_values.end(), [](int a, int b)
		{
			return a > b;
		});

	for (int value : goal_values)
		std::cout << value << std::endl;
	
	std::sort(goal_values.begin(), goal_values.end(), [](int a, int b)
		{
			return a < b;
		});

	std::cout << "West Ham: amount of goals scored by top goalscorer in the last 10 years (worst to best)" << std::endl;

	for (int value : goal_values)
		std::cout << value << std::endl;

	std::cin.get();


}