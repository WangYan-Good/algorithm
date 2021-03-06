# algorithm
算法刷题

## 插入算法
直接插入排序
  算法思想：有序序列L[1...i-1] L[i] 无序序列L[i+1...n]
            (1) 找出L[i]在有序序列L[1...i-1]中的插入位置k
            (2) 将L[k...i-1]中的所有元素依次后移一个位置
            (3) 将L[i]复制到L[k]
  比较次数：θ(N2)
  移动次数：Θ(N2)
  平均算法复杂度：θ(N2)
  最坏情况下时间复杂度：θ(N2)
  稳定性：Y
  适用情况：数据表基本有序，数据量不大

折半插入排序
  算法思想：
  比较次数：θ(Nlog(N))
  移动次数：Θ(N2)
  平均算法复杂度：Θ(N2)
  最坏情况下时间复杂度：θ(N2)
  稳定性：Y
  适用情况：数据表基本有序，数据量不大

希尔排序
  算法思想：先将待排序表分割成若干形如L(i,i+d,i+2d,...,i+kd)的特殊子表，即把相隔某个“增量”的记录组成一个子表，对各个子表进行直接插入排序，，当整个表中的元素已呈“基本有序”时，再对全体记录进行一次直接插入排序
            (1) 先取一个小于n的步长d1，把表中的记录分成d1组，所有距离为d1的倍数的记录放在同一组，在各组内进行直接插入排序
            (2) 取第二个步长d2 < d1，重复(1)中的过程，直到所取到的dt = 1，即所有记录已放在同一组中，再进行直接插入排序，由于整个表已基本有序，因此会很快结束
  平均算法复杂度：在某个特定范围内，时间复杂度约为θ(N1.3)，其时间复杂度依赖于增量序列的函数
  最坏情况下的时间复杂度：θ(N2)
  稳定性：N
  适用情况：线性表为顺序存储的情况

## 选择排序
简单选择排序
  算法思想：
  平均算法复杂度：θ(N2)
  最坏情况下时间复杂度：θ(N2)
  稳定性：N
  适用情况：

堆排序

## 交换排序
冒泡排序
  算法思想：从前往后，两两比较相邻元素，若为逆序(A[i-1] > A[i])，则交换它们，直到序列比较完，直到不发生交换时，说明表已有序，冒泡排序结束
  平均算法复杂度：θ(N2)
  最坏情况下时间复杂度：θ(N2)
  稳定性：Y
  适用情况：数据表基本有序，数据量不大

快速排序
  算法思想：基于分治法，在待排序表L[1...n]中任取一个元素pivot作为枢轴(或基准，通常取首元素)，通过一趟排序将待排序表划分为独立的两部分L[1...k-1]和L[k+1...n]，使得L[1...k-1]中的元素都小于pivot，L[k+1...n]中的元素都大于pivot,则pivot放在了其最终位置L[k]上，这个过程称为一趟快速排序。然后分别递归地对两个字表重复上述过程，直至每部分内只有一个元素为空为止，即所有元素放在了其最终位置上。
  比较次数：
  移动次数：
  平均算法复杂度：θ(Nlog(N))
  最坏情况下时间复杂度：θ(N2)
  稳定性：N
  适用情况：快排的适用情况与划分是否对称有关，初始条件为基本有序或基本逆序时，接近最坏情况θ(N2)，该算法适用于数据中分的枢轴元素，数据表无序情况

## 归并排序
归并排序

## 表排序
表排序

## 基数排序
桶排序
基数排序
  稳定性：Y
  平均算法复杂度：θ(d(n+r))
  适用情况：关键字位数较少的数据
