#include <iostream>
using namespace std;
int calcula(int *dd, int *mm, int *aaaa)
{
  int idade, diaAtual = 18, mesAtual = 10, anoAtual = 2020;

  int diasDataNascimento = *aaaa * 360 + *mm * 30 + *dd;
  int diasAtual = anoAtual * 360 + mesAtual * 30 + diaAtual;

  int diferenca = diasAtual - diasDataNascimento;

  idade = diferenca / 360;

  *mm = diferenca / 30;

  *dd = diferenca;

  return idade;
}
int main()
{
  int dia, mes, ano;
  cin >> dia >> mes >> ano;
  ano = calcula(&dia, &mes, &ano); //pode alterar o que estah em vermelho
  cout << ano << " anos OU " << mes << " meses OU " << dia << " dias" << endl;
  return 0;
}