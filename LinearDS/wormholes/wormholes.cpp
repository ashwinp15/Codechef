# include <iostream>
# include <vector>
# include <bits/stdc++.h>
# include <cstdio>

int takeTest (std::pair<int, int> testTimes[], int wormV[], int wormW[], int N, int X, int Y)
{
	 // initialising bestTime to the largest possible time
	 int bestTime = wormW[Y-1] - wormV[0] + 1;
	 for (int i=0; i<N; i++)
	 {
			int entry= 0;
			int exit = Y-1;
			// 	int flag1 = 0;
			// 	int flag2 = 0;
			if ((testTimes[i].second - testTimes[i].first + 1) < bestTime)
			{
				 for (int j=X-1; j>0; j--)
				 {
						if (wormV[j] <= testTimes[i].first)
						{
							 entry = j;
							 break;
						}
				 }
				 for (int j=0; j<Y; j++)
				 {
						if (wormW[j] >= testTimes[i].second)
						{
							 exit= j;
							 break;
						}
				 }
				 int thisTime = wormW[exit] - wormV[entry] + 1;
				 if (thisTime < bestTime)
				 {
						bestTime = thisTime;
				 }
	    }
	 }

	 return bestTime;
}


int main()
{
	 int N, X, Y;
	 std::scanf("%d%d%d", &N, &X, &Y);
	 std::pair<int, int> testTimes[N];
	 int  wormV[X], wormW[Y];

	 for (int i=0; i<N; i++)
	 {
			std::cin >> testTimes[i].first >> testTimes[i].second;
	 }

	 for (int i=0; i<X; i++)
	 {
			std::cin >> wormV[i];
	 }

	 for (int i=0; i<Y; i++)
	 {
			std::cin >> wormW[i];
	 }

	 // sorting all the timestamps
	 std::sort(testTimes, testTimes+N);
	 std::sort(wormV, wormV+X);
	 std::sort(wormW, wormW+Y);

	 std::cout << takeTest(testTimes, wormV, wormW, N, X, Y);

	 return 0;
}
