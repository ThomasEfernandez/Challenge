/*3. Por teclado se ingresa el valor hora de un empleado. Posteriormente se ingresa el
nombre del empleado, la antigüedad y la cantidad de horas trabajadas en el mes. Se
pide calcular el importe a cobrar teniendo en cuenta que al total que resulta de
multiplicar el valor hora por la cantidad de horas trabajadas. Además, si el empleado
tiene más de 10 años de antigüedad hay que sumarle la cantidad de años trabajados
multiplicados por $30. Imprimir en pantalla el nombre, la antigüedad y el total a cobrar.
*/

var valor = document.form.valorXhora.value;
var nombre = document.form.nombre.value;
var antiguedad = document.form.antiguedad.value;
var cantHtrabajadas = document.form.cantHtrabajadas.value;


function ingresarEmpleado (nombre,valor,antiguedad,cantHtrabajadas){

    this.nombre = nombre;
    this.valor = valor;
    this.antiguedad = antiguedad;
    this.cantHtrabajadas = cantHtrabajadas;

};
