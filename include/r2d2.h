#ifndef R2D2_H_INCLUDED
#define R2D2_H_INCLUDED

#include "aux.h"
#include "cuerpo.h"
#include "objply.h"

class R2D2{
   public:
      R2D2();

      void draw(const dibujado modo_dibujado, const bool ajedrez,\
                const GLenum sombreado);



   private:
      Cuerpo * cuerpo = nullptr;
      ObjPly * pierna_izq = nullptr;
      ObjPly * pierna_der = nullptr;


};



#endif
