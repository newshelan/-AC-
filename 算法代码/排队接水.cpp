#include <cstdio>
#include <iostream>
#include <algorithm>// for std::sort() ans std::pair

int main()
{
    int n;
    double sum = 0.0f;// �ܵȴ�ʱ�䡣������ double ���ͣ����������������ʱ����� int �� double ��ǿ��ת����
    std::cin >> n;
    // ��һ�ж�����һ�� pair ��̬���飬 ÿ�� pair �������� int ���ͳ�Ա��
    std::pair<int, int>* a = new std::pair<int, int>[n];// first ��Ա��ʾÿ���˵ĵȴ�ʱ�� �� second ��Ա��ʾ��š�
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i].first;
        a[i].second = i + 1;
    }

    std::sort(a, a + n);// ���� first ��Ա����ˮʱ�䣩����Ĭ�ϵ��������� ��
    for (int i = 0; i < n; ++i)
    {
        sum += a[i].first * (n - i - 1);// �� i �˵Ľ�ˮʱ����� (n - 1) - i ��Ȼ��ӵ� sum ���档
                                        // ��Ϊ���Ǵ� 0 ��ʼѭ���ģ����Գ˵�ʱ��Ҫ��һ��
        std::cout << a[i].second << ' ';
    }

    printf("\n%.2f", sum / n);// ����ָ����ʽ�����

    delete[] a;// ���������ͷ��ڴ棬��Ȼ�ⲻ��Ҫ�������Ǹ���ϰ�� ��
    return 0;
}
