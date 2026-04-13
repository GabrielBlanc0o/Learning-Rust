use std::{io, u32};
use std::cmp::Ordering; // para comparar nuestro numero con el q genere aleatoriamente

use rand::Rng;

pub fn numero_aleatorio(){
    println!("Adivina el numero!");

    let secret_number = rand::thread_rng().gen_range(1..=100);

    //println!("El numero secreto es : {secret_number}");
    
    loop {
        println!("Porfavor ingresa tu numero:");

        let mut guess = String::new();
        // variable no mutable para adivinar el numero 


        io::stdin()
            .read_line(&mut guess)
            .expect("Fallo en leer la linea");
        

        let guess: u32 = match guess.trim().parse(){
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("Adivinaste : {guess}");

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Es pequeño!\n"),
            Ordering::Greater => println!("Es grande!\n"),
            Ordering::Equal => {
                println!("GANASTE!!! EL NUMERO ES {secret_number}");
                break;
            }
        }
    }
}
    
