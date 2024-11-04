#pragma once
#include <iostream>

namespace Listagem //INICIA NAMESPACE
{	
	template <class T>
	class Lista  
	{
		public:
			////////////////////////////////ELEMENTO//////////////////////////////
			class Elemento 
			{
				private:
					T* pInfo;
					Elemento* pProx;
					Elemento* pAnte;

				public:
					Elemento();
					~Elemento();

					void setInfo(T* inf);
					T* getInfo();

					void setProx(Elemento* px);
					Elemento* getProx();

					void setAnte(Elemento* pa);
					Elemento* getAnte();
			};
			/////////////////////FIM DO ELEMENTO///////////////////////
			Lista();
			~Lista();

			bool incluiInfo(T* inf);
			bool removeInf(T* inf);
			Elemento* getPrimeiro() { return pPrimeiroElemento; }
			Elemento* getAtual() { return pAtualElemento; }

	private:

		Elemento* pPrimeiroElemento;
		Elemento* pAtualElemento;


	};

	template<class T>
	Lista<T>::Lista() {
		pAtualElemento = pPrimeiroElemento = nullptr;
	}

	template<class T>
	Lista<T>::~Lista() {
		Elemento* aux = pPrimeiroElemento;
		while (aux != nullptr) {
			pPrimeiroElemento = pPrimeiroElemento->getProx();
			delete aux;
			aux = pPrimeiroElemento;
		}
	}

	template<class T>
	bool Lista<T>::incluiInfo(T* inf) {
		if (inf == nullptr) return false;

		Elemento* novaInfo = new Elemento();
		novaInfo->setInfo(inf);

		if (pAtualElemento == nullptr && pPrimeiroElemento == nullptr) {
			// Caso a lista esteja vazia
			pAtualElemento = pPrimeiroElemento = novaInfo;
		}
		else {
			// Adiciona o novo elemento no final da lista
			novaInfo->setAnte(pAtualElemento);
			pAtualElemento->setProx(novaInfo);
			pAtualElemento = novaInfo;
		}
		return true;
	}

	template<class T>
	bool Lista<T>::removeInf(T* inf) {
		if (inf == nullptr) return false;

		Elemento* aux = pPrimeiroElemento;

		// Percorre a lista até encontrar o elemento
		while (aux != nullptr && aux->getInfo() != inf) {
			aux = aux->getProx();
		}

		if (aux == nullptr) return false; // Elemento não encontrado

		if (aux == pPrimeiroElemento) { // caso esteja no começo da lista
			pPrimeiroElemento = aux->getProx();
			if (pPrimeiroElemento != nullptr) { // Atualiza o anterior
				pPrimeiroElemento->setAnte(nullptr);
			}
		}
		else if (aux == pAtualElemento) { // caso esteja no final da lista
			pAtualElemento = aux->getAnte();
			if (pAtualElemento != nullptr) {
				pAtualElemento->setProx(nullptr);
			}
		}
		else { // caso esteja no meio
			if (aux->getAnte() != nullptr) {
				aux->getAnte()->setProx(aux->getProx()); // O anterior de aux aponta para o próximo de aux
			}
			if (aux->getProx() != nullptr) {
				aux->getProx()->setAnte(aux->getAnte()); // O próximo de aux aponta para o anterior de aux
			}
		}
		delete aux; // deleta o aux
		return true;
	}

	//-------------------------------------------IMPLEMENTAÇÃO DO ELEMENTO--------------------------//
	template <class T>
	Lista<T>::Elemento::Elemento() {
		pInfo = nullptr;
		pAnte = nullptr;
		pProx = nullptr;
	}

	template <class T>
	Lista<T>::Elemento::~Elemento() {
		delete pInfo; 
		pAnte = nullptr;
		pProx = nullptr;
	}

	template <class T>
	void Lista<T>::Elemento::setInfo(T* inf) {
		pInfo = inf;
	}

	template <class T>
	T* Lista<T>::Elemento::getInfo() {
		return pInfo;
	}

	template <class T>
	void Lista<T>::Elemento::setProx(Elemento* px) {
		pProx = px;
	}

	template <class T>
	typename Lista<T>::Elemento* Lista<T>::Elemento::getProx() {
		return pProx;
	}

	template <class T>
	void Lista<T>::Elemento::setAnte(Elemento* pa) {
		pAnte = pa;
	}

	template <class T>
	typename Lista<T>::Elemento* Lista<T>::Elemento::getAnte() {
		return pAnte;
	}

	
}//ENCERRA NAMESPACE
