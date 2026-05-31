package hw2

// shiftMultiply
func shiftMultiply(r, s int) int {
	if s < 0 {
		return r * s
	}

	var a int

	for s > 0 {
		if s&1 == 0 {
			r <<= 1
			s >>= 1
		} else {
			a += r
			s = (s - 1) >> 1
			r <<= 1
		}
	}
	return a
}
