int main(void) {
  int **pp = new int*[10];
  int *p = new int[100];
  for (auto i = 0; i < 10; i++) {
    pp[i] = p + i * 10;     // これで確保するとdeleteでエラー出る
    //pp[i] = new int[10];  // これなら問題ない
  }
  for (auto i = 0; i < 10; i++) {
    delete[] pp[i];
  }
  delete[] pp;
  delete[] p;
}
