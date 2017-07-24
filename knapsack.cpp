#include <iostream>

using namespace std;

int main()
{

int n, p[5], w[5], W, i;

cin >> n >> W;

for(i=0; i<n; i++)
	cin >> p[i];

for (i=0; i<n; i++)
	cin >> w[i];

float pw[5];

for(i=0; i<n; i++)
pw[i] = (float)p[i]/w[i];

for (i=0; i<n-1; i++) //Bubble Sort
{
	for(int j=0; j<n-1; j++)
	{
		if(pw[j]<pw[j+1])
		{
			swap(p[j], p[j+1]);
			swap(w[j], w[j+1]);
			swap(pw[j], pw[j+1]);
		}
	}
}


float profit=0;
i=0;
while(W>=w[i])
{
	profit += p[i];
	W = W - w[i];
	i++;
}

profit += ((float)W/w[i])*(float)p[i];

cout << "The maximum possible profit is " << profit << endl;

return 0;
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}