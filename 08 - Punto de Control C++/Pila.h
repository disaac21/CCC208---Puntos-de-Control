#pragma once
#include <deque>
#include <cstddef>
template <typename TIPOD>

class Pila {
    public:
        TIPOD& arriba() {
            return pila.front();
        }
        void insertar(const TIPOD &empujarValor) {
            pila.push_front(empujarValor);
        }
        void extraer() {
            pila.pop_front();
        }
        bool estaVacia()const {
            return pila.empty();
        }
        size_t size() const {
            return pila.size();
        }
    private:
        std::deque<TIPOD> pila;
};