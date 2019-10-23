#ifndef OBJREVOLUCION_H_INCLUDED
#define OBJREVOLUCION_H_INCLUDED

#include "aux.h"
#include "malla.h"
#include "ply_reader.h"

typedef enum {EJE_X, EJE_Y, EJE_Z} rotacion;

class ObjRevolucion: public Malla3D{
   public:
      ObjRevolucion();

      ObjRevolucion(const std::string & archivo, const int num_instancias,\
                    const bool tapa_sup = true, const bool tapa_inf = true,\
                    const rotacion eje = EJE_Y);

      ObjRevolucion(const std::vector<Tupla3f> & perfil, const int num_instancias,\
                    const bool tapa_sup = true, const bool tapa_inf = true,\
                    const rotacion eje = EJE_Y);


		void permutarPoloNorte();

		void permutarPoloSur();

   protected:
      void crearMalla(const std::vector<Tupla3f> & perfil_original, const int num_instancias,\
                      const bool tapa_sup = true, const bool tapa_inf = true);

   private:
      bool sentidoAscendente(const std::vector<Tupla3f> & perfil) const;

      // calcular los polos de los ejes
      // CUIDADO!!!!! Si los polos existen en perfil, los elimina
      void calcularPolos(std::vector<Tupla3f> & perfil, const bool tapa_inf, \
                         const bool tapa_sup);
		
		const rotacion eje_rotacion = EJE_Y;

		Tupla3f polo_norte;
		Tupla3f polo_sur;



};






#endif
