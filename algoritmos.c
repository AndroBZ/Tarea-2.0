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
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

void selection_sort(int *arr, int n) {
    /* TODO: implementar */

    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + min_idx)) {
                min_idx = j;
            }
        }

        temp = *(arr + i);
        *(arr + i) = *(arr + min_idx);
        *(arr + min_idx) = temp;
    }
}

void insertion_sort(int *arr, int n) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
}

/* ── Búsqueda ─────────────────────────────────────────── */

int busqueda_lineal(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    return -1;
}

int busqueda_binaria(int *arr, int n, int valor) {
    /* TODO: implementar */
    (void)arr;
    (void)n;
    (void)valor;
    return -1;
}

int buscar_ocurrencias(int *arr, int n, int valor, int *posiciones) {
    /* TODO: implementar */

    int i, k = 0;

    for (i = 0; i < n; i++) {
        if (*(arr + i) == valor) {
            *(posiciones + k) = i;
            k++;
        }
    }

    return k;
}
