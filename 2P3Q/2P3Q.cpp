# include <iostream>
# include <vector>
# include <cmath>
# include <bits/stdc++.h>

double ascending (int N)
{
	 if (N==0)
	 {
			return 1;
	 }

	 int lim = std::ceil(std::sqrt(N));
	 // std::cout << "lim " << lim << "\n";
	 std::vector<double> arr;

	 for (int i=0; i<=lim; i++)
	 {
			for (int j=0; j<=lim; j++)
			{
				 double temp = std::pow(2, i) * std::pow(3, j);
				 arr.push_back(temp);
			}
	 }

	 std::sort(arr.begin(), arr.end());
	 return arr[N];
}

int main ()
{
	 int T;
	 std::cin >> T;
	 double output[T];
	 
	 for (int i=0; i<T; i++)
	 {
			int N;
			std::cin >> N;

			output[i] = ascending(N);
	 }

	 std::cout << "Here are the outputs \n";

	 for (int i=0; i<T; i++)
	 {
			std::cout << output[i] << "\n";
	 }
	 
	 return 0;
}
