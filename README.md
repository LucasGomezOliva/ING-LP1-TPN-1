# ING-LP1-TP1-Clases y relaciones
1. Modelizar UML de las clases pedidas con sus relaciones.
2. Generar los archivos pedidos de las clases que considere necesarias e
implementar un main con las características mencionadas al final del archivo.
3. Generar los métodos to_string e Imprimir en pantalla para cada clase, ninguna
debe recibir nada por parámetro y devuelve los atributos concatenados como
un string
4. ¡¡Generar los getters y setters que crea necesarios!!

El Gobierno de la Ciudad de Buenos Aires les pide que desarrollen un software para
poder controlar el flujo de testeos de COVID en la ciudad para 2 Centros de Testeos.
La idea es que cada Centro de Testeo tenga asignado únicamente hasta 2 pacientes
debido a la escasez de médicos.

Posterior al registro y el hisopado, se debe mandar las muestras al Laboratorio
asignado para determinar el resultado del testeo. Los laboratorios son asignados por
Centros de Testeos y solo pueden recibir hasta 2 muestras.

## Los Centros de Testeos tienes los siguientes atributos y métodos:

- Atributos:
  - Descriptivos: ID Centro, Comuna, Nombre
  - Funcionales: Completo, Puntero a Paciente que es null hasta que se le
asigne un paciente, Puntero a Laboratorio que es null hasta que se le
asigna uno
- Métodos:
  - Asociar Laboratorio: Recibe el laboratorio al cual se va a ver asociado
el centro de testeo.
  - Alta Paciente: Recibe un paciente, verifica que haya un espacio para
atenderlo y si lo hay se lo asigna a uno de los 2 punteros. Caso
contrario, se imprime en pantalla el error que se tuvo.
  - Mandar Testeo: Envía las muestras al Laboratorio asignado para
determinar la presencia de COVID en el paciente.
  - Baja Paciente: Si el atributo “Resultado Testeo” de los pacientes es
diferente a “Sin resultado”, se pueden poner en NULL los punteros a los
pacientes.

## Los Pacientes tienen los siguientes atributos y métodos:

- Atributos:
  - Descriptivos: Nombre, Apellido, DNI, Teléfono, Fiebre, Tos, Mocos, Contacto Estrecho, Dolor de Cabeza, Dolor de garganta
  - Funcionales: Resultado Testeo
    - Resultado Testeo: enum que puede ser
      - Sin resultado
      - Positivo
      - Negativo

## Los Laboratorios tienes los siguientes atributos y métodos:

- Atributos:
  - Descriptivos: ID Laboratorio, Nombre, Comuna
  - Funcionales: Punteros a Pacientes que son null hasta que se le asigne
una muestra, Completo (variable que se usa para determinar si el
laboratorio se encuentra lleno de muestras)
- Métodos:
  - Recibir Muestra: Recibe un paciente y se fija si tiene lugar para
analizar la muestra. En el caso de que no se logre recibir la muestra
indique el problema que se tuvo.
  - Análisis de Muestra: Determina a partir de los datos descriptivos del
paciente si este tiene COVID o no, y cambia el atributo “Resultado
testeo” del mismo a su correspondiente resultado.
    - Positivo: Si el paciente presenta más de 2 síntomas
    - Negativo: Si el paciente presenta menos de 2 síntomas
  - Avisar Pacientes: Manda un mensaje de texto al paciente con la
información del testeo (imprimir en pantalla si se logró mandar el
mensaje). Una vez que se avisa a los pacientes, se descartan las
muestras.

IMPORTANTE, Esta consigna es la base de lo que necesitan hacer, cualquier cosa
extra es bienvenida o si les interesa agregar algún concepto que hayan visto en algún
lado pueden hacerlo, en caso de que hagan eso no será considerado para la
corrección, pero sí como concepto. En caso de que haya problemas con lo que le hayan
querido agregar (Por ejemplo, una librería gráfica, de sonido, etc.) tendrán prioridad
los que tengan problemas con la consigna original.

¡LOS MÉTODOS NO DEBEN RECIBIR NI ESCRIBIR EN CONSOLA! (Salvo método imprimir
y si se aclara específicamente).

Genere el main y utilice todos sus métodos para verificar su funcionamiento
creando todas como objetos dinámicos (Recuerde liberar la memoria al creer
necesario)
