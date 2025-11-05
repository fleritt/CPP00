#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i;
	char c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (!std::isalpha(argv[1][i]))
			{
				std::cout << argv[1] << std::endl;
				return (0);
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			c = std::toupper(argv[1][i]);
			std::cout << c;
			i++;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}