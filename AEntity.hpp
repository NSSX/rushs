#ifndef AEntity_HPP
# define AEntity_HPP

class AEntity{

public:
    virtual ~AEntity() {}
    virtual  double getTime() const = 0;
    virtual    int getMaxWidth() const = 0;
    virtual int getMaxHeight() const = 0;
    virtual    void setTime(double time) = 0;
    virtual    void setMaxHeight(int height) = 0;
    virtual    void setMaxWidth(int width) = 0;
    virtual std::string getForm() = 0;
};
#endif
