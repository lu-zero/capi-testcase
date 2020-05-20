#!/bin/sh
cargo install cargo-c
cargo install bindgen
cargo cbuild
cc -I target/debug/ c-tests/array.c target/debug/libcapi_testcase.a
./a.out

bindgen target/debug/capi_testcase.h | grep -C 1 pub.*_test
