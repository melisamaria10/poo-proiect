
#ifndef OOP_PIZZACLASICA_H
#define OOP_PIZZACLASICA_H

#include "pizza.h"

class PizzaClasica: public Pizza{
private:
    std::string tip_crusta;

public:

    PizzaClasica();

    PizzaClasica(const std::string &,const double &,const std::string &);

    PizzaClasica(const PizzaClasica &);

    void afisare(std::ostream &out) const override;

    [[nodiscard]] const std::string &getTipCrusta() const;

    [[nodiscard]] static const int &timpPreparare() ;

    void citire(std::istream &in) override;

    friend std::istream &operator>>(std::istream &, PizzaClasica &);

    friend std::ostream &operator<<(std::ostream &,const PizzaClasica &);

    ~PizzaClasica() override;

};

#endif //OOP_PIZZACLASICA_H
