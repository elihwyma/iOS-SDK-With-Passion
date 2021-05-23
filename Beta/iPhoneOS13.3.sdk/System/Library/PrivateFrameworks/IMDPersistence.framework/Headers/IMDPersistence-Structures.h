/*
 Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

typedef void (^CDUnknownBlockType)(void);

struct IMDSqlOperation {
    void *_field1;
    void *_field2;
    struct __CFString *_field3;
    void *_field4;
    struct IMDSqlStatement _field5;
    struct __CFError *_field6;
};

struct IMDSqlStatement {
    void *_field1;
    int _field2;
    struct __CFString *_field3;
    struct sqlite3 *_field4;
    int _field5;
    int _field6;
    int _field7;
    struct IMPerfMeasurement_t _field8;
};

struct IMFileLocation_t {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    int _field5;
};

struct IMPerfMeasurement_t {
    struct IMFileLocation_t _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct __CFString *_field4;
    double _field5;
    double _field6;
    double _field7;
};

struct _IMDHandleRecordStruct;

struct _IMDMessageRecordStruct {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    long long _field2;
    struct __CFArray *_field3;
    struct _IMDHandleRecordStruct *_field4;
    struct _IMDHandleRecordStruct *_field5;
    struct __CFArray *_field6;
};

struct __CFArray;

struct __CFString;

struct sqlite3;
