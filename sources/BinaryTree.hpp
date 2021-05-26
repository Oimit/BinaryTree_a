#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace ariel
{

	template <typename T>
	class Node
	{
	public:
		T value;
		Node *left = nullptr;
		Node *right = nullptr;
		Node(T val) : value(val), left(nullptr), right(nullptr) {}
	};

	template <typename T>
	class BinaryTree
	{
	private:
		Node<T> *root = nullptr;

	public:
		BinaryTree<T>() {}
		BinaryTree<T> &add_root(T val);
		BinaryTree<T> &add_left(T parent, T left_val);
		BinaryTree<T> &add_right(T parent, T right_val);
		friend ostream &operator<<(ostream &os, const BinaryTree &b_tree)
		{
			os << "Amit Cohen" << endl;
			return os;
		}
		//	Node<T> &get_root();
		//	/* const Node *findValue(const T &lookFor) const;*/

		class PreorderIt
		{
		private:
			Node<T> *currentNode;

		public:
			PreorderIt(Node<T> *ptr = nullptr) : currentNode(ptr) {}
			PreorderIt() : currentNode(nullptr) {}

			T &operator*() const
			{
				return currentNode->value;
			}

			T *operator->() const
			{
				return &(currentNode->value);
			}

			PreorderIt &operator++()
			{
				return *this;
			}
			const PreorderIt operator++(int)
			{
				return *this;
			}

			bool operator==(const PreorderIt &second) const
			{
				return false;
			}

			bool operator!=(const PreorderIt &second) const
			{
				return false;
			}
		};

		class InorderIt
		{
		private:
			Node<T> *currentNode;

		public:
			InorderIt(Node<T> *ptr = nullptr) : currentNode(ptr) {}
			InorderIt() : currentNode(nullptr) {}

			T &operator*() const
			{
				return currentNode->value;
			}

			T *operator->() const
			{
				return &(currentNode->value);
			}

			InorderIt &operator++()
			{
				return *this;
			}
			const InorderIt operator++(int)
			{
				return *this;
			}

			bool operator==(const InorderIt &second) const
			{
				return false;
			}

			bool operator!=(const InorderIt &second) const
			{
				return false;
			}
		};

		class PostorderIt
		{
		private:
			Node<T> *currentNode;

		public:
			PostorderIt(Node<T> *ptr = nullptr) : currentNode(ptr) {}
			PostorderIt() : currentNode(nullptr) {}

			T &operator*() const
			{
				return currentNode->value;
			}

			T *operator->() const
			{
				return &(currentNode->value);
			}

			PostorderIt &operator++()
			{
				return *this;
			}
			const PostorderIt operator++(int)
			{
				return *this;
			}

			bool operator==(const PostorderIt &second) const
			{
				return false;
			}

			bool operator!=(const PostorderIt &second) const
			{
				return false;
			}
		};

		InorderIt begin()
		{
			return begin_inorder();
		};
		InorderIt end()
		{
			return end_inorder();
		};

		PreorderIt begin_preorder()
		{
			return PreorderIt(root);
		}

		PreorderIt end_preorder()
		{
			return PreorderIt(root);
		}

		InorderIt begin_inorder()
		{
			return InorderIt(root);
		}

		InorderIt end_inorder()
		{
			return InorderIt(root);
		}

		PostorderIt begin_postorder()
		{
			return PostorderIt(root);
		}

		PostorderIt end_postorder()
		{
			return PostorderIt(root);
		}
	};

	template <typename T>
	BinaryTree<T> &BinaryTree<T>::add_root(T val)
	{
		return *this;
	}

	template <typename T>
	BinaryTree<T> &BinaryTree<T>::add_left(T parent, T left_val)
	{
		return *this;
	}

	template <typename T>
	BinaryTree<T> &BinaryTree<T>::add_right(T parent, T right_val)
	{
		return *this;
	}
}
