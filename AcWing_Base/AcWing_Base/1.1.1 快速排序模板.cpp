//#include <iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//int n;
//int q[N];
//
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;	//先置出起始点之外15、16行从起始点开始扫
//	while (i < j)
//	{
//		do i++; while (q[i] < x);	//循环停止,q[l..i]<x
//		do j--; while (q[j] > x);	//循环停止,q[j..r]>x
//		if (i < j) swap(q[i], q[j]);
//	}
//	//递归处理
//	quick_sort(q, l, j);//第三个参，取j，12行不要取q[r]，取r不要取q[l]。边界死x
//	quick_sort(q, j + 1, r);
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	quick_sort(q, 0, n - 1);
//
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//
//	return 0;
//}