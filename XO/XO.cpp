#include <iostream>
using namespace std;


void draw(char c [3][3]) {

	for (int i = 1; i <= 7; i++) {
		if (i % 2 == 0) {
			for (int r = 0; r < 4; r++) {
				if (r < 3 && c[i / 3][r])  {
					cout << "|   " << c[i / 3][r] << "   ";
				}
				else {
					cout << "|\t";
				}
			}
		}
		else {
			for (int c = 0; c < 24; c++) {
				cout << "-";
			}
		}
		cout << endl;

	 }
	
}


char check_winner(char C[3][3]) {
	//check Horizontal
	for (int i = 0; i < 3; i++) {
		if (C[0][i] == C[1][i] && C[1][i] == C[2][i] && C[0][i] != ' ') {
			return C[0][i];
		}
	}
	//check Vertical
	for (int i = 0; i < 3; i++) {
		if (C[i][0] == C[i][1] && C[i][1] == C[i][2] && C[i][0] != ' ') {
			return C[i][0];
		}
	}
	//check Diagonal
	
	if (C[0][0] == C[1][1] && C[1][1] == C[2][2] && C[0][0] != ' ') {
		return C[0][0];
	}

	if (C[2][0] == C[1][1] && C[1][1] == C[0][2] && C[2][0] != ' ') {
		return C[2][0];
	}
	
	return ' ';
}

void main(){

	char c[3][3] ;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = ' ';
		}
	}
	char game_status=' ';
	bool isX = true;
	draw(c);
	int placed = 0;
	do {
		int x, y;
		cout << "input location as x y ";
		cin >> x >> y;

		while (c[x][y] != ' ' || x > 2 || x < 0 || y > 2 || y < 0) {
			cout << "Input correct location"<<endl;
			cout << "input location as x y ";
			cin >> x >> y;
		}

		if (isX) {
			c[x][y] = 'X';
		}
		else {
			c[x][y] = 'O';
		}

		placed++;
		draw(c);
		game_status = check_winner(c);
		if (game_status == ' ' && placed == 9) {
			cout << "No one Won! " << endl;
			break;
		}
		isX = !isX;

	} while (game_status == ' ');

	if (game_status == 'X')
		cout << "X Won!";
	else
		cout << "O Won!";




}