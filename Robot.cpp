/*

Robot Arduino Library v0.0.1
Copyright (C) 2017 Özcan Oğuz

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


#include "Arduino.h"
#include "Robot.h"

Robot::Robot(int solMotor, int sagMotor) {
	_sol = solMotor;
	_sag = sagMotor;
	pinMode(solMotor, OUTPUT);
	pinMode(sagMotor, OUTPUT);
}

void Robot::ileriGit() {
	analogWrite(_sol, hiz);
	analogWrite(_sag, hiz);
}

void Robot::geriGit() {
	analogWrite(_sol, 0 - hiz);
	analogWrite(_sag, 0 - hiz);
}

void Robot::sagaDon() {
	analogWrite(_sol, hiz);
	analogWrite(_sag, 0);	
}

void Robot::solaDon() {
	analogWrite(_sol, hiz);
	analogWrite(_sag, 0);
}

void Robot::cwDon() {
	analogWrite(_sol, hiz);
	analogWrite(_sag, 0 – hiz);
}

void Robot::ccwDon() {
	analogWrite(_sol, 0 - hiz);
	analogWrite(_sag, hiz);
}

int Robot::vites(int vitesKac) {
	vitesKac = constrain(vitesKac, 1, 5); 

	switch (vitesKac) {
		case 1:
			hiz = 50; break;
		case 2: 
			hiz = 100; break;
		case 3: 
			hiz = 150; break;
		case 4:
			hiz = 200; break;
		case 5:	
			hiz = 255; break;

		default: 
			hiz = 100; break;
	}

	return vitesKac;
}
