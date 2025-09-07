/*A. Twin Permutations
time limit per test1 second
memory limit per test256 megabytes
You are given a permutation†
 a
 of length n
.

Find any permutation b
 of length n
 such that a1+b1≤a2+b2≤a3+b3≤…≤an+bn
.

It can be proven that a permutation b
 that satisfies the condition above always exists.

†
 A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array), and [1,3,4]
 is also not a permutation (n=3
 but there is 4
 in the array).

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤2000
) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of permutations a
 and b
.

The second line of each test case contains n
 distinct integers a1,a2,…,an
 (1≤ai≤n
) — the elements of permutation a
. All elements of a
 are distinct.

Note that there is no bound on the sum of n
 over all test cases.

Output
For each test case, output any permutation b
 which satisfies the constraints mentioned in the statement. It can be proven that a permutation b
 that satisfies the condition above always exists.

Example
InputCopy
5
5
1 2 4 5 3
2
1 2
1
1
3
3 2 1
4
1 4 3 2
OutputCopy
1 2 4 3 5
2 1
1
1 2 3
1 2 3 4
Note
In the first test case a=[1,2,4,5,3]
. Then the permutation b=[1,2,4,3,5]
 satisfies the condition because 1+1≤2+2≤4+4≤5+3≤3+5
.


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        // Apply the formula: mirror around n+1
        for (int i = 0; i < n; i++) {
            b[i] = n + 1 - a[i];
        }

        // Print the result
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}
