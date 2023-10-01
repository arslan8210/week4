#include <iostream>
void checkBonus(int yourPosition, int friendPosition);
using namespace std;
main() {
	int yourPosition, friendPosition;
	cout << "Enter your position: ";
	cin >> yourPosition;
	cout << "Enter your friend's position: ";
	cin >> friendPosition;
	checkBonus(yourPosition, friendPosition);
}
void checkBonus(int yourPosition, int friendPosition) {
	int positionDifference = friendPosition - yourPosition;
	if (positionDifference <= 6) {
        cout << "true" << endl;
}  
	if (positionDifference > 6){
        cout << "false" << endl;
    }
}