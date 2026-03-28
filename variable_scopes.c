// Global_scope
int g_NumPersons = 0;

int main()
{
    int personID = 0;
    personID += 1;
}

// Local_scope
int main ()
{
    int personID = 0;
    personID += 1;
}

// Sub_scope
int main ()
{
    int personID = 0;
    personID += 1;
    {
        // this_will_not_affect_the_other_personID
        int personID = 0;
        personID += 1;
    }
}