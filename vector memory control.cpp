//将 vector 数组转化为指针数组以优化内存
//注意指针的内存释放

int* mem_opt (vector <int> list) {
    int *arr = new int [list.size()];
    for (int i=0; i<list.size(); i++) {
        arr[i] = list [i];
    }
    return arr;
}
