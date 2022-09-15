int main () {
  int x, y;
  x = 1;
  { int x;
    x = 5;
    y = 6;
    { int y;
      x = 7;
      y = 8;
    }

  }
  return y;
}
