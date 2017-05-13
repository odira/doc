#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QMetaType>

class Person
{
public:
    Person();
    Person(const QString &firstName, const QString &initials, const QString &familyName);

    const QString &firstName() const;
    const QString &initials() const;
    const QString &familyName() const;

    void setFirstName(const QString &firstName);
    void setInitials(const QString &initials);
    void setFamilyName(const QString &familyName);

private:
    QString m_firstName;
    QString m_initials;
    QString m_familyName;
};

// Q_DECLARE_METATYPE(Person)

#endif // PERSON_H
