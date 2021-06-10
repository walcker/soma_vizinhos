/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan, Walcker
 * @data June, 9th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, i, soma;
    cout << " entre com o valor de 'm': " << endl;
    cin >> m;
    cout << " entre com o valor de 'n': " << endl;
    cin >> n;

    soma = m;

        if(n > 0){
            for(i = 0; i <= n; i++){
                soma = soma + m+1;
            }
        }else if(n < 0){
            for(i = 0; i > n+1; i--){
            soma = soma + (m-1);
            m = m-1;
            }
            cout << "Soma = " << soma << endl;
        }else{
            soma = m;
        }

        cout << soma << endl;

    return 0;
}
