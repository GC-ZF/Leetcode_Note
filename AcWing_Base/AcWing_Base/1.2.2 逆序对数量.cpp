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
//	//�ݹ鴦�����������ǰ���֣�res=�����ڲ������������+�Ұ�����������
//	LL res = merge_sort(l, mid) + merge_sort(mid + 1, r);
//
//	//�鲢����
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else
//		{
//			tmp[k++] = q[j++];
//			res += mid - i + 1;	//�����������i>j��q[i]>q[j]���򹹳������
//		}
//
//	//ɨβ
//	while (i <= mid) tmp[k++] = q[i++];	//����Ұ벿���ȹ鲢�꣬i<=mid˵����߻�û�鲢����ʣ��ĸ�tmp
//	while (j <= r) tmp[k++] = q[j++];	//�����벿���ȹ鲢�꣬j<=r  ˵���ұ߻�û�鲢����ʣ��ĸ�tmp
//
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];	//��ʱ������q[]
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