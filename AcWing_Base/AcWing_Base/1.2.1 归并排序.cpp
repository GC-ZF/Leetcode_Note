//#include <iostream>
//using namespace std;
//
//const int N = 1000010;
//int n;
//int q[N], tmp[N];
//
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;	//只有一个数或者没有数返回
//	//1.确定分界点
//	int mid = l + r >> 1;
//	//2.把数组分为两部分，递归排序
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);	//递归排序左右两边
//
//	//3.归并，把两个有序的序列归并成一个
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	while (i <= mid) tmp[k++] = q[i++];	//如果右半部分先归并完，i<=mid说明左边还没归并，把剩余的给tmp
//	while (j <= r) tmp[k++] = q[j++];	//如果左半部分先归并完，j<=r  说明右边还没归并，把剩余的给tmp
//
//	for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];	//因为是递归处理切记i=l!!!临时数组存回q[]
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	merge_sort(q, 0, n - 1);
//
//	for (int i = 0; i < n; i++) printf("%d ", q[i]);
//
//	return 0;
//}