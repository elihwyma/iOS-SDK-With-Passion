/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableQuantity, NSData, NSString;

@interface HDCodableMetadataKeyValuePair : PBCodable <Swift>

{
    double _dateValue;
    double _numberDoubleValue;
    long long _numberIntValue;
    NSData *_dataValue;
    NSString *_key;
    HDCodableQuantity *_quantityValue;
    NSString *_stringValue;
    struct {
        unsigned int dateValue:1;
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasDateValue;
@property (nonatomic) double dateValue;
@property (nonatomic) _Bool hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) _Bool hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic, readonly) _Bool hasQuantityValue;
@property (retain, nonatomic) HDCodableQuantity *quantityValue;
@property (nonatomic, readonly) _Bool hasDataValue;
@property (retain, nonatomic) NSData *dataValue;

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
