#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/basic/document.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

#include <bsoncxx/builder/stream/helpers.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/array.hpp>

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


    auto doc1 = document{}
        << "group" << "233-1"
        << "weektype" << "nechetna9"
        << "day" << "ponedelnik"
        << "lessons" << open_array
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc2 = document{}
        << "group" << "233-1"
        << "weektype" << "nechetna9"
        << "day" << "vtornik"
        << "lessons" << open_array
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "aud 9A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Zoikin E.C"
        << "aud 117A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Nepomn9shiy A.A"
        << "aud 209A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Inostranniy 9zik"
        << "Melchenko T.B"
        << "aud 525B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc3 = document{}
        << "group" << "233-1"
        << "weektype" << "nechetna9"
        << "day" << "sreda"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Chabanov B.B"
        << "aud 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document 
        << "Fizicheskaya kultura"
        << "Malchev B.A"
        << "sport zal TA(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc4 = document{}
        << "group" << "233-1"
        << "weektype" << "nechetna9"
        << "day" << "chetverg"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "ayd 9A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Delovaya kommunikaciya i rysskaya kultura rechi"
        << "Rydnickaya L.I"
        << "ayd 302A(pr. Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Stryktyri i algoritmy obrabotki dannyx"
        << "Groskaya I.U"
        << "ayd 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << close_array
        << finalize;

    auto doc5 = document{}
        << "group" << "233-1"
        << "weektype" << "nechetna9"
        << "day" << "p9tnica"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Leybenson U.T"
        << "ayd 309A (pr Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc6 = document{}
        << "group" << "233-1"
        << "weektype" << "chetna9"
        << "day" << "ponedelnik"
        << "lessons" << open_array
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc7 = document{}
        << "group" << "233-1"
        << "weektype" << "chetna9"
        << "day" << "vtornik"
        << "lessons" << open_array
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "aud 9A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Zoikin E.C"
        << "aud 117A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Nepomn9shiy A.A"
        << "aud 209A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << close_array
        << finalize;

    auto doc8 = document{}
        << "group" << "233-1"
        << "weektype" << "chetna9"
        << "day" << "sreda"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Chabanov B.B"
        << "aud 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Stryktyra i obrabotka dannyx"
        << "Gorskaya I.U."
        << "aud 315A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Fizicheskaya kultura"
        << "Malchev B.A"
        << "sport zal TA(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc9 = document{}
        << "group" << "233-1"
        << "weektype" << "chetna9"
        << "day" << "chetverg"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Delovaya kommunikaciya i rysskaya kultura rechi"
        << "Rydnickaya L.I"
        << "ayd 302A(pr. Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Inostranniy 9zik"
        << "Melchenko T.B"
        << "aud 525B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto doc10 = document{}
        << "group" << "233-1"
        << "weektype" << "chetna9"
        << "day" << "p9tnica"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Leybenson U.T"
        << "ayd 309A (pr Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    //collection1.insert_one(doc1.view());
    //collection1.insert_one(doc2.view());
    //collection1.insert_one(doc3.view());
    //collection1.insert_one(doc4.view());
    //collection1.insert_one(doc5.view());
    //collection1.insert_one(doc6.view());
    //collection1.insert_one(doc7.view());
    //collection1.insert_one(doc8.view());
    //collection1.insert_one(doc9.view());
    //collection1.insert_one(doc10.view());

    auto Doc1 = document{}
        << "group" << "233-2"
        << "weektype" << "nechetna9"
        << "day" << "ponedelnik"
        << "lessons" << open_array
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc2 = document{}
        << "group" << "233-2"
        << "weektype" << "nechetna9"
        << "day" << "vtornik"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "aud 9A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Nepomn9shiy A.A"
        << "aud 209A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << close_array
        << finalize;

    auto Doc3 = document{}
        << "group" << "233-2"
        << "weektype" << "nechetna9"
        << "day" << "sreda"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Zavyalov"
        << "aud 119A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Chabanov B.B"
        << "aud 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Fizicheskaya kultura"
        << "Malchev B.A"
        << "sport zal TA(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc4 = document{}
        << "group" << "233-2"
        << "weektype" << "nechetna9"
        << "day" << "chetverg"
        << "lessons" << open_array
        << open_document
        << "Inostranniy 9zik"
        << "Skl9renko"
        << "aud 409B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "ayd 9A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Delovaya kommunikaciya i rysskaya kultura rechi"
        << "Rydnickaya L.I"
        << "ayd 302A(pr. Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Stryktyri i algoritmy obrabotki dannyx"
        << "Groskaya I.U"
        << "ayd 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << close_array
        << finalize;

    auto Doc5 = document{}
        << "group" << "233-2"
        << "weektype" << "nechetna9"
        << "day" << "p9tnica"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Leybenson U.T"
        << "ayd 309A (pr Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc6 = document{}
        << "group" << "233-2"
        << "weektype" << "chetna9"
        << "day" << "ponedelnik"
        << "lessons" << open_array
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Vishaya matematika"
        << "Smirnova. S.I"
        << "aud 211A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Osnovi Rossiskoy Gosudarstvennosti"
        << "Klimenko E.P"
        << "aud 306B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc7 = document{}
        << "group" << "233-2"
        << "weektype" << "chetna9"
        << "day" << "vtornik"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Osnovi Cifrovoy Gramotnosti"
        << "Kornienko A.Y"
        << "aud 9A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Nepomn9shiy A.A"
        << "aud 209A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << close_array
        << finalize;

    auto Doc8 = document{}
        << "group" << "233-2"
        << "weektype" << "chetna9"
        << "day" << "sreda"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Zavyalov"
        << "aud 224A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Algoritmizaciya i programmirovanie"
        << "Chabanov B.B"
        << "aud 302A(pr.Vernadskogo 4)"
        << "LK" << close_document
        << open_document
        << "Stryktyra i obrabotka dannyx"
        << "Gorskaya I.U."
        << "aud 315A(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Fizicheskaya kultura"
        << "Malchev B.A"
        << "sport zal TA(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc9 = document{}
        << "group" << "233-2"
        << "weektype" << "chetna9"
        << "day" << "chetverg"
        << "lessons" << open_array
        << open_document
        << "Inostranniy 9zik"
        << "Melchenko T.B"
        << "aud 525B(pr.Vernadskogo 4)"
        << "PZ" << close_document
        << open_document
        << "Delovaya kommunikaciya i rysskaya kultura rechi"
        << "Rydnickaya L.I"
        << "ayd 302A(pr. Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    auto Doc10 = document{}
        << "group" << "233-2"
        << "weektype" << "chetna9"
        << "day" << "p9tnica"
        << "lessons" << open_array
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "-"
        << "-" << close_document
        << open_document
        << "Istoriya Rossii"
        << "Leybenson U.T"
        << "ayd 309A (pr Vernadskogo 4)"
        << "PZ" << close_document
        << close_array
        << finalize;

    //collection2.insert_one(Doc1.view());
    //collection2.insert_one(Doc2.view());
    //collection2.insert_one(Doc3.view());
    //collection2.insert_one(Doc4.view());
    //collection2.insert_one(Doc5.view());
    //collection2.insert_one(Doc6.view());
    //collection2.insert_one(Doc7.view());
    //collection2.insert_one(Doc8.view());
    //collection2.insert_one(Doc9.view());
    //collection2.insert_one(Doc10.view());

}
