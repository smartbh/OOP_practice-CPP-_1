#include <iostream>
using namespace std;


int main() {
	
	int menu = 0, person = 0;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

	while (true)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";

		cin >> menu;

		if (menu == 1)
		{
			cout << "���κ�?" << endl;
			cin >> person;

			cout << "«�� " << person << "�κ� ���Խ��ϴ�." << endl;
		}

		else if (menu == 2)
		{
			cout << "���κ�?" << endl;
			cin >> person;

			cout << "¥�� " << person << "�κ� ���Խ��ϴ�." << endl;
		}

		else if (menu == 3)
		{
			cout << "���κ�?" << endl;
			cin >> person;

			cout << "������ " << person << "�κ� ���Խ��ϴ�." << endl;
		}

		
		else if (menu == 4)
		{
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}

		else
		{
			cout << "�ٽ� �ֹ��ϼ���!" << endl;
		}

	}

	return 0;
}