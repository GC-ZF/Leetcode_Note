//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	//1.确定分界点，任意位置，这里用中点
//	int x = q[l + r >> 1], i = l - 1, j = r + 1;	//先置出起始点之外9、10行从起始点开始扫
//	//2.调整范围，使得左边全部小于x，右边全部大于x
//	while (i < j)
//	{
//		do i++; while (q[i] < x);	//外循环停止,q[l..i]<x
//		do j--; while (q[j] > x);	//外循环停止,q[j..r]>x
//		if (i < j) swap(q[i], q[j]);
//	}
//	//3.递归处理
//	quick_sort(q, l, j);//第三个参，取j，12行不要取q[r]，取r不要取q[l]。边界死x
//	quick_sort(q, j + 1, r);
//}