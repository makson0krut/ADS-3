// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int firstFlag = - 1;
  int lastFlag = -1;
  while (lefy <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == value) {
      firstFlag = mid;
      right = mid - 1;
    } else if (arr[mid] < value) {
        left = mid + 1;
    } else {
        right = mid - 1;
    }
  }
  left = 0;
  right = size - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
      if (arr[mid] == value) {
          lastOccurrence = mid;
          left = mid + 1;
      } else if (arr[mid] < value) {
          left = mid + 1;
      } else {
          right = mid - 1;
        }
    }
    if (firstOccurrence != -1 && lastOccurrence != -1) {
        return lastOccurrence - firstOccurrence + 1;
    } else {
        return 0;
    }
}
