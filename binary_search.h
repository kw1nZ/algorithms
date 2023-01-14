#ifndef BINARY_SEARCH_BINARY_SEARCH_H
#define BINARY_SEARCH_BINARY_SEARCH_H


int mid, val;
int binary_search(int *arr, int l, int r, int num) {
  if (l <= r) {
    mid = (l + r) / 2;
    val = arr[mid];
    if (val > num) return binary_search(arr, l, mid - 1, num);
    if (val < num) return binary_search(arr, mid + 1, r, num);
    return mid;
  }

  return -1;
}


#endif //BINARY_SEARCH_BINARY_SEARCH_H