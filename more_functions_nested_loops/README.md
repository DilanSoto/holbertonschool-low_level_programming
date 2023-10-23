### **Bucles Anidados (Nested Loops):**

1. **¿Qué es un bucle anidado y cómo se utiliza en C?**
    - Un bucle anidado es un bucle dentro de otro bucle. El bucle interno se ejecutará completamente en cada iteración del bucle externo. Se utilizan para repetir ciertas operaciones en una estructura bidimensional, como una matriz.
    - Ejemplo:
        
        ```c
        cCopy code
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("(%d, %d)\n", i, j);
            }
        }
        
        ```
        
2. **Proporciona un ejemplo de un bucle anidado que imprima una tabla de multiplicar.**
    - Ejemplo:
        
        ```c
        cCopy code
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                printf("%d x %d = %d\n", i, j, i*j);
            }
            printf("\n");  // Nueva línea entre tablas
        }
        
        ```
        
3. **¿Qué consideraciones debes tener en cuenta para evitar errores comunes al trabajar con bucles anidados?**
    - Asegúrate de inicializar y actualizar correctamente las variables de control.
    - Evita bucles infinitos verificando la condición de terminación.
    - Comprende el orden en que se ejecutan los bucles y cómo afecta el rendimiento y el resultado.
4. **Explica una situación real donde los bucles anidados podrían ser útiles.**
    - En procesamiento de imágenes, para recorrer todos los píxeles de una imagen y aplicar algún efecto o procesamiento, se usan bucles anidados para recorrer las dimensiones de la imagen.

### **Funciones:**

1. **Define qué es una función en C y cómo se utiliza.**
    - Una función es un bloque de código reutilizable que realiza una tarea específica. Se define con un nombre, puede recibir datos (parámetros) y puede devolver un valor.
    - Ejemplo:
        
        ```c
        cCopy code
        int suma(int a, int b) {
            return a + b;
        }
        int main() {
            int resultado = suma(5, 3);
            printf("La suma es: %d\n", resultado);
            return 0;
        }
        
        ```
        
2. **Proporciona un ejemplo de una función que retorne la suma de dos números.**
    - Ejemplo proporcionado arriba.
3. **Explica la diferencia entre argumentos y parámetros en una función.**
    - Parámetros son las variables que se definen en la declaración de una función, mientras que argumentos son los valores que se pasan a la función cuando se llama.
