#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

#include <bsoncxx/builder/stream/helpers.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/array.hpp>

#include <iostream>

using bsoncxx::builder::basic::kvp;
using bsoncxx::builder::basic::make_array;
using bsoncxx::builder::basic::make_document;

using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::open_document;
using bsoncxx::builder::stream::close_document;


using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    mongocxx::instance inst{};

    const auto uri = mongocxx::uri{ "mongodb+srv://user_db:123@scheduledb.gc7djyc.mongodb.net/" };

    mongocxx::client connection{ uri };

    mongocxx::database db = connection["Raspisanie"];

    auto collection1 = db["PI-233-1"];
    auto collection2 = db["PI-233-2"];

    int a, b, c;
    cout << "Vvedite group: " << endl;
    cout << "1 - 233-1" << endl;
    cout << "2 - 233-2" << endl;
    cout << "Enter: ";
    cin >> a;

    cout << endl << "Vvedite weektype: " << endl;
    cout << "1 - chenta9" << endl;
    cout << "2 - nechetna9" << endl;
    cout << "Enter: ";
    cin >> b;

    cout << endl << "Vvedite denb nedeli: " << endl;
    cout << "1 - ponedelnik" << endl;
    cout << "2 - vtornik" << endl;
    cout << "3 - sreda" << endl;
    cout << "4 - chetverg" << endl;
    cout << "5 - p9tnica" << endl;
    cout << "Enter: ";
    cin >> c;

    if (a == 1) {
        if (b == 1) {
            if (c == 1) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "chetna9"  << "day" << "ponedelnik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 2) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "chetna9" << "day" << "vtornik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 3) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "chetna9" << "day" << "sreda" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 4) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "chetna9" << "day" << "chetverg" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 5) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "chetna9" << "day" << "p9tnica" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
        }
        if (b == 2) {
            if (c == 1) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "nechetna9" << "day" << "ponedelnik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 2) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "nechetna9" << "day" << "vtornik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 3) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "nechetna9" << "day" << "sreda" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 4) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "nechetna9" << "day" << "chetverg" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 5) {
                auto cursor = collection1.find(document{} << "group" << "233-1" << "weektype" << "nechetna9" << "day" << "p9tnica" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
        }
    }

    if (a == 2) {
        if (b == 1) {
            if (c == 1) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "chetna9" << "day" << "ponedelnik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 2) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "chetna9" << "day" << "vtornik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 3) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "chetna9" << "day" << "sreda" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 4) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "chetna9" << "day" << "chetverg" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 5) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "chetna9" << "day" << "p9tnica" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
        }
        if (b == 2) {
            if (c == 1) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "nechetna9" << "day" << "ponedelnik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 2) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "nechetna9" << "day" << "vtornik" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 3) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "nechetna9" << "day" << "sreda" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 4) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "nechetna9" << "day" << "chetverg" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
            if (c == 5) {
                auto cursor = collection2.find(document{} << "group" << "233-2" << "weektype" << "nechetna9" << "day" << "p9tnica" << finalize);
                for (auto& doc : cursor) {
                    cout << bsoncxx::to_json(doc) << endl;
                }
            }
        }
    }

}
