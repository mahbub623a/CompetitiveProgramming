/*
    https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
*/

/*
    Mahbubur Rahman
    United International University
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define nl printf("\n")
#define Yes printf("Yes\n")
#define No printf("No\n")
#define YES printf("YES\n")
#define NO printf("NO\n")
#define one printf("1\n")
#define _one printf("-1\n")
#define zero printf("0\n")
#define True printf("true\n")
#define False printf("false\n")

#define sortV(v) sort(v.begin(), v.end())
#define sortR(v) sort(v.rbegin(), v.rend())
#define search(v, m) *m(v.begin(), v.end())
#define convert(s, t) transform(s.begin(), s.end(), s.begin(), ::t)
#define Hacked return 0
#define loop(i, s, n) for (int i = s; i < n; i++)
#define rloop(i, n, s) for (int i = n - 1; i >= s; i--)

#define scan(x, s)              \
    for (int i = 0; i < s; i++) \
        cin >> x[i];
#define print(x)              \
    for (auto &value : x)     \
        cout << value << " "; \
    cout << endl;

#define Scan(x, s1, s2)              \
    for (int i = 0; i < s1; i++)     \
    {                                \
        for (int j = 0; j < s2; j++) \
            cin >> x[i][j];          \
    }
#define Print(x)          \
    for (auto &value : x) \
    {                     \
        print(value);     \
    }

// const int h = 1e8 + 10;
// int Hash[h];
struct Student
{
    string name;
    int marks;
};

bool compare(const Student &a, const Student &b)
{
    if (a.marks != b.marks)
        return a.marks > b.marks;
    else
        return a.name < b.name;
}

void Hack()
{
    int n;
    cin >> n;

    vector<Student> students(n);

    loop(i, 0, n)
    {
        cin >> students[i].name >> students[i].marks;
    }

    sort(students.begin(), students.end(), compare);
    for (Student &student : students)
        cout << student.name << " " << student.marks << endl;
}

int main()
{
    Hack();
    Hacked;
}