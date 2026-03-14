#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double v0, angle;
    double m, Cd, A, rho, dt;

    cout << "Enter launch speed: ";
    cin >> v0;

    cout << "Enter launch angle (in radians): ";
    cin >> angle;

    cout << "Enter mass: ";
    cin >> m;

    cout << "Enter drag coefficient Cd: ";
    cin >> Cd;

    cout << "Enter area A: ";
    cin >> A;

    cout << "Enter air density rho: ";
    cin >> rho;

    cout << "Enter time step dt: ";
    cin >> dt;

    double g = 9.80665;

    double vx = v0 * cos(angle);
    double vy = v0 * sin(angle);

    double x = 0.0;
    double y = 0.0;

    double maxHeight = 0.0;

    // Loop until projectile hits ground
    while (y >= 0.0)
    {
        // speed magnitude
        double v = sqrt(vx * vx + vy * vy);

        // accelerations with drag
        double ax = -(rho * Cd * A * v * vx) / (2.0 * m);
        double ay = -g - (rho * Cd * A * v * vy) / (2.0 * m);

        // Euler update velocity
        vx = vx + ax * dt;
        vy = vy + ay * dt;

        // Euler update position
        x = x + vx * dt;
        y = y + vy * dt;

        // track max height
        if (y > maxHeight)
        {
            maxHeight = y;
        }
    }

    // Output
    cout << "Maximum Height = " << maxHeight << endl;
    cout << "Range = " << x << endl;

    return 0;
}
/*
inputs with result 

Enter launch speed: 100
Enter launch angle (in radians): 0.785
Enter mass: 2
Enter drag coefficient Cd: 0.47
Enter area A: 0.05
Enter air density rho: 1.225
Enter time step dt: 0.01
Maximum Height = 84.1847
Range = 201.185

*/
