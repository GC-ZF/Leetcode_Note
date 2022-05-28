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
//	//1.确定分界点，任意位置，这里x取中点
//	int i = l - 1, j = r + 1, x = q[l + r >> 1];
//	//2.调整范围使得左边所有的数小于x，右边所有的数大于x
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	//3.k<=j说明k在左边，所以只需要对左边排序。反之对右边
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