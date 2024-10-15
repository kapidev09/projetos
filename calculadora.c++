#include <iostream>
 using namespace std;
  int main(){
     int num1,num2,resultado;
     char operador;
    
    while (true)
    {
     cout<<endl;
     cout<<"calculadora"<<endl;
     cout<<"digie um numero:"<<endl;
     cin>>num1;
     cout<<"agora escolha um operador: "<<endl;
     cin>>operador;
     cout<<"digite seu segundo número: "<<endl;
     cin>>num2;
     
 switch (operador){
         case '+':
          resultado = num1 + num2;
          cout<<"você escolheu conta de mais o valor deu: "<<resultado;
          break;
         case '-':
         resultado = num1-num2;
         cout<<"você escolheu conta de menos o valor deu: "<<resultado;
          break;
         case '*':
          resultado = num1*num2;
          cout<<"você escolheu conta de multiplicação o valor deu: "<<resultado;
          break;
         case '/':
          resultado = num1/num2;
          cout<<"você escolheu conta de divisão o valor deu: "<<resultado;
          break;
          default:
           cout<<"operador invalido";
      };

 
    };
    
    
  



    return 0;
  }