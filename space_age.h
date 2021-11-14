#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age
{
class space_age
{
public:
    space_age(long int seconds);

    int seconds() const;

    double on_earth() const;
    double on_mercury() const;
    double on_venus() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;

private:
    long int m_seconds;
};
}  // namespace space_age

#endif // SPACE_AGE_H