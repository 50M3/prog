#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void sinus_ausgeben();

int main()
{
    sinus_ausgeben();
    getchar();
    return 0;
}

namespace mysinus
{

    typedef struct
    {
        float xmin, xmax;
        int num_punkte;
        float *werte;
    } stuetzstellen;

    stuetzstellen *sinus(float xmin, float xmax, int npunkte)
    {
        stuetzstellen *s = new stuetzstellen;
        s->xmin = xmin;
        s->xmax = xmax;
        s->num_punkte = npunkte;
        s->werte = new float[npunkte];
        float schrittweite = (xmin - xmax) / npunkte;
        for (int i = 0; i < npunkte; ++i) {
            s->werte[i] = sin(xmin + i * schrittweite);
        }
        return s;
    }
}

void sinus_ausgeben()
{
    int i, j, x, y;
    cout << "Punkte auf der X Achse: ";
    cin >> x;
    cout << "Punkte auf der Y Achse: ";
    cin >> y;
    char *raster = new char[x*y];
    mysinus::stuetzstellen *s = mysinus::sinus(0, 6.3, x);
    for (i = 0; i < x*y; ++i)
        raster[i] = ' ';
    for (i = 0; i < x; ++i) {
        int pos = (int)(s->werte[i] * (y / 2) + (y / 2));
        if (pos < 0) pos = 0;
        if (pos > y - 1) pos = y - 1;
        raster[pos*x + i] = '*';
    }
    ofstream ofs("sinus.txt", ofstream::out);
    for (i = 0; i < y; ++i) {
        for (j = 0; j < x; ++j) {
            cout << raster[i*x + j];
            ofs << raster[i*x + j];
        }
        cout << endl;
        ofs << endl;
    }
    ofs.close();
    delete [] raster;
    delete [] s->werte;
    delete s;
}
