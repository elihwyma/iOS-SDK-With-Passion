/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@class NSData;

typedef void (^CDUnknownBlockType)(void);

typedef struct {
    NSData *imageData;
    unsigned int width;
    unsigned int height;
} CDStruct_ee380287;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_524073b0;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
} CDStruct_da492c19;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    CDStruct_524073b0 _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned char _field6[0];
} CDStruct_b5879008;

typedef struct {
    int count;
    int capa;
    CDStruct_183601bc **items;
    int unusedImageCount;
    int componentCount;
    int componentCapa;
    int bestComponentIndex;
    int bestMapiComponentIndex;
    CDStruct_183601bc **components;
    short mapiNodeAddedIndex;
    short mapiNodeRemovedIndex;
    int updateCount;
    _Bool structureIsInconsistent;
} CDStruct_87aaca7b;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
    CDStruct_da492c19 _field4;
    struct {
        short _field1;
        short _field2;
        short _field3;
        short _field4;
        short _field5;
        short _field6;
        short _field7;
        unsigned char _field8[16];
        unsigned char _field9[16];
        short _field10;
        struct {
            CDStruct_da492c19 _field1;
            short _field2;
            short _field3;
        } _field11[300];
        short _field12;
        short _field13;
        short _field14;
        short _field15;
        short _field16;
        short _field17;
    } _field5;
    int _field6;
    int _field7;
} CDStruct_2c3997d1;
