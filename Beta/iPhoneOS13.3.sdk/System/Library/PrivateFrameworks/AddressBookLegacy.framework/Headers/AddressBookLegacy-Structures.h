/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

typedef void (*CDUnknownFunctionPointerType)(void);
typedef void (^CDUnknownBlockType)(void);

struct CPSqliteConnection {
    struct CPSqliteDatabase *_field1;
    struct sqlite3 *_field2;
    struct __CFDictionary *_field3;
    struct __CFDictionary *_field4;
    void *_field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    void *_field8;
    unsigned int _field9;
    _Bool _field10;
};

struct CPSqliteDatabase;

struct CPSqliteStatement {
    struct CPSqliteConnection *_field1;
    struct sqlite3_stmt *_field2;
    double _field3;
    _Bool _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFDictionary;

struct sqlite3;

struct sqlite3_stmt;
