#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int gradeRange)
{
    if (gradeRange < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeRange > 150)
        throw Bureaucrat::GradeTooLowException();
    this->name = name;
    this->gradeRange = gradeRange;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    //this class mustn't throw because the function have _NOEXCEPT like throw();
    return ("Too Low Exception");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    //this class mustn't throw because the function have _NOEXCEPT like throw();
    return ("Too High Exception");
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::setgradeRange(int Range)
{
    this->gradeRange = Range;
}

int Bureaucrat::getgradeRange() const
{
    return (this->gradeRange);
}

void Bureaucrat::increment()
{
    this->gradeRange--;
}

void Bureaucrat::decrement()
{
    this->gradeRange++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    return (o << src.getName());
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.haveYouSign(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl; 
    }
    catch(std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
    }
    catch(std::exception& e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
    
}