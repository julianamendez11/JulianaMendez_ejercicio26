
#include <iostream>
#include <fstream>
using namespace std;


void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename);
void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename);

int main(){
  float omega=1;
  float delta_t=1/2;
    
  solve_equation_euler(0.0, 10000.0, delta_t, omega, "euler.dat");
  solve_equation_rk4(0.0, 10000.0, delta_t, omega, "rk.dat");
  solve_equation_leapfrog(0.0, 10000.0, delta_t, omega, "leapfrog.dat");
 
  return 0;
}

void solve_equation_euler(float t_init, float t_end, float delta_t, float omega, string filename){
  float t=t_init;
  float y=1.0;
  float z=0;
  ofstream outfile;
  outfile.open(filename);

      
  while(t<t_end){    
    float y_old=y;
    float z_old=z;
    outfile << t << " " << y << " " << z <<endl;
    z = z - delta_t * omega*omega  * y_old;
    y = y + delta_t * z_old;
    t = t + delta_t;
  }
  outfile.close();
}

void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename)
{
    float t=t_init;
    float y=1.0;
    float z=0;
    float omega=1;
    float delta_t=1/2;

    float y_n;
    float z_n;
    float f;
    float f0;
    float f1;
    float f2;
    float f3;
    ofstream outfile;
    outfile.open(data);

    while(t<=t_end){
        f0=-pow(omega,2)*y;
        f1=-pow(omega,2)*(y+delta_t*f0/2);
        f2=-pow(omega,2)*(y+delta_t*f1/2);
        f3=-pow(omega,2)*(y+delta_t*f2/2);
        
        
        f=(f0+2*f1+2*f2+f3)/6;
        z_n = z + f*delta_t;
        y_n = y + z_n*delta_t;
        outfile << t << " " << y << " " << z <<endl;
        y=y_n;
        z=z_n;
        t = t + delta_t;
   }
}

void solve_equation_leapfrog(float t_init, float t_end, float delta_t, float omega, string filename)
{
    float t=t_init;
    float y=1.0;
    float z=0;
    float omega=1;
    float delta_t=1/2;
    ofstream outfile;
    outfile.open(data);
    
    while(t<t_end)
    {
    z= z+ -pow(omega,2)*y*(delta_t/2);
    y= y + z*(delta_t);
    z= z+ -pow(omega,2)*y*(delta_t/2);
    
    outfile << t << " " << y << " " << z <<endl;
    t = t + delta_t;
    }
     
}

