int f(int *p) __attribute__((nonnull));

void main(int *p) {
  if (!p)
    f(p); // warn
}
