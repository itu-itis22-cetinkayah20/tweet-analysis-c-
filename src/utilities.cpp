#include "tweet.h"
#include <fstream>
using namespace std;

string trash;

Tweet createTweet(long long tweetID, int retweetCount, int favoriteCount)
{
    Tweet tweet;
    tweet.tweetID = tweetID;
    tweet.retweetCount = retweetCount;
    tweet.favoriteCount = favoriteCount;
    return tweet;
}

std::vector<Tweet> readTweetsFromFile(const std::string &filename)
{
    std::vector<Tweet> tweets;

    ifstream file(filename);
    if (file.fail())
    {
        cout << "File is not open" << endl;
        return tweets;
    }
    if (file.is_open())
    {

        getline(file, trash);
        long long tweetID; // Tweet ID (long long for large ID values)
        int retweetCount; // Retweet Count
        int favoriteCount;

        while (!file.eof()) // End of the file = true
        {

            string tweetIDStr,retweetCountStr,favoriteCountStr;
            getline(file, tweetIDStr, ',');
            getline(file, retweetCountStr, ',');
            getline(file, favoriteCountStr, '\n');

            if(tweetIDStr == "" || retweetCountStr == "" || favoriteCountStr == "")
            {
                break;
            }

            tweetID = stoll(tweetIDStr); // stol = string to long, stoll = string to long long
            
            retweetCount = stoi(retweetCountStr);

            
            favoriteCount = stoi(favoriteCountStr);

            

            // Create a Tweet object and add it to the vector

            tweets.push_back(createTweet(tweetID, retweetCount, favoriteCount));
        }
    }
    file.close();

    return tweets;
}

void writeTweetsToFile(const std::string &filename, const std::vector<Tweet> &tweets)
{
    ofstream file(filename);
    if (file.fail())
    {
        cout << "File is not open" << endl;
    }
    if (file.is_open())
        file << trash << endl;
    {
        for (int i = 0; i < tweets.size(); i++)
        {
            file << tweets[i].tweetID << "," << tweets[i].retweetCount << "," << tweets[i].favoriteCount;
            if (i != tweets.size() - 1)
            {
                file << "\n";
            }
        }
    }
    trash.clear();
    file.close();
}