/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID[20];
};

struct RSDAAPChunk {
    struct RSDAAPChunkHeader _field1;
    char *_field2;
};

struct RSDAAPChunkHeader {
    unsigned int _field1;
    unsigned int _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

typedef struct {
    unsigned int _field1;
    unsigned long long _field2;
} CDStruct_d008d4b8;

// Ambiguous groups
typedef struct {
    unsigned int responseCode:1;
    unsigned int sessionIdentifier:1;
} CDStruct_377099b8;

typedef struct {
    unsigned int sessionIdentifier:1;
    unsigned int volume:1;
} CDStruct_77dc7163;

typedef struct {
    unsigned int sessionIdentifier:1;
} CDStruct_07a29e00;
