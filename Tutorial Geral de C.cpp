//Autor:Matheus Brenner de Negreiros Brito 14/08/2022
//Podemos realizar coment�rios usando "//" , a linha inteira do programa ser� dedicada para se comentar , n�o afetando o c�digo.

/*Contudo , se precisarmos usar mais de uma linha para comentarmos ,
podemos escrever o que quisermos entre "/*---*/ /* usando quantas linhas forem preciso.*/

/* Hora de aprender sobre as bibliotecas , elas s�o essenciais para contruir desde os programas mais bas�cos
para incluirmos uma biblioteca no nosso programa usamos o comando #include <nome da biblioteca> , como pode ver 
abaixo , utilizaremos 4 bibliotecas */
#include <stdio.h>
/*A biblioteca "stdio.h" , vem de "studio input output" , ou seja , com ela o usu�rio pode colocar valores e 
o programa pode mostrar valores na tela , usamos para comandos como "scanf" e "printf"*/
#include <stdlib.h>
/*A biblioteca "stdlib,h" , vem de "studio libary" , ela � usada para aloca��es de mem�ria e de valores , junto 
da "stdio.h" , s�o as bibliotecas mais primordiais , n�o se consegue ir muito longe sem elas*/
#include <windows.h>
/*A partir daqui , as ultimas duas bibliotecas ser�o apenar para deixarmos o programa mais intuitivo e interativo
a biblioteca "windows.h" possui muitas funcionalidades , porem , utilizaremos apenas o comando "system" , para deixar
o programa mais bonito*/
#include <locale.h>
/*Por ultimo utilizaremos a biblioteca "locale.h" simplismente para mudar a linguagem do programa , sem o comando 
"setlocale(LC_ALL,"portuguese")" , não consiguiriamos usar letras com acentos por exemplo.*/

