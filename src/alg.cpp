// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  bool isDigit = false;
  int flag = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      flag += 1;
      isDigit = true;
      return flag;
    } else {
      return 0;
    }
  }
}
