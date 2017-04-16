/* 

Test Example
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


#include <Robot.h>

Robot robot(13, 12);

void setup() {

	robot.vites(5);

}

void loop() {

	robot.ileriGit();
	delay(500);
	robot.sagaDon();
	delay(500);
	robot.solaDon();
	delay(500);
	robot.dur();
	delay(500);

}
