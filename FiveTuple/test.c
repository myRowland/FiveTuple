#include "head.h"


int main(void) {
	Data* data = (Data *)malloc(sizeof(struct Data));
	BSTNode *node = CreateBSTNode(data);
	PrintBSTNode(node);
	return 0;
}