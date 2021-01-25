//
//  main.cpp
//  graphs
//
//  Created by Mushmom Room on 1/10/21.
//
#include <cstdint>
#include <iostream>
#include <vector>
#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/stdx.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/instance.hpp>
#include <bsoncxx/builder/stream/helpers.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/array.hpp>
#include <iostream>

using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::open_document;

mongocxx::instance instance{}; // This should be done only once.
mongocxx::uri uri("mongodb+srv://charlie:cw@cluster0.bzktw.mongodb.net/Graphs?retryWrites=true&w=majority");
mongocxx::client client(uri);

int main(int argc, const char * argv[]) {
    // insert code here...
    mongocxx::database db = client["Graphs"];
    mongocxx::collection myColl = db["Nodes"];
    mongocxx::cursor cursor = myColl.find({});
    for(auto doc : cursor) {
        std::cout << bsoncxx::to_json(doc) << "\n";
    }

    return 0;
}
