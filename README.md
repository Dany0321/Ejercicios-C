Ejercicio hecho

Desarrolle una sencilla aplicación en la que se tienen las siguientes clases:

Una clase ListadeObjetos es una clase que contiene un arreglo en el que se pueden almacenar objetos de la clase A, el arreglo puede guardar como máximo 20 objetos de la clase A.
Debe tener un método para almacenar un objeto de la clase A en el arreglo, este método debe verificar que el arreglo tenga espacio disponible para guardar el objeto. En caso contrario se debe mostrar un mensaje indicando que el arreglo está lleno.

Debe tener un método para retirar un objeto del arreglo, este método debe verificar que si haya algo para sacar del arreglo, es decir que el arreglo no vaya a estar vacío, en cuyo caso debe desplegar un mensaje diciendo que no hay nada para sacar de arreglo.

Debe tener un método para desplegar la información de un objeto almacenado en alguna posición del arreglo. Debe verificar que dicha posición si tiene algo guardado, en caso contrario debe avisar de la situación con un mensaje. Este mismo método debe permitir de manera alternativa que se despliegue la información de todos los objetos que estén de momento almacenados en el arreglo.

Una clase A que tiene los siguientes miembros privados: Un miembro tipo int para un número serial que identifica al objeto
Un miembro tipo std::string para darle una denominación al objeto

Los objetos de la clase A solo se pueden crear y configuar a través de una función externa llamada "nuevoObjetoLista". Esta función crea un objeto de la clase A asignando valores al serial y al nombre del objeto. Luego almacene el objeto en la ListadeObjetos invocando el método que esta clase tiene para almacenar objetos de la clase A.
La aplicación debe tener un sencillo menú de opciones que permita ejecutar distintas acciones como agregar objetos a la lista, retirar objetos de la lista o desplegar información de un objeto individual o de todos los objetos de la lista.
