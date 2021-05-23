/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <Swift>

{
    double _numberDoubleValue;
    long long _numberIntValue;
    double _timestamp;
    NSData *_bytesValue;
    NSString *_key;
    NSString *_stringValue;
    struct {
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) _Bool hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setTimestampWithDate:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3;
- (id)decodedValue;
- (id)decodedTimestamp;

@end
