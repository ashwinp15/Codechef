# include <iostream>
# include <vector>
# include <bits/stdc++.h>
# include <cstdio>

int takeTest (int start[], int end[], int wormV[], int wormW[], int N, int X, int Y)
{
	 // initialising bestTime to the largest possible time
	 int bestTime = wormW[Y-1] - wormV[0];
	 for (int i=0; i<N; i++)
	 {
			int entry= 0;
			int exit = Y-1;
		// 	int flag1 = 0;
		// 	int flag2 = 0;
			for (int j=X-1; j>0; j--)
			{
				 if (wormV[j] <= start[i])
				 {
						entry = j;
						break;
				 }
			}
		//	if (flag1==0)
		//	{
		//		 entry = X-1;
		//	}
			for (int j=0; j<Y; j++)
			{
				 if (wormW[j] >= end[i])
				 {
						exit= j;
						break;
				 }
			}
		//	if (flag2==0)
		//	{
		//		 exit = 0;
		//	}
			int thisTime = wormW[exit] - wormV[entry] + 1;
			if (thisTime < bestTime)
			{
				 bestTime = thisTime;
			}
	 }

	 return bestTime;
}


int main()
{
	 int N, X, Y;
	 std::scanf("%d%d%d", &N, &X, &Y);
	 int start[N], end[N], wormV[X], wormW[Y];

	 for (int i=0; i<N; i++)
	 {
			std::cin >> start[i] >> end[i];
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
	 std::sort(start, start+N);
	 std::sort(end, end+N);
	 std::sort(wormV, wormV+X);
	 std::sort(wormW, wormW+Y);

	 std::cout << takeTest(start, end, wormV, wormW, N, X, Y);

	 return 0;
}
