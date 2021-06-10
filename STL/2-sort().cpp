
// 1
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <execution>

// using namespace std;

// int main()
// {
//     vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
//     sort(par, vec.begin(), vec.end());
//     for (auto ele : vec)
//     {
//         cout << ele << " ";
//     }
//     return 0;
// }

// 2

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <execution>
// using namespace std;

// class Point
// {
// public:
//     int x;
//     int y;
//     //Point(int x = 0, int y = 0) : x{x}, y{y} {}
//     Point(int a = 0, int b = 0)
//     {
//         x = a;
//         y = b;
//     }
//     bool operator<(const Point &P1)
//     {
//         return (x + y) < (P1.x + P1.y);
//     }
// };
// int main()
// {
//     vector<Point> v{{1, 2}, {3, 1}, {0, 1}};
//     sort(v.begin(), v.end());
//     for (auto i : v)
//     {
//         cout << i.x << " " << i.y << endl;
//     }
//     return 0;
// }

// 3
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <execution>

// using namespace std;

// struct
// {
//     bool operator()(int a, int b) const
//     {
//         return a < b;
//     }
// } customless;

// int main()
// {
//     vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
//     sort(vec.begin(), vec.end());
//     for (auto ele : vec)
//     {
//         cout << ele << " ";
//     }
//     return 0;
// }

// 4 sort using lamda expression
#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

using namespace std;

int main()
{
    vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
    sort(vec.begin(), vec.end(), [](int a, int b)
         { return a < b; });
    for (auto ele : vec)
    {
        cout << ele << " ";
    }
    return 0;
}