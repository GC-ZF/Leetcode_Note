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
//	//1.ȷ���ֽ�㣬����λ�ã��������е�
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;	//���ó���ʼ��֮��16��17�д���ʼ�㿪ʼɨ
//	//2.������Χ��ʹ�����ȫ��С��x���ұ�ȫ������x
//	while (i < j)
//	{
//		do i++; while (q[i] < x);	//��ѭ��ֹͣ,q[l..i]<x
//		do j--; while (q[j] > x);	//��ѭ��ֹͣ,q[j..r]>x
//		if (i < j) swap(q[i], q[j]);
//	}
//	//3.�ݹ鴦��
//	quick_sort(q, l, j);//�������Σ�ȡj��12�в�Ҫȡq[r]��ȡr��Ҫȡq[l]���߽���x
//	quick_sort(q, j + 1, r);
//}
//
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