#include <iostream>

template <typename TL>
class Coordenada
{
    public:
    TL X;
    TL Y;

    Coordenada(TL x,TL y){X = x; Y=y;}
    Coordenada(){X =0;Y=0;}
    ~Coordenada(){};

    void operator = (Coordenada<TL> other);
    void operator += (Coordenada<TL> other);
    void operator -= (Coordenada<TL> other);
    void operator /= (Coordenada<TL> other);
    void operator *= (Coordenada<TL> other);
    void operator *= (double multiplier);
    void operator /= (double divider);

    Coordenada<TL> operator+(Coordenada<TL> other);
    Coordenada<TL> operator-(Coordenada<TL> other);
    Coordenada<TL> operator*(Coordenada<TL> other);
    Coordenada<TL> operator*(double multiplier);
    Coordenada<TL> operator/(Coordenada<TL> other);
    Coordenada<TL> operator/(double divider);
};

typedef Coordenada<double> CoordD;
typedef Coordenada<float> CoordF;
typedef Coordenada<int> CoordI;
typedef Coordenada <unsigned int> CoordU;

template<typename TL>
void Coordenada<TL>::operator=(Coordenada<TL> other)
{
    this->X = other.X;
    this->Y = other.Y;
}

template<typename TL>
void Coordenada<TL>::operator+=(Coordenada<TL> other)
{
    this->X += other.X;
    this->Y += other.Y;
}

template<typename TL>
void Coordenada<TL>::operator-=(Coordenada<TL> other)
{
    this->X -= other.X;
    this->Y -= other.Y;
}

template<typename TL>
void Coordenada<TL>::operator/=(Coordenada<TL> other)
{
    this->X /= other.X;
    this->Y /= other.Y;
}

template<typename TL>
void Coordenada<TL>::operator*=(Coordenada<TL> other)
{
    this->X *= other.X;
    this->Y *= other.Y;
}

template<typename TL>
void Coordenada<TL>::operator*=(double multiplier)
{
    this->X *= multiplier;
    this->Y *= multiplier;
}
template<typename TL>
void Coordenada<TL>::operator/=(double divider)
{
    if(divider == 0.0f) 
    {
        std::cout<<"Erro divisão por zero"<<std:: endl;
        exit(1);
    }
    this->X /= divider;
    this->Y /= divider;
}

// Operadores binários que retornam novos objetos
template<typename TL>
Coordenada<TL> Coordenada<TL>::operator+(const Coordenada<TL>other)
{
    return Coordenada<TL>(this->X + other.X, this->Y + other.Y);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator-(const Coordenada<TL> other)
{
    return Coordenada<TL>(this->X - other.X, this->Y - other.Y);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator*(const Coordenada<TL> other)
{
    return Coordenada<TL>(this->X * other.X, this->Y * other.Y);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator*(double multiplier)
{
    return Coordenada<TL>(this->X * multiplier, this->Y * multiplier);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator/(const Coordenada<TL> other)
{
    return Coordenada<TL>(this->X / other.X, this->Y / other.Y);
}

template<typename TL>
Coordenada<TL> Coordenada<TL>::operator/(double divider)
{
    return Coordenada<TL>(this->X / divider, this->Y / divider);
}