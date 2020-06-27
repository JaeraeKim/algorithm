#include <bits/stdc++.h>
using namespace std;

int func1(int N) {
    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            ans += i;
    }
    return ans;
}

int func2(int arr[], int N) {
    int chk[101] = { 0, };

    for (int i = 0; i < N; i++) {
        if (chk[100 - arr[i]] == 1)
            return 1;
         chk[arr[i]] = 1;
   }
    return 0;
}

int func3(int N) {
    double sq = sqrt((double)N);
    int rm = (int)sq;

    // 실수 비교에 등호 사용 지양
    /*if (sq - (double)rm == 0)
        return 1;*/
    if (abs(sq - (double)rm) < 1e-12)
        return 1;
    return 0;
}

int func4(int N) {
    int ans = 1;

    while (true) {
        if (ans * 2 > N)
            return ans;
        ans *= 2;
    }
}

void test1() {
    cout << "****** func1 test ******\n";
    int n[3] = { 16, 34567, 27639 };
    int ans[3] = { 60, 278812814, 178254968 };
    for (int i = 0; i < 3; i++) {
        int result = func1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test2() {
    cout << "****** func2 test ******\n";
    int arr[3][4] = { {1,52,48}, {50,42}, {4,13,63,87} };
    int n[3] = { 3, 2, 4 };
    int ans[3] = { 1, 0, 1 };
    for (int i = 0; i < 3; i++) {
        int result = func2(arr[i], n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test3() {
    cout << "****** func3 test ******\n";
    int n[3] = { 9, 693953651, 756580036 };
    int ans[3] = { 1, 0, 1 };
    for (int i = 0; i < 3; i++) {
        int result = func3(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test4() {
    cout << "****** func4 test ******\n";
    int n[3] = { 5, 97615282, 1024 };
    int ans[3] = { 4, 67108864, 1024 };
    for (int i = 0; i < 3; i++) {
        int result = func4(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if (ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

int main(void) {
    test1();
    test2();
    test3();
    test4();
}