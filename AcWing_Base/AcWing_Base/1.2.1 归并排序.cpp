//#include <iostream>
//using namespace std;
//
//const int N = 1000010;
//int n;
//int q[N], tmp[N];
//
//void merge_sort(int q[], int l, int r)
//{
//	if (l >= r) return;	//ֻ��һ��������û��������
//	//1.ȷ���ֽ��
//	int mid = l + r >> 1;
//	//2.�������Ϊ�����֣��ݹ�����
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);	//�ݹ�������������
//
//	//3.�鲢����������������й鲢��һ��
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	while (i <= mid) tmp[k++] = q[i++];	//����Ұ벿���ȹ鲢�꣬i<=mid˵����߻�û�鲢����ʣ��ĸ�tmp
//	while (j <= r) tmp[k++] = q[j++];	//�����벿���ȹ鲢�꣬j<=r  ˵���ұ߻�û�鲢����ʣ��ĸ�tmp
//
//	for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];	//��Ϊ�ǵݹ鴦���м�i=l!!!��ʱ������q[]
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