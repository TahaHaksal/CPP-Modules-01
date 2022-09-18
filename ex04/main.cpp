#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>

std::string read_whole_file(const char *path)
{
	std::ifstream	new_file(path);
	if (!new_file.is_open())
	{
		std::cerr<<"Couldn't find a file named '"<<path<<"'"<<std::endl;
		exit(1);
	}
	std::string file_contents = std::string((std::istreambuf_iterator<char>(new_file)), std::istreambuf_iterator<char>());
	new_file.close();
	return file_contents;

}

void	write_to_file(char **av, std::string str)
{
	std::string		old_path = av[0];
	std::ofstream	replace_file(old_path + ".replace");
	int				i = 0;
	bool			check = false;

	while (str[i])
	{
		int j = 0;
		while (str[i] == av[1][j])
		{
			i++;
			j++;
			if (!av[1][j])
				check = true;
		}
		i -= j;
		if (check)
		{
			i += strlen(av[1]) - 1;
			replace_file<<av[2];
			check = false;
		}
		else
			replace_file<<str[i];
		i++;
	}
	replace_file.close();
}

int	main(int ac, char **av)
{
	std::string	file_content;

	if (ac != 4)
	{
		std::cerr<<"You need to define <filename>, <s1>, <s2>"<<std::endl;
		exit(1);
	}
	file_content = read_whole_file(av[1]);
	write_to_file(&av[1], file_content);
}
