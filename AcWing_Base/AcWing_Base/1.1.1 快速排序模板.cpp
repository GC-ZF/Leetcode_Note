//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	//1.ȷ���ֽ�㣬����λ�ã��������е�
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;	//���ó���ʼ��֮��9��10�д���ʼ�㿪ʼɨ
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