# Testcase for cbindgen generating faulty function signatures

In C arrays do not exist.
``` c
void f(t a[3]);
void f(t a[]);
void f(t *a);
```

Are all the same.

Current cbindgen has the faulty map:

``` rust
f(a: [t; 3]) -> ();
```
``` rust
void f(t a[3]);
```

This repo shows the problem.

