//#include <iostream>
//using namespace std;
//
//typedef long long LL;
//
//const int N = 100010;
//int n;
//int q[N], tmp[N];
//
//LL merge_sort(int l, int r)
//{
//	if (l >= r) return 0;
//
//	int mid = l + r >> 1;
//	//递归处理，三种情况的前两种，res=左半边内部的逆序对数量+右半边逆序对数量
//	LL res = merge_sort(l, mid) + merge_sort(mid + 1, r);
//
//	//归并过程
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else
//		{
//			tmp[k++] = q[j++];
//			res += mid - i + 1;	//第三种情况，i>j且q[i]>q[j]，则构成逆序对
//		}
//
//	//扫尾
//	while (i <= mid) tmp[k++] = q[i++];	//如果右半部分先归并完，i<=mid说明左边还没归并，把剩余的给tmp
//	while (j <= r) tmp[k++] = q[j++];	//如果左半部分先归并完，j<=r  说明右边还没归并，把剩余的给tmp
//
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];	//临时数组存回q[]
//
//	return res;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	printf("%lld", merge_sort(0, n - 1));
//
//	return 0;
//}