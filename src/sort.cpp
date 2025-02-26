#include "tweet.h"
#include <string>
using namespace std;

void ascendingBubbleSort(std::vector<Tweet> &tweets, const std::string &sortBy)
{
    int n = tweets.size();
    bool swapped;
    if (sortBy == "retweetCount")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) // j + 1'le işimiz oldduğu için n - i değil yoksa memory hatası alırdık.
            // Aslında sondan n-i kadar eleman sıralanmış kabul ediyoruz. O yüzden 1 eksiğine kadar kıyaslama yapıyoruz. 
            {

                if (tweets[j].retweetCount > tweets[j + 1].retweetCount)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }

    else if (sortBy == "favoriteCount")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) // j + 1'le işimiz oldduğu için n - i değil yoksa memory hatası alırdık.
            {
                if (tweets[j].favoriteCount > tweets[j + 1].favoriteCount)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }

    else if (sortBy == "tweetID")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (tweets[j].tweetID > tweets[j + 1].tweetID)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
}

void descendingBubbleSort(std::vector<Tweet> &tweets, const std::string &sortBy)
{
    int n = tweets.size();
    bool swapped;

    if (sortBy == "retweetCount")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) // j + 1'le işimiz oldduğu için n - i değil yoksa memory hatası alırdık.
            {
                if (tweets[j].retweetCount < tweets[j + 1].retweetCount)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
    else if (sortBy == "favoriteCount")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) // j + 1'le işimiz oldduğu için n - i değil yoksa memory hatası alırdık.
            {
                if (tweets[j].favoriteCount < tweets[j + 1].favoriteCount)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
    else if (sortBy == "tweetID")
    {
        for (int i = 0; i < n - 1; i++)
        {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) // j + 1'le işimiz oldduğu için n - i değil yoksa memory hatası alırdık.
            {
                if (tweets[j].tweetID < tweets[j + 1].tweetID)
                {
                    swap(tweets[j], tweets[j + 1]);

                    swapped = true;
                }
            }
        }
    }
}

void bubbleSort(std::vector<Tweet> &tweets, const std::string &sortBy, bool ascending)
{
    if (ascending)
    {
        ascendingBubbleSort(tweets, sortBy);
    }
    else
    {
        descendingBubbleSort(tweets, sortBy);
    }
}

