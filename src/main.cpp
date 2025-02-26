#include "tweet.h"
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    vector<Tweet> tweets = readTweetsFromFile("data/permutations/tweets.csv");


    auto start = chrono::high_resolution_clock::now();
    bubbleSort(tweets, "retweetCount", false);
    auto end = chrono::high_resolution_clock::now();
    auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Elapsed time for bubble sort algorithm: " << elapsed_time.count() << " milliseconds" << endl;

    // auto start = chrono::high_resolution_clock::now();
    // insertionSort(tweets, "retweetCount", true);
    // auto end = chrono::high_resolution_clock::now();
    // auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end - start);
    // cout << "Elapsed time for insertionSort: " << elapsed_time.count() << " milliseconds" << endl;

    // auto start = chrono::high_resolution_clock::now();
    // mergeSort(tweets, 0, tweets.size() - 1, "retweetCount", true);
    // auto end = chrono::high_resolution_clock::now();
    // auto elapsed_time = chrono::duration_cast<chrono::milliseconds>(end - start);
    // cout << "Elapsed time for merge sort algorithm: " << elapsed_time.count() << " milliseconds" << endl;

    // auto start = chrono::high_resolution_clock::now();
    // int result = binarySearch(tweets, 1773335, "tweetID");
    // auto end = chrono::high_resolution_clock::now();
    // auto elapsed_time = chrono::duration_cast<chrono::nanoseconds>(end - start);
    // cout << "Elapsed time for binary search algorithm: " << elapsed_time.count() << " nanoseconds" << endl;
    // if (result == -1)
    //     cout << "Element is not present in array" << endl;
    // else
    //     cout << "Element is present at index " << result << endl;

    // auto start = chrono::high_resolution_clock::now();
    // int number = countAboveThreshold(tweets, "favoriteCount", 250);
    // auto end = chrono::high_resolution_clock::now();
    // auto elapsed_time = chrono::duration_cast<chrono::microseconds>(end - start);
    // cout << "Elapsed time for binary search algorithm: " << elapsed_time.count() << " microseconds" << endl;
    // cout << "The number of elements above the given metric is " << number << endl;
    // mergeSort(tweets, 0, tweets.size() - 1, "favoriteCount", true);
    
    
    

    ofstream file("data/permutations/tweets_output.csv");
    if (file.fail())
    {
        cout << "File is not open" << endl;
    }

    writeTweetsToFile("data/permutations/tweets_output.csv", tweets);
    return 0;
}
