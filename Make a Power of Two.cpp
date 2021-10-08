#include <stdio.h>
#include <pthread.h>
#include<iostream>
#include<stdlib.h>

using namespace std;


class Hotel{

public:
 
 Habitacion room =  Habitacion();

 void agregarHabitacion_Hotel(){
         room.agregarHabitacion();
 }
 int limpiarHabitacion(){
         return room.limpiarHabitacion();
 }

};


class Habitacion{
 public:       
  int _habitaciones;

  void agregarHabitacion(){
          _habitaciones += 1;
  }

  int limpiarHabitacion(){
          return _habitaciones;
  }    
};



class Documento{   

private:  
       string titulo ;
       string cuerpo;

public:
      Documento(string _titulo, string _cuerpo){
                  _titulo = titulo;
                  _cuerpo = cuerpo; 
      } 

      string getTitulo(){
              return titulo;
      }

      string getCuerpo(){
              return cuerpo;
      }
};

class Impresora{
private:
    bool estaEncendido;

    void Imprimir(Documento doc){
            if(estaEncendido){
                    cout<<"Imprimiendo doc"<<doc.getTitulo()<<endl;
                    cout<<"Imprimiendo doc"<<doc.getCuerpo()<<endl;
            }
            else{
              cout<<"La impresa esta apagada"<<endl;      
            }
    }
};


class Customer{

private:
   Order _order;

    Customer(){
        _order = Order();
    }

     Customer(Order order){
        _order = order;
    }
        
    void SetOrder(Order order){
        _order = order;
    }

   void AddItemToOrder(){
        _order.AddItem();
    }

   int CheckItems(){
        return _order.CheckItems();
    }
};

class Order{

private:
     int _items;

public:
    void AddItem()
    {
        _items += 1;
    }

    int CheckItems()
    {
        return _items;
    }
};


