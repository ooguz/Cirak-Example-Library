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

#ifndef Robot_h
#define Robot_h

class Robot {

	public:
		Robot(int solMotor, int sagMotor);
		void ileriGit();
		void sagaDon();
		void solaDon();
		void geriGit();
		void cwDon();
		void ccwDon();
		int vites(int vitesKac);
		int hiz;	
	private:
		int _sol;
		int _sag;
};

#endif
