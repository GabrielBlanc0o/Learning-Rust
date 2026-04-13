use std::io;

pub fn dos(){

    println!("Adivina el numero!.\n");

    println!("Porfavor Ingresa tu intento.");

    let mut guess: String = String::new();
    // mut para variables mutable y si no sin el mut


    io::stdin()
        .read_line(&mut guess)
        .expect("Fallo en leer la linea");

    println!("Tu adivinaste: {guess}");
    
    let x = 5;
    let y = 10;
    println!("x = {x} and y + 2 = {}", y + 2);

    
}
