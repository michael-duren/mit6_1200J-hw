package hw2

import "testing"

func TestShiftMultiply(t *testing.T) {
	t.Run("correctly multiplies two numbers", func(t *testing.T) {
		want := 12
		got := shiftMultiply(2, 6)
		if got != want {
			t.Fatalf("got %d, wanted %d", got, want)
		}
	})
}

func BenchmarkShiftMultiply(b *testing.B) {
	for i := 0; i < b.N; i++ {
		shiftMultiply(137, 423)
	}
}

func BenchmarkNativeMultiply(b *testing.B) {
	for i := 0; i < b.N; i++ {
		_ = 137 * 423
	}
}
