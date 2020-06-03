#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include <windows.h>



using namespace std;

float valor_total;
float porcentagem;



//FAZER A FUNÇÃO CONVERTER EM PORCENTAGEM
float converter (float n1) {
	float resultado_conversao;
	resultado_conversao=(n1/100);
	return(resultado_conversao);
}



//fUNÇAO PARA CALCULAR A VENDA NO CREDITO (30 DIAS)
float calctaxa_fixa (float porcentagem, float valor_total){
	float resultado;
	
	resultado= (porcentagem*valor_total+valor_total);
	//resultado=resultado*(-1);
	return(resultado);
}








      main () {
      	      	
      	system("color 08");
      	
      	printf("\n\n----------PROGRAMA TIO PATINHAS (nome provisorio)----------\n\n \n\n\n");
      	
      	
	int opcao;

float integral_cred;
float debito;
int parcelas_numero; 
float total; //total geral
float valorfinal_taxa;
float taxa;
float valor_integral;
float resultado;
float dias;
float variavel_temporaria; //para resultado






	printf("   Selecione a opcao de pagamento:\n\n ");
	printf("         1 para pagamento a vista\n\n ");
	printf("         2 para pagamento com cartao DEBITO\n\n");
	printf("          3 para pagamento com cartao CREDITO (30 dias)\n\n ");
	printf("         4 para pagamento cartao de CREDITO parcelas\n\n");
	
	scanf("%i", &opcao);
	
	
	if (opcao!=1 || opcao!=2 || opcao!=3 || opcao!=4) {
		printf("Opcao invalida\n\n\n\n\n");
		
	}
	
	valor_total=0;
	total=0;
	
	if (opcao==1) {
		system ("CLS");
		printf("Digite o valor total:\n ");
		scanf("%f", &valor_total);
		total= valor_total;
		printf(" O valor total e %0.2f:\n ", total);
		
	}
	
	//BLOCO VENDA NO DÉBITO
	
	 if (opcao==2) {
	 	system ("CLS");
		printf("Digite o valor da taxa (atualmente 3.5): \n");
		scanf("%f", &taxa);
		valorfinal_taxa= converter(taxa);
		printf ("Digite o valor total:\n ");
		scanf("%f", &valor_total);
		
		total= calctaxa_fixa(valorfinal_taxa, valor_total);
	
	printf("O resultado e R$%0.2f \n\n\n", total);
				
	}
	//................................................................................
	
			
		
	
	 if (opcao==3) {
	 	system ("CLS");
	
	//BLOCO VENDA CARTAO CREDITO COM TAXA COMUM
	
	printf("Digite o valor da taxa (atualmente 5.99): \n");
	scanf("%f", &taxa);
	//chamando funcao de conversao:
	valorfinal_taxa= converter(taxa);
	
	printf("Digite o valor total: \n");
	scanf("%f", &valor_total);
	
	//chamando a função abaixo
	
	total= calctaxa_fixa(valorfinal_taxa, valor_total);
	
	printf("O resultado e R$%0.2f \n\n\n", total);
	//...........................................................................
}



//BLOCO VENDA PARCELAS (agora fudeu)

float adiantamento;
float taxa_diaria;
float valor_parcela;
float total_parcelado;

//taxa diaria substitui o valor_final


 if (opcao==4){
 	system ("CLS");
	
	printf("Digite o valor da taxa fixa (sem o porcento) (atualmente 5.99): \n");
	scanf("%f", &taxa);
		
	//chamando a função que converte a porcentagem em float e a que faz o desconto fixo.
	valorfinal_taxa= converter(taxa);
	printf ("Digite o valor total: \n");
	scanf("%f", &valor_total);
	total= calctaxa_fixa(valorfinal_taxa, valor_total);
	
	printf("O resultado com a taxa fixa e R$%0.2f \n\n\n", total);
	
	printf("Digite o numero de parcelas: ");
	scanf("%i", &parcelas_numero);
	//TOTAL RECEBEU VALOR TOTAL+PARCELA FIXA
	
	
	
	if(parcelas_numero==2) {
		//30+15 (1 mes conta 30 e o segundo conta 15)
		dias=45;
		valor_parcela= total/parcelas_numero;
		
		printf("O valor da parcela e R$%0.2f \n\n\n", valor_parcela);
		
		
		//Converter a taxa de adiantamento:
		printf("Digite o valor da taxa de adiantamento (sem o porcento) (atualmente 3.35): \n");
	    scanf("%f", &taxa);
	    taxa_diaria= taxa/30;
	    printf("Taxa %0.2f dividido por 30 dias %0.2f\n\n", taxa, taxa_diaria);
	    resultado=taxa_diaria*dias;
	    printf("Resultado parcial taxa diaria x dias %0.2f\n\n ", resultado);
	    
	    //chamar função de conversao abaixo
	    resultado=converter(resultado);
	    //printf("Resultado convertido %0.2f\n\n", resultado);
	    total=resultado*valor_parcela+valor_parcela;
	    printf("O total da parcela sera de   R$%0.2f\n\n", total);
	    total_parcelado= total*parcelas_numero;
	    printf("O valor total se dividido em %i parcelas sera de : R$%0.2f\n\n ", parcelas_numero, total_parcelado);
	    
	    
	    	
}


   if(parcelas_numero==3) {
		dias=60;
		
		
		valor_parcela= total/parcelas_numero;
		
		printf("O valor da parcela e R$%0.2f \n\n\n", valor_parcela);
		
		
		//Converter a taxa de adiantamento:
		printf("Digite o valor da taxa de adiantamento (sem o porcento) (atualmente 3.35): \n");
	    scanf("%f", &taxa);
	    taxa_diaria= taxa/30;
	    printf("Taxa %0.2f dividido por 30 dias %0.2f\n\n", taxa, taxa_diaria);
	    resultado=taxa_diaria*dias;
	    printf("Resultado parcial taxa diaria x dias %0.2f\n\n ", resultado);
	    
	    //chamar função de conversao abaixo
	    resultado=converter(resultado);
	    //printf("Resultado convertido %0.2f\n\n", resultado);
	    total=resultado*valor_parcela+valor_parcela;
	    printf("O total da parcela sera de:  R$%0.2f\n\n", total);
	    total_parcelado= total*parcelas_numero;
	    printf("O valor total se dividido em %i parcelas sera de : R$%0.2f\n\n ", parcelas_numero, total_parcelado);
	}
		
		


  if(parcelas_numero==4) {
		dias=75;
		
		valor_parcela= total/parcelas_numero;
		
		printf("O valor da parcela e R$%0.2f \n\n\n", valor_parcela);
		
		
		//Converter a taxa de adiantamento:
		printf("Digite o valor da taxa de adiantamento (sem o porcento) (atualmente 3.35): \n");
	    scanf("%f", &taxa);
	    taxa_diaria= taxa/30;
	    printf("Taxa %0.2f dividido por 30 dias %0.2f\n\n", taxa, taxa_diaria);
	    resultado=taxa_diaria*dias;
	    printf("Resultado parcial taxa diaria x dias %0.2f\n\n ", resultado);
	    
	    //chamar função de conversao abaixo
	    resultado=converter(resultado);
	    //printf("Resultado convertido %0.2f\n\n", resultado);
	    total=resultado*valor_parcela+valor_parcela;
	    printf("O total da parcela sera de:  R$%0.2f\n\n", total);
	    total_parcelado= total*parcelas_numero;
	    printf("O valor total se dividido em %i parcelas sera de : R$%0.2f\n\n ", parcelas_numero, total_parcelado);
	}


if(parcelas_numero==5) {
		dias=90;
		
		valor_parcela= total/parcelas_numero;
		
		printf("O valor da parcela e R$%0.2f \n\n\n", valor_parcela);
		
		
		//Converter a taxa de adiantamento:
		printf("Digite o valor da taxa de adiantamento (sem o porcento) (atualmente 3.35): \n");
	    scanf("%f", &taxa);
	    taxa_diaria= taxa/30;
	    printf("Taxa %0.2f dividido por 30 dias %0.2f\n\n", taxa, taxa_diaria);
	    resultado=taxa_diaria*dias;
	    printf("Resultado parcial taxa diaria x dias %0.2f\n\n ", resultado);
	    
	    //chamar função de conversao abaixo
	    resultado=converter(resultado);
	    //printf("Resultado convertido %0.2f\n\n", resultado);
	    total=resultado*valor_parcela+valor_parcela;
	    printf("O total da parcela sera de:  R$%0.2f\n\n", total);
	    total_parcelado= total*parcelas_numero;
	    printf("O valor total se dividido em %i parcelas sera de : R$%0.2f\n\n ", parcelas_numero, total_parcelado);
	}
	
	if (parcelas_numero>5){
 	printf("Nao dividir mais do que em 5 parcelas: \n\n");
    }


      

}



	
	getch ();
}

	
	
	
	
	
	
	
	

