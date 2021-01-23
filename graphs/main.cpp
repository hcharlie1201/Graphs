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

auto client = mongocxx::client{
    uri{"mongodb://host1/?authMechanism=MONGODB-X509&tlsCertificateFile=client.pem&tls=true"}};

const mongocxx::instance instance{}; // This should be done only once.
const mongocxx::uri uri("mongodb://localhost:27017");
const mongocxx::client client(uri);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
