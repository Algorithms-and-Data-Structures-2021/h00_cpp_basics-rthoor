#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if((lhs != nullptr) && (rhs != nullptr)) {
        int hs = *rhs;
        *rhs = *lhs;
        *lhs = hs;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if((num_rows <= 0) || (num_cols <= 0)) {
        return nullptr;
    }
    else{
        int **arr = new int*[num_rows]();
        for (int i=0; i < num_rows; i++) {
            arr[i] = new int[num_cols]{};
        }
        for (int i=0; i < num_rows; i++) {
            for (int j=0; j < num_cols; j++) {
                arr[i][j] = init_value;
            }
        }
        return arr;
    }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if((arr_2d_source == nullptr) || (arr_2d_target == nullptr)
        || (num_rows <= 0) || (num_cols <= 0)) {
        return false;
    }
    else {
        for (int i=0; i < num_rows; i++) {
            for (int j=0; j < num_cols; j++) {
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return true;
    }
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    for (int j = 0; j < arr.size() / 2; j++) {
        int k = arr[j];
        arr[j] = arr[arr.size() - j - 1];
        arr[arr.size() - j - 1] = k;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if((arr_begin == nullptr) || (arr_end == nullptr)){
    }
    else{
        while(arr_begin<arr_end) {
            int a = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = a;
            arr_begin++;
            arr_end--;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if((arr == nullptr) || (size<=0)){
        return nullptr;
    }
    else{
        int *max = arr;
        arr++;
        for(int i = 1; i < size; i++){
            if(*arr >= *max){
                max = arr;
            }
            arr++;
        }
        return max;
    }
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> answer;
    while(!arr.empty()){
        if((arr.back()%2==1) || (arr.back()%2==-1) ) {
            answer.insert(answer.begin(), arr.back());
        }
        arr.pop_back();
    }
    return answer;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> answer;
    while(!arr_a.empty()){
        for(int j = 0; j < arr_b.size(); j++){
            if(arr_a.back()==arr_b[j]) {
                answer.insert(answer.begin(), arr_a.back());
            }
            arr_a.pop_back();
        }
    }
    return answer;
}

