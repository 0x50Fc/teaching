#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

 C语言 结构 函数

 */

// 单向链表
struct Node {
	int id;
	struct Node * next;
};

// 创建节点
struct Node * NodeAlloc();

// 删除节点并且删除全部子节点
void NodeDealloc(struct Node * node);

// 在 curr 前面插入节点 node
void NodeBefore(struct Node * curr,struct Node * node);

// 在 curr 后面插入节点 node
void NodeAfter(struct Node * curr,struct Node * node);

int main() {


	return 0;
}

