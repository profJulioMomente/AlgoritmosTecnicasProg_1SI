#include<stdio.h>
#include<stdlib.h>

main () {
	int d_atual, m_atual, a_atual;
	int d_nasc, m_nasc, a_nasc;
	int idade;
	
	printf("informe a data de nascimento: ");
	scanf("%d %d %d", &d_nasc, &m_nasc, &a_nasc);
	
	printf("informe a data atual: ");
	scanf("%d %d %d", &d_atual, &m_atual, &a_atual);
		
	if(a_atual > a_nasc){
		idade = a_atual - a_nasc;	
		
		if(m_atual < m_nasc) { //ainda não fez aniversario
			idade--;
			//idade = idade-1;
			//idade-=1;
		} 
		else {
			if (m_atual == m_nasc) { //estou no mes do nascimento, é preciso verificar o dia
				if(d_atual < d_nasc){
					idade--;
					//idade = idade-1;
					//idade-=1;
				}
			}
		}
			
	printf("A idade e %d\n", idade);	
		
	}
	else {
		printf("A data esta incorreta\n");
	}
	system("pause");
	
}
