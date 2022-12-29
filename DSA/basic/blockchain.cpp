#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>

const int DIFFICULTY = 4;

struct Block {
    int index;
    std::time_t timestamp;
    std::string data;
    std::string previous_hash;
    std::string hash;
    int nonce;

    Block(int index, std::time_t timestamp, std::string data, std::string previous_hash, int nonce)
        : index(index), timestamp(timestamp), data(data), previous_hash(previous_hash), nonce(nonce)
    {
        hash = calculate_hash();
    }

    std::string calculate_hash() const
    {
        std::stringstream ss;
        ss << index << timestamp << data << previous_hash << nonce;
        return std::to_string(std::hash<std::string>{}(ss.str()));
    }

    void mine_block(int difficulty)
    {
        while (hash.substr(0, difficulty) != std::string(difficulty, '0')) {
            nonce++;
            hash = calculate_hash();
        }
    }
};

class Blockchain {
private:
    std::vector<Block> chain;

public:
    Blockchain()
    {
        chain.emplace_back(Block(0, std::time(nullptr), "Genesis Block", "0", 0));
    }

    void add_block(std::string data)
    {
        const auto& previous_block = get_last_block();
        chain.emplace_back(Block(previous_block.index + 1, std::time(nullptr), data, previous_block.hash, 0));
        get_last_block().mine_block(DIFFICULTY);
    }

    const Block& get_last_block() const
    {
        return chain.back();
    }
};

int main()
{
    Blockchain blockchain;
    blockchain.add_block("Transaction 1");
    blockchain.add_block("Transaction 2");
    blockchain.add_block("Transaction 3");

    for (const auto& block : blockchain.chain) {
        std::cout << "Index: " << block.index << '\n';
        std::cout << "Timestamp: " << block.timestamp << '\n';
        std::cout << "Data: " << block.data << '\n';
        std::cout << "Previous Hash: " << block.previous_hash << '\n';
        std::cout << "Hash: " << block.hash << '\n';
        std::cout << '\n';
    }

    return 0;
}
