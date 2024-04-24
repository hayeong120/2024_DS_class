#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct node {
		char data;
		struct node* link;
	};
	char input = ' ';
	struct node* head, * p;
	head = (struct node*)malloc(sizeof(struct node));
	p = head;
	p->data = input;
	p->link = NULL;
	printf("데이터 입력 : ");
	scanf_s("%c", &input, 1);
	getchar();

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("데이터 입력 : ");
		scanf_s("%c", &input, 1);
		getchar();
	}
	printf("\n연결리스트 출력: \n");
	p = head->link;

	while (p != NULL) {
		printf("%c", p->data);
		p = p->link;
		if (p != NULL)printf(" -> ");
	}
	printf("\n");

	// 동적 할당받은 만큼 메모리를 해제(free()함수 사용)하는 문장이 필요함
	return 0;
}