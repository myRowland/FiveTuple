#include <stdio.h>
#include <stdint.h>

typedef struct Data {
	uint8_t protocol;
	uint32_t srcIp;
	uint16_t srcPort;
	uint32_t desIp;
	uint16_t desPort;
};
typedef struct BSTNode {
	uint8_t protocol;
	uint32_t srcIp;
	uint16_t srcPort;
	uint32_t desIp;
	uint16_t desPort;

	struct BSTNode* leftNode;
	struct BSTNode* rightNode;
}BSTNode, *BSTree;

struct BSTNode* CreateBSTNode(struct Data* data);
struct BSTree* CreateBSTree(struct BSTNode* node);
int InsertNode(struct BSTree* tree, struct BSTNode* node);
int FindNode(struct BSTree* tree, struct BSTNode* node);
int DeleteNode(struct BSTree* tree, struct BSTNode* node);
void DestroyBSTree(struct BSTree* tree);

//void InorderTraversal(struct BSTree* tree);
void PrintBSTNode(struct BSTNode* node);