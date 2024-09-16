#include<stdio.h>
int main() {
	int i, j;
	int mat[3][3];
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
		printf("Digite o valor de %d,%d: ", i, j);
		scanf("%d", &mat[i][j]);
		}
	}
	printf("Matriz:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(mat[i][j]%2 == 0) {
			printf("Posicao(%d,%d) = %d\n ", i, j, mat[i][j]);	
			}
		}
	}
		
	
	return 0;
}