#include <iostream>
using namespace std;

int main() {
	int i, j, matesq[10][3], matmeio[10][3], matdirei[10][3], local = 0, cad, fila, cont = 0, sn, final, nvendidos, contcorredor=0;

	for (i = 0; i <= 89; i++)
	{
		cout << endl;
		cout << "Qual local deseja sentar?" << endl;
		cout << "Esqueda - 1" << endl;
		cout << "Meio - 2" << endl;
		cout << "Direita - 3" << endl;
		cin >> local;

		cout << "Informe a cadeira que deseja sentar de 0 a 2" << endl;
		cin >> cad;
		cout << "Informe a fila que deseja sentar de 0 a 2" << endl;
		cin >> fila;


		if (local == 1)
		{
			for (i = 0; i <= 9; i++)
			{
				for (j = 0; j <= 2; j++)
				{
					if ((i == fila) && (j == cad))
					{
						if (matesq[i][j] == 1)
						{
							cout << "Este local esta indisponivel" << endl;
						}
						else
						{
							if (cad==2)
							{
								contcorredor++;
							}
							cout << "Voce escolheu o local: " << i << "-" << j << endl;
							matesq[i][j] = 1;
							cont++;
						}
					}
				}
			}
		}

		if (local == 2)
		{
			for (i = 0; i <= 9; i++)
			{
				for (j = 0; j <= 2; j++)
				{
					if ((i == fila) && (j == cad))
					{
						if (matmeio[i][j] == 1)
						{
							cout << "Este local esta indisponivel" << endl;
						}
						else
						{
							if ((cad == 0) || (cad==2))
							{
								contcorredor++;
							}
							cout << "Voce escolheu o local: " << i << "-" << j << endl;
							matmeio[i][j] = 1;
							cont++;
						}
					}
				}
			}
		}
		if (local == 3)
		{
			for (i = 0; i <= 9; i++)
			{
				for (j = 0; j <= 2; j++)
				{
					if ((i == fila) && (j == cad))
					{
						if (matesq[i][j] == 1)
						{
							cout << "Este local esta indisponivel" << endl;
						}
						else
						{
							if (cad == 0)
							{
								contcorredor++;
							}
							cout << "Voce escolheu o local: " << i << "-" << j << endl;
							matesq[i][j] = 1;
							cont++;
						}
					}
				}
			}
		}
		cout << endl;
		cout << "Deseja comprar outro assento?" << endl;
		cout << "Digite 1 - Sim ou 2 - Nao" << endl;
		cin >> sn;

		if (sn==2)
		{
			cout << "Muito obrigado pela compra!" << endl;
			cout << endl;
			cout << "Deseja finalizar o programa?" << endl;
			cout << "Digite 1 - Sim ou 2 - Nao" << endl;
			cin >> final;
			if (final==1)
			{
				i = 90;
			}
		}
	}
	nvendidos = (90 - cont);

	cout << endl;
	cout << "Foram vendidos " << cont << " assentos" << endl;
	cout << "Nao foram vendidos " << nvendidos << " assentos" << endl;
	cout << "Assentos que dão para o corredor vendidos: " << contcorredor << endl;


	return 0;
}