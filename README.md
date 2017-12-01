Para compilar este proyecto siga la siguientes instrucciones:
1. Primero descargar Dev C++ del siguiente enlace:
        https://sourceforge.net/projects/orwelldevcpp/
2. Descargar la libreria SFML(Simple Fast Multimedia Library) en el siguiente link:
        https://www.sfml-dev.org/download/sfml/2.4.2/
   y seleccione la version compatible con el compilador GCC dependiendo de su sistema operativo 32 o 64 bits.
3. Descargar el archivo .rar Y ejecutar el proyecto y luego configurar la libreria.
Una vez abierto el proyecto nos vamos justtoa la barra izquierda donde se encuentra el proyecto y le damos click derecho
y a opciones de proyecto o simplemente ctrl+H , de ahi nos vamos a la pestaña compiler y en sus subpestañas a code generation donde enla opcion Lenguaje Standar (-std) elegimos GNU C++11, posteriormente vamos a la pestaña parameters y en el linker donde le damos click a añadir librerias donde iremos a la carpeta de SFML donde añadiremos de la carpeta lib lo siguiente : libsfml-audio.a,libsfml-graphics.a,libsfml-main.a,libsfml-system.a,libsfml-window.a, luego en la pestaña directories subpestaña library Directories y añadimos de la carpeta SFML la carpeta lib , luego en la subpestaña include directories incluimos de la carpeta SFML la carpeta include.
Por ultimo le damos a aceptar y compilamos y ejeutamos el proyecto.
