package main

import (
	"syscall"
)

func main() {
	test_lib := syscall.NewLazyDLL("test_lib.dll")
	PrintHello := test_lib.NewProc("PrintHello")
	PrintHello.Call()

	Add := test_lib.NewProc("Add")
	ret, _, _ := Add.Call(7, 11)
	println(ret)
}
