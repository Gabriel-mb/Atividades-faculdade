#include <iostream>
using namespace std;

int main(){
    string vetnome[4], nomemaior, nomemenor, nome, aprp;
    float n1[4], n2[4], nes[4], mf[4], maiorm=0, menorm=0, mediageral=0;
    int ap[4], i, pvmaior=0, pvmenor=0, contap=0, contrp=0;

    for (i = 0; i <=3; i++)
    {
        cout << "Insira o nome do " << i + 1 << " aluno" << endl;
        cin >> vetnome[i];
        cout << "Insira a nota 1" << endl;
        cin >> n1[i];
        cout << "Insira a nota 2" << endl;
        cin >> n2[i];
        cout << "Insira a nota do exame semestral" << endl;
        cin >> nes[i];
    }
    
    for (i = 0; i <=3; i++)
    {
        mf[i] = ((20 * n1[i] + 35 * n2[i] + 45 * nes[i]) / 100);

        if (mf[i]<5.0)
        {
            cout << "O aluno " << vetnome[i] << " foi reprovado com uma media de: " << mf[i] << endl;
            contrp++;
            mediageral = mediageral + mf[i];
            aprp = "Reprovado";
        }
        else
        {
            cout << "O aluno " << vetnome[i] << " foi aprovado com uma media de: " << mf[i] << endl;
            contap++;
            mediageral = mediageral + mf[i];
            aprp = "Aprovado";
        }
        if (maiorm<mf[i])
        {
            nomemaior = vetnome[i];
            maiorm = mf[i];
            pvmaior = i;
        }
        else if ((menorm>mf[i]) || (menorm==0))
        {
            nomemenor = vetnome[i];
            menorm = mf[i];
            pvmenor = i;
        }

    }

    mediageral = (mediageral / 4);

    cout << "O aluno com a maior media foi: " << nomemaior << " Localizado no numero: " << pvmaior << endl;
    cout << "O aluno com a menor media foi: " << nomemenor << " Localizado no numero: " << pvmenor << endl;
    cout << "Quantidade de alunos aprovados: " << contap << endl;
    cout << "Quantidade de alunos reprovados: " << contrp << endl;
    cout << "Media geral da turma: " << mediageral << endl;
    cout << endl;
    cout << "Procure o nome de outro aluno" << endl;
    cin >> nome;

    for (i = 0; i <= 3; i++) {

        if (vetnome[i] == nome) {
            cout << "O aluno " << vetnome[i] << " Possui uma media final de: " << mf[i] << " e foi " << aprp << endl;
            i = 4;
        }

    }
    return 0;
}
