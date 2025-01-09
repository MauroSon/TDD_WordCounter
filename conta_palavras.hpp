// Copyright @2024 Mauro Silva

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <utility>

class CustomDictionary {
 public:
        // Insert a key-value pair into the dictionary
        void insert(const std::string& key, int value) {
            for (auto& pair : dictionary) {
                if (pair.first == key) {
                    pair.second = value;  // Replace value if key exists
                    return;
                }
            }
            dictionary.push_back({key, value});
            // Insert new pair if key doesn't exist
        }

        // Print all key-value pairs
        void print() const {
            for (const auto& pair : dictionary) {
                std::cout << pair.first << ": " << pair.second << std::endl;
            }
        }

        bool operator==(const CustomDictionary& other) const {
            if (dictionary.size() != other.dictionary.size()) {
                return false;  // Dictionaries of different sizes can't be equal
            }

            for (size_t i = 0; i < dictionary.size(); ++i) {
                if (dictionary[i] != other.dictionary[i]) {
                    return false;  // Pair mismatch
                }
            }

            return true;  // If all checks pass, the dictionaries are equal
        }

        int count(const std::string& key) {
            for (const auto& pair : dictionary) {
                if (pair.first == key) {
                    return pair.second;
                    // Return the value associated with the key (the count)
                }
            }
            return 0;  // If the key is not found, return 0
        }

 private:
        std::vector<std::pair<std::string, int>> dictionary;
};

CustomDictionary contaPalavras(std::string fileName);
