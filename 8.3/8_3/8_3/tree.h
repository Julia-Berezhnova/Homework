#pragma once

#include <string>

struct Node;

struct Tree;

// Creates new empty tree.
Tree* createTree();

// Adds new value to the tree
void addValue(Tree* tree, std::string const &value);

void printTree(Tree* tree);

int countTree(Tree* tree);

void deleteTree(Tree* tree);
