fn main() {
    let a: u8 = 128;
    let b: u8 = 128;
    let c: u8 = a + b;
    println!("{}", c);
}

// This program will panic at line 4, with an error message as following
// thread 'main' panicked at 'attempt to add with overflow'
