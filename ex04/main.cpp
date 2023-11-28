#include <fstream>
#include <iostream>

namespace
{
	void	replaceWords(std::string& content,
						 const std::string& from,
						 const std::string& to);
}

int	main(int argc, char* argv[])
{
	std::string		fileName;
	std::string		stringOriginal;
	std::string		stringReplaced;
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		content;

	if (argc != 4)
	{
		std::cerr << "Usage: "<< argv[0] << " <input_file>"
				  << " <string_to_be_replaced>"
				  << " <string_to_replace>" << std::endl;
		return (1);
	}

	fileName = argv[1];
	stringOriginal = argv[2];
	stringReplaced = argv[3];

	inFile.open(fileName);
	if (!inFile.is_open())
	{
		std::cerr << "Can not open the file" << std::endl;
		return (1);
	}

	content.assign(std::istreambuf_iterator<char>(inFile),
				   std::istreambuf_iterator<char>());
	replaceWords(content, stringOriginal, stringReplaced);

	outFile.open(fileName + ".replace");
	if (!outFile.is_open())
	{
		std::cerr << "Cannot save the file: "
				  << fileName + ".replace" << std::endl;
		return (1);
	}
	outFile << content;

	return (0);
}

namespace
{
	void	replaceWords(std::string& content,
						 const std::string& from,
						 const std::string& to)
	{
		size_t	startPos = content.find(from, 0);

		while (startPos != std::string::npos)
		{
			content.erase(startPos, from.length());
			content.insert(startPos, to);
			startPos += to.length();
			startPos = content.find(from, startPos);
		}
	}
}
