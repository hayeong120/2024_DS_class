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
	printf("������ �Է� : ");
	scanf_s("%c", &input, 1);
	getchar();

	while (input != '0') {
		p->link = (struct node*)malloc(sizeof(struct node));
		p = p->link;
		p->data = input;
		p->link = NULL;
		printf("������ �Է� : ");
		scanf_s("%c", &input, 1);
		getchar();
	}
	printf("\n���Ḯ��Ʈ ���: \n");
	p = head->link;

	while (p != NULL) {
		printf("%c", p->data);
		p = p->link;
		if (p != NULL)printf(" -> ");
	}
	printf("\n");

	// ���� �Ҵ���� ��ŭ �޸𸮸� ����(free()�Լ� ���)�ϴ� ������ �ʿ���
	return 0;
}