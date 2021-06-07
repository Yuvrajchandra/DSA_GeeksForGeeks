// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int conversionToOne(int num)
{
	int count = 0;
	
	while (num > 1) {
		count++;

		if (num % 2 == 0)
			num = num / 2;

		else if (num % 4 == 1 || num==3)
			num = num - 1;

		else
			num = num + 1;
	}

	return count;
}


int main()
{
    int T;
    cin >> T;

    vector<int> arr;

    while (T--) {
        int inp;
        cin >> inp;
        arr.push_back(inp);
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << conversionToOne(*it) << endl;

    return 0;
}// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int conversionToOne(int num)
{
	int count = 0;
	
	while (num > 1) {
		count++;

		if (num % 2 == 0)
			num = num / 2;

		else if (num % 4 == 1 || num==3)
			num = num - 1;

		else
			num = num + 1;
	}

	return count;
}


int main()
{
    int T;
    cin >> T;

    vector<int> arr;

    while (T--) {
        int inp;
        cin >> inp;
        arr.push_back(inp);
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << conversionToOne(*it) << endl;

    return 0;
}