4. **¿Qué son las funciones de biblioteca estándar en C y proporciona algunos ejemplos?**
    - Las funciones de biblioteca estándar son funciones predefinidas proporcionadas por el lenguaje C, como **`printf`**, **`scanf`**, **`strcpy`**, **`strlen`**, etc.
    
    ### **Declaración y Definición de Funciones:**
    
    1. **Explica la diferencia entre la declaración y la definición de una función.**
        - La **declaración** de una función proporciona información básica como el nombre de la función, los tipos de parámetros y el tipo de retorno, pero no contiene el cuerpo de la función. La **definición** de una función incluye tanto la declaración como el cuerpo de la función (el código que se ejecuta).
        - Ejemplo:
            - Declaración: **`int suma(int a, int b);`**
            - Definición:
                
                ```c
                cCopy code
                int suma(int a, int b) {
                    return a + b;
                }
                
                ```
                
    2. **Proporciona un ejemplo de una declaración y una definición de una función.**
        - Ejemplo proporcionado arriba.
    3. **¿Por qué es importante declarar funciones antes de usarlas?**
        - La declaración permite al compilador saber que existe una función con ese nombre, permitiendo su uso antes de que se defina en el código. Esto es especialmente útil en programas grandes divididos en múltiples archivos.
    4. **¿Qué sucede si defines una función más de una vez en un programa?**
        - Definir una función más de una vez resultará en un error de compilación, ya que el compilador no sabrá cuál definición debe usar.
    
    ### **Prototipos de Funciones:**
    
    1. **Define qué es un prototipo de función y por qué es importante.**
        - Un prototipo de función es una declaración de función que informa al compilador sobre el nombre, los tipos de parámetros y el tipo de retorno de una función. Es importante para verificar que las llamadas a la función sean correctas y para permitir la declaración y definición separadas de funciones.
    2. **Proporciona un ejemplo de un prototipo de función.**
        - Ejemplo: **`int suma(int a, int b);`**
    3. **¿Qué información debe incluir un prototipo de función?**
        - Nombre de la función, tipos de parámetros y tipo de retorno.
    4. **Explica cómo los prototipos de función ayudan a detectar errores en el código.**
        - Los prototipos ayudan al compilador a verificar que las llamadas a funciones sean correctas en términos de número y tipos de argumentos, y el tipo de valor devuelto.
    
    ### **Ámbito de Variables (Scope of Variables):**
    
    1. **Explica qué es el ámbito de una variable y los diferentes tipos de ámbito en C.**
        - El ámbito de una variable es la parte del código donde la variable es reconocida y accesible. Los ámbitos típicos en C son local (dentro de una función) y global (accesible en todo el código).
    2. **Proporciona ejemplos de variables con ámbito local y global.**
        - Ejemplo:
            
            ```c
            cCopy code
            int globalVar = 10;  // Variable global
            
            int main() {
                int localVar = 20;  // Variable local
                return 0;
            }
            
            ```
            
    3. **¿Cómo afecta el ámbito de una variable a la visibilidad y la vida útil de la variable?**
        - El ámbito determina dónde es visible una variable y cuánto tiempo existe. Las variables locales existen solo mientras la función esté en ejecución, mientras que las globales existen durante toda la ejecución del programa.
    4. **¿Qué buenas prácticas se deben seguir con respecto al ámbito de las variables?**
        - Limitar el ámbito de las variables lo máximo posible, preferir variables locales sobre globales, y declarar variables lo más cerca posible de donde se utilizan.
        
        ### **Flags de GCC:**
        
        1. **Explica qué son los flags -Wall, -Werror, -pedantic, -Wextra y -std=gnu89 en GCC y cómo afectan la compilación.**
            - **`Wall`**: Activa la mayoría de las advertencias de compilación para ayudar a detectar posibles errores.
            - **`Werror`**: Convierte todas las advertencias en errores, lo que significa que el código no se compilará si hay advertencias.
            - **`pedantic`**: Hace que el compilador muestre advertencias para el código que no sigue los estándares de C.
            - **`Wextra`**: Activa advertencias adicionales no incluidas en **`Wall`**.
            - **`std=gnu89`**: Establece el estándar de C a seguir como GNU C89.
        2. **¿Qué tipo de errores o advertencias podría revelar el flag -Wall?**
            - **`Wall`** puede revelar una variedad de posibles problemas, como variables no utilizadas, comparaciones sospechosas, o funciones no declaradas.
        3. **Explica cómo el flag -Werror afecta el proceso de compilación.**
            - **`Werror`** hará que el proceso de compilación falle si se detectan advertencias, lo que puede ayudar a mantener un código más limpio y evitar posibles errores.
        4. **¿Para qué sirve el flag -std y cómo el valor gnu89 afecta la compilación?**
            - **`std`** especifica el estándar de C a seguir. **`gnu89`** es una versión de C89 con extensiones GNU. Afecta la compilación al determinar qué características del lenguaje están disponibles y cómo se deben interpretar ciertas construcciones de código.
        
        ### **Archivos de Cabecera y #include:**
        
        1. **Explica qué es un archivo de cabecera y cómo se utiliza con #include en C.**
            - Un archivo de cabecera (**`.h`**) contiene declaraciones y prototipos de funciones, macros y definiciones de tipo que se pueden compartir entre diferentes archivos fuente (**`.c`**). Se incluye en un archivo fuente usando la directiva **`#include`**.
            - Ejemplo:
                
                ```c
                cCopy code
                // archivo: funciones.h
                int suma(int a, int b);
                
                // archivo: main.c
                #include "funciones.h"int main() {
                    int resultado = suma(5, 3);
                    return 0;
                }
                
                ```
                
        2. **Proporciona un ejemplo de un archivo de cabecera con prototipos de función y cómo incluirlo en un archivo .c.**
            - Ejemplo proporcionado arriba.
        3. **¿Cuál es la diferencia entre incluir archivos de cabecera con comillas dobles #include "archivo.h" y con signos de menor y mayor #include <archivo.h>?**
            - Las comillas dobles (**`"archivo.h"`**) se utilizan para archivos de cabecera definidos por el usuario y busca el archivo en el directorio actual primero. Los signos de menor y mayor (**`<archivo.h>`**) se utilizan para archivos de cabecera de la biblioteca estándar y busca el archivo en los directorios estándar del sistema.
        4. **Explica cómo organizar y estructurar los archivos de cabecera para mantener el código bien organizado y fácil de mantener.**
            - Agrupa las declaraciones relacionadas en archivos de cabecera separados, usa nombres descriptivos para los archivos y documenta el contenido de cada archivo de cabecera. También puede ser útil usar **`#ifndef`** y **`#define`** para evitar inclusiones múltiples.
