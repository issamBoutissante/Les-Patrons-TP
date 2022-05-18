#include <iostream>
#include<vector>
using namespace std;

#pragma region Carre de nombre de type quelconque.
template<typename T>
T getCarre(T nombre) {
    return nombre * nombre;
}
#pragma endregion

#pragma region Max de deux valeurs
template<typename T>
T getMax(T a,T b) {
    return a > b ? a : b;
}
#pragma endregion

#pragma region Affichage des elements de tableau avec type quelconque
template<typename T>
void afficheElements(vector<T> tab,int taille) {
    for (int i = 0; i < taille; i++)
        cout << "- L'element de l'index " << i << " est : " << tab[i] << endl;
}
#pragma endregion


int main()
{
    //Test afficheElements(vector<T> tab,int taille)
    vector<double> notes = { 19,18,19.5,20,20 };
    afficheElements<double>(notes,notes.size());

    return 200;
}