/*Aqui ir� come�ar realmente nosso programa , para fazer um programa simples basta usar :
int main()
{
  (onde todos os comandos ficar�o)
}
Essa estrutura possui algumas varia��es , porem esta � sua forma mais fundamental , e sem isso n�o tem programa
(Lembrando que todo o programa deve estar entre as {})*/
int main(){
	setlocale (LC_ALL, "portuguese");//Aqui mudamos a linguagem do nosso programa para portugu�s
	//nunca esque�a ! use ";" no final de qualquer comando (exeto alguns casos que mostrarei adiante)
	//Agora vamos definir as vari�veis que nosso programa utilizar�
	int Numero1, Numero2, Resultado;//Aqui definimos vari�veis do tipo inteiro , que s�o numero , possitivos ou negativos entre -32768 e 32768
	float ResultadoDiv;//Vari�veis do tipo "float" , nada mais s�o numeros reais (ex: 5.38 , 4.32)
	char Operacao;//Vari�veis tipo char s�o basicamente caracteres (letras)
	//observe que mesmo mudando a lingua para portugu�s , n�o podemos usar acentua��o nem "�" no c�digo principal
	
	/*Agora iremos digitar a parte inicial do programa que ir� Escrever na tela e depois ler o que o usu�rio digitar depois de apertar enter
	para isso usaremos dois comandos "printf" e "scanf"*/
	
	volta ://Um R�tulo , usaremos isso para que o programa possa fazer v�rias opera��es
	
	printf("Digite qual opera��o deseja fazer \nSoma = +\nSubitra��o = -\nMultiplica��o = *\nDivis�o = \\\nFatorial = !\n");
	
	/*Note algumas coisas interesantes que usamos neste comando, note que todo texto est� entre aspas , v� esses "\n"? , eles n�o aparecer�o na tela , 
	em vez disso o "\n" diz para o programa pular uma linha , existem alguns comandos que podemos fazer com algum caractere sequido de "\" , mas n�o 
	ser� util para n�s por enquanto */
 
 scanf("%c",&Operacao);
 
 /*Ok , mais algumas coisas para se notar , primeiro que temos que colocar um "%tipo" , para dizer para o programa que ele deve ler tal tipo de vari�vel , nesse caso
 c de caractere , segundo note que terminamos o "%c" com uma virgula e colocamos um "&" , sem esse "&" , o programa n�o associa o valor que o usu�rio digitar � vari�vel
 , ent�o preste muita aten��o , pois � facil de esquecer esse detalhe , depois voc� escreve o nome da vari�vel conforme acima*/ 
 
 /*Usaremos agora um if para verificar se o usu�rio colocou algo que nosso programa vai entender , nesse caso uma opera��o dentre as op��es que demos */
 if((Operacao=='+')||(Operacao=='-')||(Operacao=='*')||(Operacao=='\\')||(Operacao=='!')) {
 	/*Um "if" � nada mais que um "se" , quando o programa chega nele , se a vefirica��o dele der como correta , ele executar� todos os comandos dentro dos {}
 	note que usamos um '||' , ele se traduz para um "ou" , se traduzirmos esse if para o portugu�s ficaria algo como 
 	"se opera��o igual a + ou igual a - ou igual a * ou igual a \ ou igual a ! fa�a isso"
 	esse "ou" � para dizer que se pelo menos uma das senten�as for verdadeira , o if ser� verdadeiro , pesquise "operadores relacionais em c" para saber mais */
 	//OBS N�o confundir "=" com "==" , o primeiro voc� atribui um valor a vari�vel , o segundo serve para comparar se duas coisas s�o iguais
 	//Agora que j� sabemos que o usu�rio colocou uma das op��es que demos a ele , usaremos um switch para saber qual conta devemos fazer 
 	system("cls"); //comando para limpar a tela , sem ele os textos se acumulariam 
 	switch (Operacao) {
 		/*O switch funciona da seguinte forma , a gente seleciona uma coisa , e damos v�rias situa��es , caso essa coisa bata com alguma situa��o , os comandos dessa 
 		situa��o*/
 		case '+' :
 			printf("Digite dois numeros para a soma :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 + Numero2;//Veja que "=" est� sendo usado para definir o valor para resultado
 			printf("Resultado da soma : %d\n", Resultado);//Perceba que onde colocar o %d , ser� onde vai ser escrito a vari�vel , e que n�o precisamos de "&"
 			system("pause");//Este comando pausa a opera��o at� que o usu�rio aperte alguma tecla
 			system("cls");
 			goto volta;//Lembra do r�tulo? , ent�o , esse comando faz com que o c�digo volte at� onde o r�tulo est�
 			break;// Para cada case , voc� ter� que usar um break para determinar onde cada caso para
 			
 			case '-' :
 			printf("Digite dois numeros para a subtra��o :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 - Numero2;
 			printf("Resultado da subitra��o : %d\n", Resultado);
 			system("pause");
 			system("cls");
 			goto volta;
 			break;
 			
 			case '*' :
 			printf("Digite dois numeros para a multiplica��o :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 * Numero2;
 			printf("Resultado da multiplica��o : %d\n", Resultado);
 			system("pause");
 			system("cls");
 			goto volta;
 			break;
 			
 			case '\\' :
 			printf("Digite dois numeros para a divis�o :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			ResultadoDiv = Numero1 / Numero2;//Perceba que diferente dos outros casos usamos outra vari�vel para o resultado
 			printf("Resultado da divis�o : %.2f\n", ResultadoDiv);// e para escrevela usamos %.(numero de casas decimais desejadas)f , pois � um float
 			/*importante lembrar que para usar um scanf com um float apenas precisamos colocar um %f*/
 			system("pause");
 			system("cls");
 			goto volta;
 			break;
 			
 			case '!' :
 				printf("digite o numero que deseja saber a fatorial :");
 				scanf("%d",&Numero1);
 				Resultado = Numero1;
 				Numero1 = Numero1 - 1;
 				//Agora para o fatorial , usaremos um comando mais complexo , o for 
 				for( ;Numero1>0; Numero1=Numero1-1) 
 				{
				Resultado = (Resultado*Numero1);
			  }
			  /*o comando For � complicado , mas para resumir voc� colocar� 3 senten�as , a primeira (que n�o � obrigat�ria) dir� o ponto de partida do valor para a vari�vel
			  na segunda senten�a voc� colocar� um teste , e enquanto o teste for verdadeiro os comandos dentro do for se repetir�o , e o terceiro ser� um comando que sempre 
			  ser� executado a cada repeti��o*/
			  printf("Resultado da fatorial = %d ", Resultado);
		    system("pause");
		    system("cls");
 		   	goto volta;
 			break;
	 }
 }
 /*Usaremos este "else" para caso o usu�rio coloque uma op��o que n�o exista ,
  o else executa se o if correspondente for falso */
 else {
 	system("cls");
 	printf("Comando n�o existe , tente de novo ");
 	system("pause");
 	system("cls");
 	goto volta;
 }
}/*� isso , chegamos ao fim da calculadora , agora voc� pode colocar em pr�tica tudo que aprendeu com esse algoritmo simples , lembre-se que ainda � muito a se aprender
, se essa � sua voca��o , corra atraz e busque conhecimento*/
