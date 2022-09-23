#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    string input;
    input.clear();
    cin >> input;

    int count[26];
    memset(count, 0, sizeof(count));

    char result = input[0];

    for(int i = 0; i< input.length(); i++)
    {
        input[i] > 90 ? ++count[input[i] - 97] : ++count[input[i] - 65];

    }
    
    auto max_index = distance(count, max_element(count, count + 26));
    int temp_index = -1;

    for(int i = 0; i < 26; i++)
    {
        if(count[i] == count[max_index])
        {
            temp_index = i;
        }
        if(temp_index != -1 && max_index != temp_index)
        {
            cout << "?" << "\n";
            return 0;
        }
    }

    if(temp_index == max_index)
    {
        cout << (char)(max_index + 'A') << "\n";
    }

}