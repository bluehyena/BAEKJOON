#include <iostream>

using namespace std;

class Baseball {
public:
	bool base1 = false;
	bool base2 = false;
	bool base3 = false;
	int score = 0;
	int ballcount = 0;

	void oneCount(int number) {
		if (number == 1) { // º¼ÀÎ°æ¿ì
			if (ballcount == 3) {
				if (base1 == false) {
					this->base1 = true;
					this->ballcount = 0;
				}
				else if (base2 == false) {
					this->base2 = true;
					this->ballcount = 0;
				}
				else if (base3 == false) {
					this->base3 = true;
					this->ballcount = 0;
				}
				else {
					this->ballcount = 0;
					this->score += 1;
				}
			}
			else {
				this->ballcount += 1;
			}
		}

		else if (number == 2) { // ¸ö¿¡ ¸Â´Â °øÀÎ °æ¿ì
			if (base1 == false) {
				this->base1 = true;
				this->ballcount = 0;
			}
			else if (base2 == false) {
				this->base2 = true;
				this->ballcount = 0;
			}
			else if (base3 == false) {
				this->base3 = true;
				this->ballcount = 0;
			}
			else {
				this->ballcount = 0;
				this->score += 1;
			}
		}

		else if (number == 3) { // ÆøÅõÀÎ °æ¿ì
			if (ballcount == 3) { // ÆøÅõ¿Í º¼³ÝÀÌ °ãÄ¥¶§
				if (base3 == true) {
					base3 = false;
					this->score += 1;
				}
				if (base2 == true) {
					base2 = false;
					this->base3 = true;
				}
				if (base1 == true) {
					base1 = false;
					this->base2 = true;
				}
				this->ballcount = 0;
				this->base1 = true;
			}
			else {
				if (base3 == true) {
					base3 = false;
					this->score += 1;
				}
				if (base2 == true) {
					base2= false;
					this->base3 = true;

				}
				if (base1 == true) {
					base1 = false;
					this->base2 = true;

				}
				this->ballcount += 1;
			}
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num;
	Baseball baseball;

	for (int i = 0; i < N; ++i) {
		cin >> num;
		baseball.oneCount(num);
	}

	cout << baseball.score;

	return 0;
}