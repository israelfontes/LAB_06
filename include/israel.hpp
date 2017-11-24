#ifndef _ISRAEL_HPP_
#define _ISRAEL_HPP_

namespace geometria{
	class Triangulo{
		
		public:

			Triangulo();
			~Triangulo() = default;
			Triangulo( float _base ): base(_base){ }
			
			float area();
			float perimetro();
			
			float getBase();
			void setBase(float _base);
		private:
			float base;
	};

	class Quadrado{
		public:
			Quadrado();
			~Quadrado() = default;
			Quadrado(float _base): base(_base){ }
			
			float area();
			float perimetro();
			
			float getBase();
			void setBase(float _base);
		private:
			float base;
			float altura;
	};

	class Circulo{
		public:
			Circulo();
			Circulo(float _raio): raio(_raio){}
			~Circulo() = default;

			float area();
			float perimetro();

			float getRaio();
			void setRaio(float _raio);
		private:
			float raio;
	};

	class Retangulo{
		public:
			Retangulo();
			~Retangulo() = default;
			Retangulo(float _base, float _altura): base(_base), altura(_altura){}

			float area();
			float perimetro();

			float getBase();
			float getAltura();
			void setBase(float _base);
			void setAltura(float _altura);
		private:
			float base;
			float altura;
	};

	class Esfera{
		public:
			Esfera();
			~Esfera() = default;
			Esfera(float _base): base(_base){}

			float area();
			float volume();

			void setRaio(float _raio);
			float getRaio();

		private:
			float base;

	};

	class Cubo{
		public:
			Cubo();
			~Cubo();
			Cubo(float _base): base(_base){}

			float area();
			float volume();

			float getBase();
			void setBase(float _base);
		private:
			float base;

	};

	class Piramede{
		public:
			Piramede();
			~Piramede() = default;
			Piramede(float _base, float _altura): base(_base), altura(_altura){}

			float volume();
			float area();

			void setAltura(float _altura);
			void setBase(float _base);
			float getBase();
			float getAltura();

		private:
			float base;
			float altura;
	};

	class Paralelepipedo{
		public:
			Paralelepipedo();
			~Paralelepipedo() = default;
			Paralelepipedo(float _base, float _altura, float _tam_base): base(_base), altura(_altura), tam_base(_tam_base){}

			float area();
			float volume();	
			
			void setTamBase(float _t_base);
			void setAltura(float _altura);
			void setBase(float _base);
			float getBase();
			float getAltura();
			float getTamBase();
			
		private:
			float base;
			float altura;
			float tam_base;
	};
}

#endif