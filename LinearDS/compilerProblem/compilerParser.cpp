# include <iostream>
# include <string>
# include <vector>

int parse (std::string prefix)
{
	 int open = 0;
	 int validLength = 0;
	 std::vector<int> validArray;

	 for (int i=0; i < prefix.length(); i++)
	 {
			if (prefix.at(i) == '<')
			{
				 open++;
				 validLength++;
			}
			else
			{
				 open--;
				 validLength++;
			}

			if (open == 0)
			{
				 validArray.push_back(validLength);
				 validLength = 0;
			}

			else if (open < 0)
			{
				 validArray.push_back(validLength + open);
				 break;
			}
	 }
	 
	 int result = 0;

	 for (int i=0; i<validArray.size(); i++)
	 {
			result += validArray[i];
	 }

	 return result;
}


int main ()
{
	 int T;
	 std::cin >> T;
	 int output[T];

	 for (int i=0; i<T; i++)
	 {
			std::string prefix;
			std::cin >> prefix;
			output[i] = parse(prefix);
	 }

	 for (int i=0; i<T; i++)
	 {
			std::cout << output[i] << "\n";
	 }

	 return 0;
}
