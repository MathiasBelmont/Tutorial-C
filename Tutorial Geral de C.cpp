//Autor:Matheus Brenner de Negreiros Brito 14/08/2022
//Podemos realizar comentários usando "//" , a linha inteira do programa será¡ dedicada para se comentar , não afetando o código.

/*Contudo , se precisarmos usar mais de uma linha para comentarmos ,
podemos escrever o que quisermos entre "/*---*/ /* usando quantas linhas forem preciso.*/

/* Hora de aprender sobre as bibliotecas , elas são essenciais para contruir desde os programas mais basícos
para incluirmos uma biblioteca no nosso programa usamos o comando #include <nome da biblioteca> , como pode ver 
abaixo , utilizaremos 4 bibliotecas */
#include <stdio.h>
/*A biblioteca "stdio.h" , vem de "studio input output" , ou seja , com ela o usuário pode colocar valores e 
o programa pode mostrar valores na tela , usamos para comandos como "scanf" e "printf"*/
#include <stdlib.h>
/*A biblioteca "stdlib,h" , vem de "studio libary" , ela é usada para alocações de memória e de valores , junto 
da "stdio.h" , são as bibliotecas mais primordiais , não se consegue ir muito longe sem elas*/
#include <windows.h>
/*A partir daqui , as ultimas duas bibliotecas serão apenar para deixarmos o programa mais intuitivo e interativo
a biblioteca "windows.h" possui muitas funcionalidades , porem , utilizaremos apenas o comando "system" , para deixar
o programa mais bonito*/
#include <locale.h>
/*Por ultimo utilizaremos a biblioteca "locale.h" simplismente para mudar a linguagem do programa , sem o comando 
"setlocale(LC_ALL,"portuguese")" , nÃ£o consiguiriamos usar letras com acentos por exemplo.*/

