//Ejercicio 2

/*2. Escribe una aplicación que solicite al usuario que ingrese una contraseña cualquiera.
Después se le pedirá que ingrese nuevamente la contraseña, con 3 intentos. Cuando
acierte ya no pedirá más la contraseña y mostrará un mensaje diciendo “Felicitaciones,
recordás tu contraseña”. Si falla luego de 3 intentos se mostrará el mensaje “Tenes que
ejercitar la memoria”. Los mensajes quedarán en pantalla a la espera que el usuario
presione una tecla, luego de esto se cerrará el programa*/
function redireccionar (){

    location.href="paginaprincipal.html";


}




function iniciarSesion  (){
let nombre  = "thomas";
var contraseña = "123";
var cont=3;



    if (document.form.password.value == contraseña && document.form.login.value == nombre){
        //entró correctamente
        alert("has iniciado sesion");
        window.location="paginaprincipal.html";
      

      
      }else{
        alert("campos incorrectos, le quedan: "+cont +" intentos");
        cont--;
      
    }


if (cont==0){
document.write ("Te has quedados sin intentos :C");

}


} 




