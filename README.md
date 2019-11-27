# Proyecto MCM

Resumen
  La base de datos que se a desarollado es actualmente una de usuarios y maquinas, habiendo implementado la funcionalidad de que los usuario puedan definir sus posiciones de trabajo, esto tenia la intencio de que cada posicion tenga funciones especialidas en lo que dicha persona necesite y trabaje, estos son Trabajador, Supervisor, Planner.
La interfaz intenta ser lo más amigable con el usuario posible, esta consta de un menú, un ingreso, un registrarse, opciones , salir.
  Por el momento no se a podido implentar el sistema de pedidos especializdos de cada uno de los puestos.

Intruducción

  

Cuerpo:
  Menu:
  La interfaz consta de un menu, en el cual elejir entre ingresar o registrarse, (junto a la opcion de cambiar de color(opciones) y la opcion de salir del programa(salir)). 
  El proposito con el que fue creado fue el de hacer puente entre el usuario y las opciones de crear un usuario e ingresar a su usuario (siendo este uno de los componentes en los que puede extraer de aplicaciones tales como facebook, messenger, y varias que implementan esta funcionalidad de usuarios).
    Registrarse:
Si se elije registrarse la persona es capaz de guardar su nick conjunto a su rango y su contraseña, en este tambien se especifica que el nombre y password tiene que ser de longitud mayor a 3 caracteres y menor a 8, y en el caso que el rango no sea uno de entre los especificados, no se podra guardar con funciones especializadas ni podra ser visto por el visualisador de usuarios.
    Ingresar:
  En el momento en que el usuario esta ingresando pasara por el mismo filtro que en el registro, mayor a 3 y menor a 8 caracteres, si el usuario no existe avisa que el nick no esta registrado, si existe pero la contraseña esta mal, avisa que la contraseña a sido errada, y si se puede ingresar exitosamente, el usuario tiene acceso a  un visualisador de usuarios, a las maquinas, a su perfil y la opcion de salir.
      Usuarios:
  El visualisador de usuarios los muestra de manera jerarquica y alfabeticamente descendente, (en este existe un error, si explicara a más detalle en las pruebas).
      Maquinas:
  En la seccion maquinas, hay un visualisador, buscar, agregar y salir
  El visualisador de maquinas muestra el codigo de la maquina conjunto a una breve descripcion de la misma(la descripción completa aun no a sido implementada).
  El buscador aun no a sido implementado.
  La funcion agregar aun no a sido implementado.
  La seccion Perfil aun no a sido implenetado.

Pruebas
  Las pruebas que se an realizado a lo largo del desarrollo del proyecto se pueden ver en los repositorios de github https://github.com/RFGCH/Proyecto y https://github.com/RFGCH/PrimerProyecto ProyectoFinal, el motivo por el cual son dos es que en el primer repositorio la implementacion de las clases salio fallida, y en el mismo se creo una copia de si misma, para terminar de pulir el proyecto y por motivos de orden se optó por seguir en un repositorio diferente.
  Las fallas más comunes fueron con respecto a las declaraciones de clases, punteros, templates, ordenamiento de listas.
  En clases el error más dificil de superar fue el como obtener los datos heredados de la clase padre, siendo que este era pasado como private, en las pruebas se opto por cambiar los atributos a privados, esto tambien resulto en error, (con la funcion print()), por lo que se opto por pasar al padre como public, se desea a futuro revisar este punto
  Con respecto a los punteros, el error más común fue por falta de practica de los mismos, por lo que estos fueron solucionados con rapidez.
  Las Templates dieron muchas fallas, la clase arr tenia como objetivo contener a un conjunto de punteros que apuntaran a los objetos de tipo Trabajador, Supervisor y Planner. Se cree que el error se debe a una mala colocación del archivo .h o el archivo .cpp de la clase, es poco probable que el problema sea la definicion de la misma. La definicion de una template que use vectores tambio dio problema por el como se define el argumento vector.
  El ordenamiento de las tres listas (vectores) de tipo Trabajador, Supervisor y Planner usando templates fue exitoso, el problema es que no lo hace desde el comienzo, o ordena de manera errada, en las pruebas se intento cambiando el metodo de ordenamiento (de quicksort a burbuja) pero los resultados fueron los mismos, no se tiene una hipotesis clara de lo que podria estar generando dicho error, se tiene que seguir estudiando e investigando dicho punto.
  El motivo por el cual una gran cantidad de secciones aun no an podido ser terminadas es por la falta de experiencia en el area, la falta de realismo a la hora de tomar la decision de extender la aplicación y la falta de conocimientos en el area.
  
  

Resultados



