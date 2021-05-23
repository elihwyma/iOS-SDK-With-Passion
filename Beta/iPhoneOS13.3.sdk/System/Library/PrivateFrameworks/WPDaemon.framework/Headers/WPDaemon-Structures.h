/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

typedef void (^CDUnknownBlockType)(void);

struct NSMutableArray {
    Class _field1;
};

struct os_state_data_decoder_s {
    char _field1[64];
    char _field2[64];
};

struct os_state_data_s {
    unsigned int _field1;
    union {
        unsigned int :32;
        unsigned int _field1;
    } _field2;
    struct os_state_data_decoder_s _field3;
    char _field4[64];
    unsigned char _field5[0];
};

typedef struct {
    long long screenOnInterval;
    long long screenOffInterval;
    long long window;
} CDStruct_9e3626a3;
