// Magic and Sword
#include <iostream>
#include <cstring>
#include <utility>
#include <cmath>

using namespace std;

struct circle {
  long double cx, cy, rad;
} circ;

struct rectangle {
  long double x0, y0, w, h, cx, cy;
} rect;

long double fire[4] = { 200, 20, 30, 50 };
long double water[4] = { 300, 10, 25, 40 };
long double earth[4] = { 400, 25, 55, 70 };
long double air[4] = { 100, 18, 38, 60 };

long double radius(char spell[], int lvl) {
  if (strcmp(spell, "fire")==0) return fire[lvl];
  if (strcmp(spell, "water")==0) return water[lvl];
  if (strcmp(spell, "earth")==0) return earth[lvl];
  if (strcmp(spell, "air")==0) return air[lvl];
}

int damage(char spell[]) {
  if (strcmp(spell, "fire")==0) return fire[0];
  if (strcmp(spell, "water")==0) return water[0];
  if (strcmp(spell, "earth")==0) return earth[0];
  if (strcmp(spell, "air")==0) return air[0];
}

int dist(int cx, int cy, int px, int py) {
  return sqrt((cx-px)*(cx-px)+(cy-py)*(cy-py));
}

int main() {
  int T, N, dmg;
  cin >> T;
  for (int i=0; i<T; ++i) {
    char spell[6];
    cin >> rect.w >> rect.h >> rect.x0 >> rect.y0;
    cin >> spell >> N >> circ.cx >> circ.cy;
    circ.rad = radius(spell, N);
    dmg = damage(spell);
    rect.cx = rect.x0 + rect.w / 2;
    rect.cy = rect.y0 + rect.h / 2;

    if (circ.cx==rect.cx && circ.cy==rect.cy) {
      cout << dmg;
    } else if (circ.cx>rect.cx && circ.cy>=rect.y0 && (circ.cy<=rect.y0+rect.h)) {
      // east
      if (circ.cx-circ.rad<=rect.x0+rect.w)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cx<rect.cx && circ.cy>=rect.y0 && circ.cy<=rect.y0+rect.h) {
      // west
      if (circ.cx+circ.rad>=rect.x0)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cy>rect.cy && circ.cx>=rect.x0 && circ.cx<=rect.x0+rect.w) {
      // north
      if (circ.cy-circ.rad<=rect.y0+rect.h)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cy<rect.cy && circ.cx>=rect.x0 && circ.cx<=rect.x0+rect.w) {
      // sourth
      if (circ.cy+circ.rad>=rect.y0)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cx>rect.cx && circ.cy>rect.cy) {
      // north east
      if (dist(circ.cx, circ.cy, rect.x0+rect.w, rect.y0+rect.h)<circ.rad)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cx>rect.cx && circ.cy<rect.cy) {
      // south east
      if (dist(circ.cx, circ.cy, rect.x0+rect.w, rect.y0)<circ.rad)
        cout << dmg;
      else 
        cout << 0;
    } else if (circ.cx<rect.cx && circ.cy>rect.cy) {
      // north west
      if (dist(circ.cx, circ.cy, rect.x0, rect.y0+rect.h)<circ.rad)
        cout << dmg;
      else
        cout << 0;
    } else if (circ.cx<rect.cx && circ.cy<rect.cy) {
      // south west
      if (dist(circ.cx, circ.cy, rect.x0, rect.y0)<circ.rad)
        cout << dmg;
      else
        cout << 0;
    }
    cout << '\n';
  }
  return 0;
}
