#include "tweet.h"

int binarySearch(const std::vector<Tweet> &tweets, long long key, const std::string &sortBy)
{
    int left = 0;
    int right = tweets.size() - 1;
    long long midValue;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (sortBy == "retweetCount") 
        {

            midValue = static_cast<long long>(tweets[mid].retweetCount);
            if (midValue == key)
            {               
                return mid; 
            }
            else if (midValue < key)
            {                   
                left = mid + 1; 
            }
            else
            {                   
                right = mid - 1; 
            }
        }
        else if (sortBy == "favoriteCount")
        {

            midValue = static_cast<long long>(tweets[mid].favoriteCount);
            if (midValue == key)
            {               
                return mid; 
            }
            else if (midValue < key)
            {                   
                left = mid + 1; 
            }
            else
            {                    
                right = mid - 1; 
            }
        }
        else if (sortBy == "tweetID")
        {

            midValue = tweets[mid].tweetID;
            if (midValue == key)
            {               
                return mid; 
            }
            else if (midValue < key)
            {                   
                left = mid + 1; 
            }
            else
            {                    
                right = mid - 1; 
            }
        }
    }

    return -1; 
}

int countAboveThreshold(const std::vector<Tweet> &tweets, const std::string &metric, int threshold)
{
    int count = 0;
    for (int i = 0; i < tweets.size(); i++)
    {
        if (metric == "retweetCount")
        {
            if (tweets[i].retweetCount > threshold)
            {
                count++;
            }
        }
        else if (metric == "favoriteCount") {
            if (tweets[i].favoriteCount > threshold)
            {
                count++;
            }
        }
        else if (metric == "tweetID")
        {
            if (tweets[i].tweetID > static_cast<long long>(threshold))
            {
                count++;
            }
        }
    }
    return count;
}