void ascendingOrderInsertionSort(std::vector<Tweet> &tweets, const std::string &sortBy)
{
    int i, j;
    if (sortBy == "retweetCount")
    {
        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            j = i - 1;
            int parameter = key.retweetCount;
            while (j >= 0 && tweets[j].retweetCount > parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
    else if (sortBy == "favoriteCount")
    {
        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            int j = i - 1;
            int parameter = key.favoriteCount;
            while (j >= 0 && tweets[j].favoriteCount > parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
    else if (sortBy == "tweetID")
    {
        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            int j = i - 1;
            long long parameter = key.tweetID;
            while (j >= 0 && tweets[j].tweetID > parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
}
void descendingOrderInsertionSort(std::vector<Tweet> &tweets, const std::string &sortBy)
{

    int i, j;

    if (sortBy == "retweetCount")
    {

        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            int j = i - 1;
            int parameter = key.retweetCount;
            while (j >= 0 && tweets[j].retweetCount < parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
    else if (sortBy == "favoriteCount")
    {

        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            int j = i - 1;
            int parameter = key.favoriteCount;
            while (j >= 0 && tweets[j].favoriteCount < parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
    else if (sortBy == "tweetID")
    {
        for (i = 1; i < tweets.size(); i++)
        {
            Tweet key = tweets[i];
            int j = i - 1;
            long long parameter = key.tweetID;
            while (j >= 0 && tweets[j].tweetID < parameter)
            {
                tweets[j + 1] = tweets[j];
                j--;
            }
            tweets[j + 1] = key;
        }
    }
}
void insertionSort(std::vector<Tweet> &tweets, const std::string &sortBy, bool ascending)
{
    if (ascending)
    {
        ascendingOrderInsertionSort(tweets, sortBy);
    }
    else
    {
        descendingOrderInsertionSort(tweets, sortBy);
    }
}

void ascendingMerge(std::vector<Tweet> &tweets, int left, int mid, int right, const std::string &sortBy)
{
    int s1 = mid - left + 1; // Sol subarrayi tutan vektörün size'ı
    int s2 = right - mid;

    vector<Tweet> L(s1), R(s2);
    // Datayı temp vektörlere kopyalama
    for (int i = 0; i < s1; i++)
    {
        L[i] = tweets[left + i]; // Boş olan vektöre mevcut vektörün solundan başlayarak kopyalıyoruz.
        // Unutma recursive fonksiyonlar olduğu için ilk tekli, sonra 2'li vb. elemanlar birleşmiş olacak.
    }
    for (int j = 0; j < s2; j++)
    {
        R[j] = tweets[mid + 1 + j]; // Ortadaki elemanın bir sağından yani m+1'den başlayarak kopyalıyoruz.
    }

    int i = 0, j = 0;
    int k = left;
    if (sortBy == "retweetCount")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].retweetCount <= R[j].retweetCount)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    else if (sortBy == "favoriteCount")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].favoriteCount <= R[j].favoriteCount)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    else if (sortBy == "tweetID")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].tweetID <= R[j].tweetID)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    while (i < s1)
    { // Eğer R vektörünün yerleştirilmesi L'den erken biterse burası kullanılacak.
        tweets[k] = L[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        tweets[k] = R[j];
        j++;
        k++;
    }
}
void descendingMerge(std::vector<Tweet> &tweets, int left, int mid, int right, const std::string &sortBy)
{
    int s1 = mid - left + 1; // Sol subarrayi tutan vektörün size'ı
    int s2 = right - mid;

    vector<Tweet> L(s1), R(s2);
    // Datayı temp vektörlere kopyalama
    for (int i = 0; i < s1; i++)
    {
        L[i] = tweets[left + i]; // Boş olan vektöre mevcut vektörün solundan başlayarak kopyalıyoruz.
        // Unutma recursive fonksiyonlar olduğu için ilk tekli, sonra 2'li vb. elemanlar birleşmiş olacak.
    }
    for (int j = 0; j < s2; j++)
    {
        R[j] = tweets[mid + 1 + j]; // Ortadaki elemanın bir sağından yani m+1'den başlayarak kopyalıyoruz.
    }

    int i = 0, j = 0;
    int k = left;
    if (sortBy == "retweetCount")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].retweetCount >= R[j].retweetCount)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    else if (sortBy == "favoriteCount")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].favoriteCount >= R[j].favoriteCount)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    else if (sortBy == "tweetID")
    {
        // Temp vektörleri orjinal vektörümüze gönderiyoruz.
        while (i < s1 && j < s2)
        {
            if (L[i].tweetID >= R[j].tweetID)
            { // Sol subarrayi ve sağ subarrayi ilk elemanlarından başlayarak kıyaslamaya başlıyoruz.
              //  Küçük olan k indexine yani left'e yazılıyor.
                tweets[k] = L[i];
                i++;
            }
            else
            {
                tweets[k] = R[j];
                j++;
            }
            k++;
        }
    }
    while (i < s1)
    { // Eğer R vektörünün yerleştirilmesi L'den erken biterse burası kullanılacak.
        tweets[k] = L[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        tweets[k] = R[j];
        j++;
        k++;
    }
}
void merge(std::vector<Tweet> &tweets, int left, int mid, int right, const std::string &sortBy, bool ascending)
{
    if (ascending)
    {
        ascendingMerge(tweets, left, mid, right, sortBy);
    }
    else
    {
        descendingMerge(tweets, left, mid, right, sortBy);
    }
}

void mergeSort(std::vector<Tweet> &tweets, int left, int right, const std::string &sortBy, bool ascending)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(tweets, left, mid, sortBy, ascending);
        mergeSort(tweets, mid + 1, right, sortBy, ascending);
        merge(tweets, left, mid, right, sortBy, ascending);
    }
    else
    {
        return;
    }
}