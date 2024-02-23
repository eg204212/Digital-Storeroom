#pragma once

#include<iostream>
#include <cstddef>

using namespace std;

class Node
{
public:
	int key;
	string name;
	int qty;
	Node* next;

	Node()
	{
		name = "";
		qty = 0;
		key = NULL;
		next = NULL;
	}

	Node(string Name,int Qty)
	{
		key= NULL;
		name=Name;
		qty = Qty;
		next = NULL;
	}
};

class Product_List
{
private:
	Node* head;
	Node* tail;
	int Key=1;
	int size=0;
public:
	void Print_List(){
		Node* current = head;
		if (current == NULL){
			cout << "Products are not entered yet." << endl;
		}
		else{
			while (current!= NULL){
				cout << current->key << "\t\t" << current->name << endl;
				current = current->next;
			}
		}		
		
	}

	void Print_List_With_Qty(){
		Node* current = head;
		if (current == NULL){
			cout << "Products are not entered yet." << endl;
		}
		else{
			while (current != NULL){
				cout << current->key << "\t\t" << current->name << "\t\t" << current->qty << endl;
				current = current->next;
			}
		}	
	} 

	void Search_Product_Qty(int k)
	{
		Node* current = head;
		if (current == NULL) {
			cout << "Products are not entered yet." << endl;
		}
		else {
			while (current->key != k){
				current = current->next;
			}
			cout << current->key << "\t\t" << current->name << "\t\t" << current->qty << endl;
		}
	}

	void Edit_Product_Name(int k,string Name){
		Node* current = head;
		if (current == NULL) {
			cout << "Products are not entered yet." << endl;
		}
		else {
			while (current->key != k && current!=NULL) {
				current = current->next;
			}
			if (current == NULL) {
				cout << "There is no such product key call " << k << endl;
			}
			else {
				current->name = Name;
				cout << "Name is replased" << endl;
			}
		}
	}

	void Add_Product(string Name,int qty){		
		Node* tem = new Node(Name,qty );
		if (head == NULL){
			head = tem;
			tail = tem;
		}
		else{
			Key++;
			tem->key = Key;
			Node* current=head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = tem;	
		}
		cout << "New product is added" << endl;
		size++;
	}

	void Delete_Product(int k)
	{
		Node* current = head;
		if (current == NULL) {
			cout << "Products are not entered yet." << endl;
		}
		else {
			while (current->key != k && current!=NULL)
			{
				current = current->next;
			}
			if (current == NULL) {
				cout << "There is no such product key call " << k << endl;
			}
			else {
				current->name = "(Empty)";
				current->qty = NULL;
				cout << "Product is deleted" << endl;
				size--;
			}
		}	
	}

	void Product_In(int k, int q){
		Node* current = head;
		if (current == NULL) {
			cout << "Products are not entered yet." << endl;
		}
		else {
			while (current->key != k && current!=NULL){
				current = current->next;
			}
			if (current == NULL) {
				cout << "There is no such product key call " << k << endl;
			}
			else {
				current->qty = (current->qty) + q;
				cout << "Products are added to storeroom" << endl;
			}
		}	
	}

	void Product_Out(int k, int q)
	{
		Node* current = head;
		if (current == NULL) {
			cout << "Products are not entered yet." << endl;
		}
		else {
			while (current->key != k && current != NULL) {
				current = current->next;
			}
			if (current == NULL) {
				cout << "There is no such product key call " << k << endl;
			}
			else {
				current->qty = (current->qty) - q;
				cout << "Products are export from storeroom" << endl;
			}
		}
	}

	void NumberOfProducts() {
		cout << "Number of products : " << size << endl;
	}
};
