// NAME : JUNAID SALEEM
// REG N0 : 2022243
// FACULTY : CS
// CS101-A2-2022243
// PROGRAM TO CALCULATE GPA AND CGPA

#include <iostream>
using namespace std;

int main()
{
    int s1[5], s2[5], s3[5];
    char GRADE1[5], GRADE2[5], GRADE3[5];
    float GPA1[5], GPA2[5], GPA3[5];
    float S1GPA = 0, S2GPA = 0, S3GPA = 0;
    float CGPA = 0;

    cout << endl
         << "ALERT!!!. Please Enter Marks out of 100, other-wise Program will give an error!!!." << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of Course " << i + 1 << " of first Semsester : ";
        cin >> s1[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of Course " << i + 1 << " of Second Semsester : ";
        cin >> s2[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks of Course " << i + 1 << " of third Semsester : ";
        cin >> s3[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        if (s1[i] > 90 && s1[i] <= 100)
        {
            GRADE1[i] = 'A';
            GPA1[i] = 4.00;
        }
        else if (s1[i] > 80 && s1[i] <= 90)
        {
            GRADE1[i] = 'B';
            GPA1[i] = 3.33;
        }
        else if (s1[i] > 70 && s1[i] <= 80)
        {
            GRADE1[i] = 'C';
            GPA1[i] = 2.7;
        }
        else if (s1[i] > 60 && s1[i] <= 70)
        {
            GRADE1[i] = 'D';
            GPA1[i] = 2.33;
        }
        else if (s1[i] >= 0 && s1[i] <= 60)
        {
            GRADE1[i] = 'F';
            GPA1[i] = 2.00;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (s2[i] > 90 && s2[i] <= 100)
        {
            GRADE2[i] = 'A';
            GPA2[i] = 4.00;
        }
        else if (s2[i] > 80 && s2[i] <= 90)
        {
            GRADE2[i] = 'B';
            GPA2[i] = 3.33;
        }
        else if (s2[i] > 70 && s2[i] <= 80)
        {
            GRADE2[i] = 'C';
            GPA2[i] = 2.7;
        }
        else if (s2[i] > 60 && s2[i] <= 70)
        {
            GRADE2[i] = 'D';
            GPA2[i] = 2.33;
        }
        else if (s2[i] >= 0 && s2[i] <= 60)
        {
            GRADE2[i] = 'F';
            GPA2[i] = 2.00;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (s3[i] > 90 && s3[i] <= 100)
        {
            GRADE3[i] = 'A';
            GPA3[i] = 4.00;
        }
        else if (s3[i] > 80 && s3[i] <= 90)
        {
            GRADE3[i] = 'B';
            GPA3[i] = 3.33;
        }
        else if (s3[i] > 70 && s3[i] <= 80)
        {
            GRADE3[i] = 'C';
            GPA3[i] = 2.7;
        }
        else if (s3[i] > 60 && s3[i] <= 70)
        {
            GRADE3[i] = 'D';
            GPA3[i] = 2.33;
        }
        else if (s3[i] >= 0 && s3[i] <= 60)
        {
            GRADE3[i] = 'F';
            GPA3[i] = 2.00;
        }
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        S1GPA = S1GPA + (GPA1[i] / 5);
    }

    for (int i = 0; i < 5; i++)
    {
        S2GPA = S2GPA + (GPA2[i] / 5);
    }

    for (int i = 0; i < 5; i++)
    {
        S3GPA = S3GPA + (GPA3[i] / 5);
    }

    CGPA = (S1GPA + S2GPA + S3GPA) / 3;

    for (int i = 0; i < 5; i++)
    {
        cout << "Marks obtanained in Course " << i + 1 << " of Semester 1 : " << s1[i] << ".\tGrade : " << GRADE1[i] << ".\tGPA in this course is : " << GPA1[i] << endl;
    }
    cout << "Semester # 1 GPA is : " << S1GPA << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks obtanained in Course " << i + 1 << " of Semester 2 : " << s2[i] << ".\tGrade : " << GRADE2[i] << ".\tGPA in this course is : " << GPA2[i] << endl;
    }
    cout << "Semester # 2 GPA is : " << S2GPA << endl
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks obtanained in Course " << i + 1 << " of Semester 3 : " << s3[i] << ".\tGrade : " << GRADE3[i] << ".\tGPA in this course is : " << GPA3[i] << endl;
    }
    cout << "Semester # 3 GPA is : " << S3GPA << endl
         << endl;
    cout << "CGPA is : " << CGPA << endl;

    return 0;
}