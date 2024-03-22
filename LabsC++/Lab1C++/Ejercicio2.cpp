#include <iostream>
using namespace std;

int main() 
{
  float velocidad_promedio, tiempo_de_viaje, distancia_total;

  // Solicitar al usuario que ingrese la velocidad promedio y el tiempo de viaje
  cout << "Ingrese la velocidad promedio (en km/h): ";
  cin >> velocidad_promedio;
  cout << "Ingrese el tiempo de viaje (en horas): ";
  cin >> tiempo_de_viaje;

  // Calcular la distancia total recorrida
  distancia_total = velocidad_promedio * tiempo_de_viaje;

  // Mostrar la distancia total recorrida
  cout << "La distancia total recorrida en el viaje es: " << distancia_total
       << " km" << endl;

  return 0;
}