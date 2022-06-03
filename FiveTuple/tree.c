#include "head.h"
struct BSTNode* CreateBSTNode(struct Data* data) {
	
	BSTNode* node = (BSTree*)malloc(sizeof(struct BSTNode));
	node->protocol = data->protocol;
	node->srcIp = data->srcIp;
	node->srcPort = data->srcPort;
	node->desIp = data->desIp;
	node->desPort = data->desPort;
	node->leftNode = NULL;
	node->rightNode = NULL;
	return node;
};
struct BSTree* CreateBSTree(struct BSTNode* node){
};
int InsertNode(struct BSTree* tree, struct BSTNode* node) {
	
};
int FindNode(struct BSTree* tree, struct BSTNode* node) {

};
int DeleteNode(struct BSTree* tree, struct BSTNode* node) {

};

void DestroyBSTree(struct BSTree* tree) {
	if (tree != NULL) {

	}
};
void InorderTraversal(BSTree tree) {
	
};
void PrintBSTNode(struct BSTNode* node) {
	printf("%d:%d:%d:%d:%d\n", node->protocol, node->desIp, node->desPort, node->srcIp, node->srcPort);
}