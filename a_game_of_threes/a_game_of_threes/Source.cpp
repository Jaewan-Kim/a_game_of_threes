#include <iostream>
#include <string>

using namespace std;

class Game
{
public:
	void begin();
	void run(int x);
};

void Game::begin()
{
	cout << "What is the input?: ";
	int userinput;
	cin >> userinput;
	while (userinput < 1)
	{
		cout << "Invalid input! What is the input?: ";
		cin >> userinput;
	}

	run(userinput);

	
}

void Game::run(int x)
{
	if (x == 1)
	{
		cout << 1 << endl;
		return;
	}
	int temp = x % 3;
	if (temp == 0)
	{
		cout << x << " " << 0 << endl;
		run(x / 3);
	}
	else if (temp == 1)
	{
		cout << x << " " << -1 << endl;
		run(x - 1);
	}
	else
	{
		cout << x << " " << 1 << endl;
		run(x + 1);
	}
}


int main()
{
	Game g;
	g.begin();
}