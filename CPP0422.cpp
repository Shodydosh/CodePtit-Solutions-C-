#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

// struct SinhVien
// {
//     string name;
//     string maSV;
//     string dob;
//     double gpa;
// };

// void nhapThongTinSV(SinhVien ds[], int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         cin.ignore();
//         getline(cin, ds[i].name);
//         cin >> ds[i].maSV;
//         cin >> ds[i].dob;
//         cin >> ds[i].gpa;

//         string tmp = ds[i].dob;
//         if (tmp[1] == '/')
//             tmp = '0' + tmp;
//         if (tmp[4] == '/')
//             tmp.insert(3, "0");
//         ds[i].dob = tmp;
//     }
// }

// void inThongTinSV(SinhVien ds[], int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         cout << "B20DCCN";

//         int tmp = i + 1;
//         if (tmp < 10)
//             cout << "00" << tmp;
//         else if (tmp < 100)
//             cout << "0" << tmp;
//         else
//             cout << tmp;
//         cout << ' ';

//         cout << ds[i].name << ' ';
//         cout << ds[i].maSV << ' ';
//         cout << ds[i].dob << ' ';
//         cout << setprecision(2) << ds[i].gpa << endl;
//     }
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                c++;
            }
        }
        for (long long x : a)
        {
            if (x != 0)
            {
                cout << x << " ";
            }
        }
        for (int i = 1; i <= c; i++)
        {
            cout << "0 ";
        }
        cout << endl;
    }
}
