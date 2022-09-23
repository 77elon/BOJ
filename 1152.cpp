#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    string input;
    input.clear();
    
    getline(cin, input);

    int count = 0;  
    
    string search;
    search.clear();
    search.append(" ");
    
	auto it = find(input.begin(), input.end(), search);	//index find!!
	while (true)
	{
		it = find(it, input.end(), search); //또 그 위치 find but,,, stack에 저장하기 위해
		if (it != input.end())
		{
            ++count;
			++it;
		}
		else
		{
			break;
		}
	}
    
    cout << count << "\n";
    
}
