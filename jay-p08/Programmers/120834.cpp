#include <string>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string( age );

    for( auto s : str )
        answer += s + 49;

    return answer;
}