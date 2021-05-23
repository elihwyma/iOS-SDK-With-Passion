/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@interface NRPBNumber : PBCodable <Swift>

{
    double _doubleValue;
    long long _int64Value;
    float _floatValue;
    int _int32Value;
    _Bool _boolValue;
    _Bool _isShortOrChar;
    _Bool _isUnsigned;
    struct {
        unsigned int doubleValue:1;
        unsigned int int64Value:1;
        unsigned int floatValue:1;
        unsigned int int32Value:1;
        unsigned int boolValue:1;
        unsigned int isShortOrChar:1;
        unsigned int isUnsigned:1;
    } _has;
}

@property (nonatomic) _Bool hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) _Bool hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) _Bool hasBoolValue;
@property (nonatomic) _Bool boolValue;
@property (nonatomic) _Bool hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) _Bool hasIsUnsigned;
@property (nonatomic) _Bool isUnsigned;
@property (nonatomic) _Bool hasIsShortOrChar;
@property (nonatomic) _Bool isShortOrChar;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
