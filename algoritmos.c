/*
 * algoritmos.c
 * IE-0117 - Tarea en clase: Ordenamiento y Búsqueda
 *
 * Implementar las funciones asignadas en este archivo.
 * No modificar algoritmos.h ni main.c.
 */

#include "algoritmos.h"

/* ── Ordenamiento ─────────────────────────────────────── */

void bubble_sort(int *arr, int n) {
    int i, j, tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
        }
    }
}

void selection_sort(int *arr, int n) {
    int i, j, min_idx, tmp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }

        tmp = *(arr + i);
        *(arr + i) = *(arr + min_idx);
        *(arr + min_idx) = tmp;
    }
}

void insertion_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    
    return -1;
}

int busqueda_binaria(int *arr, int n, int valor) {
    int izq = 0;
    int der = n - 1;

    while (izq <= der) {
        int mid = izq + (der - izq) / 2;

        if (arr[mid] == valor) {
            return mid; 
        }
        
        if (arr[mid] < valor) {
            izq = mid + 1; 
        } else {
            der = mid - 1; 
        }
    }

    return -1; 
}

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    (void)posiciones;
    return 0;
}
