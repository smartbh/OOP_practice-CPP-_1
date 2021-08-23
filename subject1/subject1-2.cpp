#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];

	int num = 0;
	int pay1 = 0;
	int pay2 = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원" << endl;

	while (true)
	{
		cout << "주문>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0)
		{
			
			cout << 2000 * num << "원입니다. 맛있게 드세요." << endl;
			pay1 = 2000 * num;
			pay2 += pay1;
		}

		else if (strcmp(coffee, "아메리카노") == 0)
		{
			cout << 2300 * num << "원입니다. 맛있게 드세요." << endl;
			pay1 = 2300 * num;
			pay2 += pay1;
		}

		else if (strcmp(coffee, "카푸치노") == 0)
		{
			cout << 2500 * num << "원입니다. 맛있게 드세요." << endl;
			pay1 = 2500 * num;
			pay2 += pay1;
		}
		else
		{
			cout << "잘못 입력 하셨습니다. 다시 입력해 주세요" << endl;
		}

		if (pay2 >= 20000)
		{
			cout << "오늘 " << pay2 << "원을 판매하여 카페를 닫습니다. 내일봐요~~" << endl;
			break;
		}
	}
	return 0;
}