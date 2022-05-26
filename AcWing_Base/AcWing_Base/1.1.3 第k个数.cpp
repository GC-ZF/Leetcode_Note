//#include <iostream>
//using namespace std;
//
//const int N = 100010;
//
//int n, k;
//int q[N];
//
//int quick_select(int l, int r)
//{
//	if (l == r) return q[l];
//
//	int i = l - 1, j = r + 1, x = q[l + r >> 1];
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//
//	if (k <= j) return quick_select(l, j);
//	return quick_select(j + 1, r);
//}
//
//int main()
//{
//	scanf("%d%d", &n, &k);
//
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	k--;
//	cout << quick_select(0, n - 1) << endl;
//
//	return 0;
//}