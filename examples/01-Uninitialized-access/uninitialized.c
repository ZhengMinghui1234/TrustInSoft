void main() {
  int x;
  ^{ int y = x; }(); // warn
}
