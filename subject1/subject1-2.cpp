#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];

	int num = 0;
	int pay1 = 0;
	int pay2 = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500��" << endl;

	while (true)
	{
		cout << "�ֹ�>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0)
		{
			
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��." << endl;
			pay1 = 2000 * num;
			pay2 += pay1;
		}

		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��." << endl;
			pay1 = 2300 * num;
			pay2 += pay1;
		}

		else if (strcmp(coffee, "īǪġ��") == 0)
		{
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��." << endl;
			pay1 = 2500 * num;
			pay2 += pay1;
		}
		else
		{
			cout << "�߸� �Է� �ϼ̽��ϴ�. �ٽ� �Է��� �ּ���" << endl;
		}

		if (pay2 >= 20000)
		{
			cout << "���� " << pay2 << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~" << endl;
			break;
		}
	}
	return 0;
}