/*Aqui irá¡ começar realmente nosso programa , para fazer um programa simples basta usar :
int main()
{
  (onde todos os comandos ficarão)
}
Essa estrutura possui algumas variações , porem esta é sua forma mais fundamental , e sem isso não tem programa
(Lembrando que todo o programa deve estar entre as {})*/
int main(){
	setlocale (LC_ALL, "portuguese");//Aqui mudamos a linguagem do nosso programa para português
	//nunca esqueça ! use ";" no final de qualquer comando (exeto alguns casos que mostrarei adiante)
	//Agora vamos definir as variáveis que nosso programa utilizará¡
	int Numero1, Numero2, Resultado;//Aqui definimos variáveis do tipo inteiro , que são numero , possitivos ou negativos entre -32768 e 32768
	float ResultadoDiv;//Variáveis do tipo "float" , nada mais são numeros reais (ex: 5.38 , 4.32)
	char Operacao;//Variáveis tipo char são basicamente caracteres (letras)
	//observe que mesmo mudando a lingua para português , não podemos usar acentuação nem "ç" no código principal
	
	/*Agora iremos digitar a parte inicial do programa que irá¡ Escrever na tela e depois ler o que o usuário digitar depois de apertar enter
	para isso usaremos dois comandos "printf" e "scanf"*/
	
	volta ://Um Rótulo , usaremos isso para que o programa possa fazer várias operações
	
	printf("Digite qual operação deseja fazer \nSoma = +\nSubitração = -\nMultiplicação = *\nDivisão = \\\nFatorial = !\n");
	
	/*Note algumas coisas interesantes que usamos neste comando, note que todo texto está entre aspas , vê esses "\n"? , eles não aparecerão na tela , 
	em vez disso o "\n" diz para o programa pular uma linha , existem alguns comandos que podemos fazer com algum caractere sequido de "\" , mas não 
	será util para nós por enquanto */
 
 scanf("%c",&Operacao);
 
 /*Ok , mais algumas coisas para se notar , primeiro que temos que colocar um "%tipo" , para dizer para o programa que ele deve ler tal tipo de variável , nesse caso
 c de caractere , segundo note que terminamos o "%c" com uma virgula e colocamos um "&" , sem esse "&" , o programa não associa o valor que o usuário digitar á variável
 , então preste muita atenção , pois é facil de esquecer esse detalhe , depois você escreve o nome da variável conforme acima*/ 
 
 /*Usaremos agora um if para verificar se o usuário colocou algo que nosso programa vai entender , nesse caso uma operação dentre as opções que demos */
 if((Operacao=='+')||(Operacao=='-')||(Operacao=='*')||(Operacao=='\\')||(Operacao=='!')) {
 	/*Um "if" é nada mais que um "se" , quando o programa chega nele , se a vefiricação dele der como correta , ele executará todos os comandos dentro dos {}
 	note que usamos um '||' , ele se traduz para um "ou" , se traduzirmos esse if para o português ficaria algo como 
 	"se operação igual a + ou igual a - ou igual a * ou igual a \ ou igual a ! faça isso"
 	esse "ou" é para dizer que se pelo menos uma das sentenças for verdadeira , o if será verdadeiro , pesquise "operadores relacionais em c" para saber mais */
 	//OBS Não confundir "=" com "==" , o primeiro você atribui um valor a variável , o segundo serve para comparar se duas coisas são iguais
 	//Agora que já sabemos que o usuário colocou uma das opções que demos a ele , usaremos um switch para saber qual conta devemos fazer 
 	system("cls"); //comando para limpar a tela , sem ele os textos se acumulariam 
 	switch (Operacao) {
 		/*O switch funciona da seguinte forma , a gente seleciona uma coisa , e damos várias situações , caso essa coisa bata com alguma situação , os comandos dessa 
 		situação*/
 		case '+' :
 			printf("Digite dois numeros para a soma :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 + Numero2;//Veja que "=" está sendo usado para definir o valor para resultado
 			printf("Resultado da soma : %d\n", Resultado);//Perceba que onde colocar o %d , será onde vai ser escrito a variável , e que não precisamos de "&"
 			system("pause");//Este comando pausa a operação até que o usuário aperte alguma tecla
 			system("cls");
 			goto volta;//Lembra do rótulo? , então , esse comando faz com que o código volte até onde o rótulo está
 			break;// Para cada case , você terá que usar um break para determinar onde cada caso para
 			
 			case '-' :
 			printf("Digite dois numeros para a subtração :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 - Numero2;
 			printf("Resultado da subitração : %d\n", Resultado);
 			system("pause");
 			system("cls");
 			goto volta;
 			break;
 			
 			case '*' :
 			printf("Digite dois numeros para a multiplicação :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			Resultado = Numero1 * Numero2;
 			printf("Resultado da multiplicação : %d\n", Resultado);
 			system("pause");
 			system("cls");
 			goto volta;
 			break;
 			
 			case '\\' :
 			printf("Digite dois numeros para a divisão :\n");
 			scanf("%d", &Numero1);
 			scanf("%d", &Numero2);
 			ResultadoDiv = Numero1 / Numero2;//Perceba que diferente dos outros casos usamos outra variável para o resultado
 			printf("Resultado da divisão : %.2f\n", ResultadoDiv);// e para escrevela usamos %.(numero de casas decimais desejadas)f , pois é um float
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
			  /*o comando For é complicado , mas para resumir você colocará 3 sentenças , a primeira (que não é obrigatória) dirá o ponto de partida do valor para a variável
			  na segunda sentença você colocará um teste , e enquanto o teste for verdadeiro os comandos dentro do for se repetirão , e o terceiro será um comando que sempre 
			  será executado a cada repetição*/
			  printf("Resultado da fatorial = %d ", Resultado);
		    system("pause");
		    system("cls");
 		   	goto volta;
 			break;
	 }
 }
 /*Usaremos este "else" para caso o usuário coloque uma opção que não exista ,
  o else executa se o if correspondente for falso */
 else {
 	system("cls");
 	printf("Comando não existe , tente de novo ");
 	system("pause");
 	system("cls");
 	goto volta;
 }
}/*É isso , chegamos ao fim da calculadora , agora você pode colocar em prática tudo que aprendeu com esse algoritmo simples , lembre-se que ainda á muito a se aprender
, se essa é sua vocação , corra atraz e busque conhecimento*/
