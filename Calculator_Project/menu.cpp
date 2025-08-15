#include "menu.h"

Menu::Menu() : ip(0)
{

}

void Menu::BuildMenu()
{
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "# ";
		for (int j = 0; j < 20; ++j)
		{
			if(i == 0 || i == 9)
				std::cout << "# ";
			else if (i > 0 && i < 9)
			{
				if (j != 19)
					std::cout << "  ";
				else
				{
					std::cout << "# ";
					break;
				}
			}
		}
		std::cout << '\n';
	}
}
