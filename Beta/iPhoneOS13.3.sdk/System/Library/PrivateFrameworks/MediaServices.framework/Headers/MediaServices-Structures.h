/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

typedef void (^CDUnknownBlockType)(void);

struct CGSize {
    double width;
    double height;
};

struct _MSVSignedRange {
    long long _field1;
    long long _field2;
};

struct internal_state;

struct z_stream_s {
    char *_field1;
    unsigned int _field2;
    unsigned long long _field3;
    char *_field4;
    unsigned int _field5;
    unsigned long long _field6;
    char *_field7;
    struct internal_state *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    void *_field11;
    int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;
