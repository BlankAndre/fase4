Objetivo deste programa e fazer somas, multiplicações, divisões e subtrações entre dois números e devolver o valor da operação ao utilizador. 
Para executar o projeto navega com o terminal ate a pasta do projeto onde esta calculator.c e compila o programa com gcc -o calculator calculator.c
e executa com .\calculator

Erros encontrados:

Problema: o resultado devolvido pelas funções é igual ao valor inicial de result.

Causa: não guardava o valor devolvido pela função em result e por isso result mantinha-se igual independemente de chamar as funções

Confirmação: alterei a chamada da função para incluir "result = nomeDaFunção(numberA,numberB);" voltei a executar o programa 
e obtive valores esperados