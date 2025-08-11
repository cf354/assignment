#include <iostream>

void setPotion(int count, int* p_HPPotion, int* p_MPPotion);

int main() {
	std::cout << "HP와 MP를 입력 해주세요." << std::endl;
	int arr[5] = { 0,0,0,0,0 };
	

	do {
		std::cin >> arr[0]>>arr[1];
		
		if (arr[0] <= 50 || arr[1] <= 50)
			std::cout << "Wrong input. HP,MP must bigger than 50" << std::endl;
	} while (arr[0] <= 50 || arr[1] <= 50);

	std::cout << "attack와 defense를 입력 해주세요." << std::endl;
	
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
	std::cout << "* 포션이 지급되었습니다. (HP,MP 포션 각 "<< count <<"개)"<< std::endl;
		 
	std::cout << "HP :" << arr[0] << " MP :"<< arr[1] <<std::endl;
	std::cout << "attack :" << arr[2] << " defense :" << arr[3] << std::endl;

	std::cout << "1.HP 회복" << std::endl;
	std::cout << "2.MP 회복" << std::endl;
	std::cout << "3.HP 강화" << std::endl;
	std::cout << "4.MP 강화" << std::endl;
	std::cout << "5.공격 스킬 사용" << std::endl;
	std::cout << "6.필살기 사용" << std::endl;
	std::cout << "7.나가기" << std::endl;
	std::cout << "번호를 선택해주세요 :" << std::endl;

	
	while (true) {
		int input = 0;
		std::cin >> input;
		if (input == 1) {
			
			if (*p_HPPotion <= 0) {
				std::cout << "포션이 부족합니다." << std::endl;
			}
			else {
				*p_HPPotion -= 1;
				arr[0] += 20;
				std::cout << "HP가 20회복되었습니다. 포션이 1개 차감됩니다. 남은 포션 수 : " << *p_HPPotion << std::endl;
				std::cout << "현재 HP : " << arr[0] << std::endl;
			}
		}
		else if (input == 2) {
			
			if (*p_MPPotion <= 0) {
				std::cout << "포션이 부족합니다." << std::endl;
			}
			else {
				*p_MPPotion -= 1;
				arr[1] += 20;
				std::cout << "MP가 20회복되었습니다. 포션이 1개 차감됩니다. 남은 포션 수 : "<< *p_MPPotion<< std::endl;
				std::cout << "현재 MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 3) {
			arr[0] *= 2;
			std::cout << "HP가 2배로 증가되었습니다." << std::endl;
			std::cout << "현재 HP : " << arr[0] << std::endl;
		}
		else if (input == 4) {
			arr[1] *= 2;
			std::cout << "MP가 2배로 증가되었습니다." << std::endl;
			std::cout << "현재 MP : " << arr[1] << std::endl;
		}
		else if (input == 5) {
			
			if (arr[1] < 50) {
				std::cout << "스킬 사용이 불가합니다." << std::endl;
			}
			else {
				arr[1] -= 50;
				std::cout << "* 스킬을 사용하여 MP가 50 소모되었습니다." << std::endl;
				std::cout << "현재 MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 6) {
			if (arr[1] <= 0) {
				std::cout << "스킬 사용이 불가합니다." << std::endl;
			}
			else {
				arr[1] /= 2;
				std::cout << "* 스킬을 사용하여 MP가 50% 소모되었습니다." << std::endl;
				std::cout << "현재 MP : " << arr[1] << std::endl;
			}
		}
		else if (input == 7) {
			std::cout << "프로그램을 종료합니다." << std::endl;
			return 0;
		}
		else {
			std::cout << "잘못된 입력입니다." << std::endl;
		}
	}


}
void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
	*p_HPPotion = count;
	*p_MPPotion = count;
	

	return;
}