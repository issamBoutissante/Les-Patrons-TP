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

#pragma region Somme des elements de tableau
template<typename T>
T getSomme(vector<T> tab) {
    T somme = 0;
    for (int i = 0; i < tab.size(); i++)
        somme += tab[i];
    return somme;
}
#pragma endregion

#pragma region Max valeur de tableau
template<typename T>
T getMax(vector<T> tab) {
    T max = 0;
    for (int i = 0; i < tab.size(); i++)
        if (max < tab[i])
            max = tab[i];
    return max;
}
#pragma endregion


int main()
{
    //Test getCarre(T nombre)
    cout << "- Le carre de 5.5 est : " << getCarre<double>(5.5) << endl;

    //Test getMax(T a,T b)
    cout << "- Le nombre max entre 10 et 10.5 est : " << getMax<double>(10, 10.5) << endl;

    //Test afficheElements(vector<T> tab,int taille)
    vector<double> notes = { 19,18,19.5,20,20 };
    afficheElements<double>(notes,notes.size());

    //Test getSomme(vector<T> tab)
    cout<<"- La somme des notes est : "<<getSomme<double>(notes)<<endl;

    //Test getMax(vector<T> tab)
    cout << "- La note max est : " << getMax<double>(notes) << endl;
    return 200;
}