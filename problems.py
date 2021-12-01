
play = True
while (play):
  print(end='\n')
  print("1 = Conversion de Binario a Decimal")
  print("2 = Evaluar Numeros")
  print("3 = Codificacion de Alumno")
  print("4 = Juego de Preguntas")
  print("5 = Juego de Numeros")
  print("6 = Salir")
  opcion = int(input("Ingresa la Opcion que deseas: "))
  print(end='\n')

  if (opcion == 1):
   print(end='\n')
   print("Conversion de Binario a Decimal")
   num = input("Ingresa un numero Binario : ")
   str(num)
   number = 0
   tam = len(num)-1
   correct = True
   if(correct):
     for i in range(0, len(num)):
       if(num[i] != '1' and num[i] != '0'):
         print("No es un numero Binario!!")
         break
       else:
         for i in range(0, len(num)):
           if(num[i] == '1'):
             number += 2**tam
           tam -= 1
   print("Numero Decimal = ", number)

  elif(opcion == 2):
    print(end='\n')
    print("Evaluar Numeros")
    n = int(input("Ingrese Numero a evaluar: "))
    nums = []

    x = 1
    while x <= n:
      num = int(input(f"Ingrese el numero = "))
      if num not in nums:
          nums.append(num)
          x += 1
      else:
         print("El número está repetido, inténtelo con otro...")
    print(nums)

  elif opcion == 3:
    print(end='\n')
    codigo = []
    print("Codificacion de Alumno")
    nombre = []
    nombre = input("Ingrese su Nombre: ")
    apellidoPaterno = input("Ingrese su Apellido Parteno: ")
    apellidoMaterno = input("Ingrese su Apellido Materno: ")
    # apellido = input("Ingrese su Apellido")
    print("Fecha de Nacimiento:")
    dia = input("Ingrese el dia de su nacimiento: ")
    str(dia)
    mes = input("Ingrese el mes de su nacimiento: ")
    str(mes)
    año = input("Ingrese el año de su nacimiento: ")
    str(año)

    sexo = input("Ingrese M o F, dependiendo de su sexo: ")

    titularSeguro = input(
        "Si es titular ingrese SI, si es independiente ingrese NO: ")

    codigo.append(año)
    codigo[0] += mes
    codigo[0] += dia

    if sexo == "M" or sexo == "m":
      codigo[0] += "1"
    else:
      codigo[0] += "2"

    if len(apellidoPaterno) < 4:
      codigo[0] += apellidoPaterno[0]
      codigo[0] += apellidoPaterno[2]
    else:
      codigo[0] += apellidoPaterno[0]
      codigo[0] += apellidoPaterno[1]

    if len(apellidoMaterno) < 4:
      codigo[0] += apellidoMaterno[0]
      codigo[0] += apellidoMaterno[2]
    else:
      codigo[0] += apellidoMaterno[0]
      codigo[0] += apellidoMaterno[3]

    codigo[0] += nombre[0]

    if titularSeguro == "si" or titularSeguro == "SI" or titularSeguro == "Si":
     codigo[0] += "001"
    else:
     codigo[0] += "002"

    print("Codigo = ", codigo[0])

  elif opcion == 4:
      print("Juego de Preguntas")
      print("Bienvenido al juego de preguntas")
      nombre = input("¿Cual es tu nombre?: ")
      print("Hola", nombre,
            "\nPuedes empezar con el juego de preguntas, BUENA SUERTE!!!")

      playing = True
      while playing == True:
        puntos = 0
        mal = 0

        print("Pregunta 01: ¿Cuál es el río más largo del mundo?")
        print("A. El Amazonas")
        print("B. El Nilo")
        respuesta_1 = input("Escribe tu respuesta: ")
        if respuesta_1 == "A" or respuesta_1 == "a":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es El Amazonas")
            mal += 1

        print("Pregunta 02: ¿Cuál es el país con más habitantes del mundo?")
        print("A. India")
        print("B. China")
        respuesta_2 = input("Escribe tu respuesta: ")
        if respuesta_2 == "B" or respuesta_2 == "b":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es China")
            mal += 1

        print("Pregunta 03: ¿Cuál es el edificio más alto del mundo?")
        print("A. Torre de Shanghai")
        print("B. El Burj Khalifa")
        respuesta_3 = input("Escribe tu respuesta: ")
        if respuesta_3 == "B" or respuesta_3 == "b":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es El Burj Khalifa")
            mal += 1

        print("Pregunta 04: ¿Dónde está Transilvania?")
        print("A. En Rumania")
        print("B. En Hungría")
        respuesta_4 = input("Escribe tu respuesta: ")
        if respuesta_4 == "A" or respuesta_4 == "a":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es En Rumania")
            mal += 1

        print("Pregunta 05: ¿Cuál es el país con menos habitantes del mundo?")
        print("A. San Marino")
        print("B. La Ciudad del Vaticano")
        respuesta_5 = input("Escribe tu respuesta: ")
        if respuesta_5 == "B" or respuesta_5 == "b":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es La Ciudad del Vaticano")
            mal += 1

        print("Pregunta 06: ¿Cuál es la película con más Óscars de la historia del cine?")
        print("A. Titanic")
        print("B. Ben-Hur")
        respuesta_6 = input("Escribe tu respuesta: ")
        if respuesta_6 == "A" or respuesta_6 == "a":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es Titanic")
            mal += 1

        print("Pregunta 07: ¿En qué año cayó el muro de Berlín?")
        print("A. En 1989")
        print("B. En 1985")
        respuesta_7 = input("Escribe tu respuesta: ")
        if respuesta_7 == "A" or respuesta_7 == "a":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es En 1989")
            mal += 1
            
        print("Pregunta 08: ¿Cuántos años duró la Primera Guerra Mundial?")
        print("A. De 1914 a 1918")
        print("B. De 1912 a 1916")
        respuesta_8 = input("Escribe tu respuesta: ")
        if respuesta_8 == "A" or respuesta_8 == "a":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es De 1914 a 1918")
            mal += 1
            
        print("Pregunta 09: ¿Cuántos años duró la Segunda Guerra Mundial?")
        print("A. De 1935 a 1940")
        print("B. De 1939 a 1945")
        respuesta_9 = input("Escribe tu respuesta: ")
        if respuesta_9 == "B" or respuesta_9 == "b":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es De 1939 a 1945")
            mal += 1
            
        print("Pregunta 10: ¿Qué día es la fiesta nacional de los Estados Unidos?")
        print("A. El 2 de julio")
        print("B. El 4 de julio")
        respuesta_10 = input("Escribe tu respuesta: ")
        if respuesta_10 == "B" or respuesta_10 == "b":
            print("Correcto")
            puntos += 1
        else:
            print("Incorrecto. La respuesta correcta es El 4 de julio")
            mal += 1
        
        terminar_juego = input("Quieres jugar otra vez?: ")
        if terminar_juego == "Si" or terminar_juego == "si":
            playing = True 
        else:
            break
        
      print("Gracias porn jugar")
      print("Obtuviste", puntos, "respuestas correctas")
      print("Obtuviste", mal, "respuestas correctas")
  elif opcion ==5:
    print("Juego de Numeros")
    import random
    x = random.randint(1,6)
    y = random.randint(1,6)
    z = random.randint(1,6)
    print("Ingrese numeros entre 1 y 6")
    a = int(input())
    b = int(input())
    c = int(input())
    e = 0
    if a != b and a != c and b != c:
      apuesta = int(input("Ponga su apuesta: "))
    if a == x or a==y or a==z:
           e = e+1
    if b == x or b==y or b==z:
           e = e+1
    if c == x or c==y or c==z:
            e = e+1
    print("Los aciertos que tuvo es ",e)
    print(x)
    print(y)
    print(z)
    if e == 0:
        print("Perdió su apuesta")
    elif e == 1:
        print("Mantiene su apuesta de",apuesta)
    elif e == 2:
        print("Su ganancia es de",apuesta*2)
    elif e == 3:
        print("Su ganancia es de",apuesta*3)
    else :
       print("Error, digite números no repetidos") 
       
  elif opcion==6:
    print("Salir")
    break