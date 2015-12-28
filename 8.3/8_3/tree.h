#pragma once

#include <string>

struct Node;

struct Tree;

// Creates a new empty tree.
Tree* createTree();

void addValue(Tree* tree, std::string const &value);

void printTree(Tree* tree);

int countTree(Tree* tree);

void deleteTree(Tree* tree);
