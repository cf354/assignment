#include <iostream>

void setPotion(int count, int* p_HPPotion, int* p_MPPotion);

int main() {
	std::cout << "HP�� MP�� �Է� ���ּ���." << std::endl;
	int arr[5] = { 0,0,0,0,0 };
	

	do {
		std::cin >> arr[0]>>arr[1];
		
		if (arr[0] <= 50 || arr[1] <= 50)
			std::cout << "Wrong input. HP,MP must bigger than 50" << std::endl;
	} while (arr[0] <= 50 || arr[1] <= 50);

	std::cout << "attack�� defense�� �Է� ���ּ���." << std::endl;
	
	do {
		std::cin >> arr[2] >> arr[3];
		
		if (arr[2] <= 0 || arr[3] <= 0) {
			std::cout << "Wrong input. attack,defense must bigger than 0" << std::endl;
		}
		
	} while (arr[2] <= 0 || arr[3] <= 0);
	int* p_HPPotion=new int;
	int* p_MPPotion=new int;
	int count = 5;
	setPotion(count, p_HPPotion, p_MPPotion);
	std::cout << "* ������ ���޵Ǿ����ϴ�. (HP,MP ���� �� "<< count <<"��)"<< std::endl;
		 
	std::cout << "HP :" << arr[0] << " MP :"<< arr[1] <<std::endl;
	std::cout << "attack :" << arr[2] << " defense :" << arr[3] << std::endl;

	std::cout << "1.HP ȸ��" << std::endl;
	std::cout << "2.MP ȸ��" << std::endl;
	std::cout << "3.HP ��ȭ" << std::endl;
	std::cout << "4.MP ��ȭ" << std::endl;
	std::cout << "5.���� ��ų ���" << std::endl;
	std::cout << "6.�ʻ�� ���" << std::endl;
	std::cout << "7.������" << std::endl;
	std::cout << "��ȣ�� �������ּ��� :" << std::endl;

	
	while (true) {
		int input = 0;
		std::cin >> input;
		if (input == 1) {
			
			if (*p_HPPotion <= 0) {
				std::cout << "������ �����մϴ�." << std::endl;
			}
			else {
				*p_HPPotion -= 1;
				arr[0] += 20;
				std::cout << "HP�� 20ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�. ���� ���� �� : " << *p_HPPotion << std::endl;
				std::cout << "���� HP : " << arr[0] << std::endl;
			}
		}
		else if (input == 2) {
			
			if (*p_MPPotion <= 0) {
				std::cout << "������ �����մϴ�." << std::endl;
			}
			else {
				*p_MPPotion -= 1;
				arr[1] += 20;
				std::cout << "MP�� 20ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�. ���� ���� �� : "<< *p_MPPotion<< std::endl;
				std::cout << "���� MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 3) {
			arr[0] *= 2;
			std::cout << "HP�� 2��� �����Ǿ����ϴ�." << std::endl;
			std::cout << "���� HP : " << arr[0] << std::endl;
		}
		else if (input == 4) {
			arr[1] *= 2;
			std::cout << "MP�� 2��� �����Ǿ����ϴ�." << std::endl;
			std::cout << "���� MP : " << arr[1] << std::endl;
		}
		else if (input == 5) {
			
			if (arr[1] < 50) {
				std::cout << "��ų ����� �Ұ��մϴ�." << std::endl;
			}
			else {
				arr[1] -= 50;
				std::cout << "* ��ų�� ����Ͽ� MP�� 50 �Ҹ�Ǿ����ϴ�." << std::endl;
				std::cout << "���� MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 6) {
			if (arr[1] <= 0) {
				std::cout << "��ų ����� �Ұ��մϴ�." << std::endl;
			}
			else {
				arr[1] /= 2;
				std::cout << "* ��ų�� ����Ͽ� MP�� 50% �Ҹ�Ǿ����ϴ�." << std::endl;
				std::cout << "���� MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 7) {
			std::cout << "���α׷��� �����մϴ�." << std::endl;
			return 0;
		}
		else {
			std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		}
	}


}
void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
	*p_HPPotion = count;
	*p_MPPotion = count;
	

	return;
}