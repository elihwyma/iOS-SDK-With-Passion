/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRPBNumber, NRPBSize, NSData, NSMutableArray, NSString;

@interface NRPBPropertyValue : PBCodable <Swift>

{
    NSMutableArray *_arrayValues;
    NSData *_dataValue;
    NRPBPropertyValue *_dictionaryKey;
    NRPBNumber *_numberValue;
    NRPBSize *_sizeValue;
    NSString *_stringValue;
    NSData *_uUIDValue;
    _Bool _isDate;
    _Bool _isError;
    _Bool _isMiniUUIDSet;
    _Bool _isSecurePropertyValue;
    _Bool _isSet;
    struct {
        unsigned int isDate:1;
        unsigned int isError:1;
        unsigned int isMiniUUIDSet:1;
        unsigned int isSecurePropertyValue:1;
        unsigned int isSet:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasNumberValue;
@property (retain, nonatomic) NRPBNumber *numberValue;
@property (nonatomic, readonly) _Bool hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (nonatomic, readonly) _Bool hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (nonatomic, readonly) _Bool hasSizeValue;
@property (retain, nonatomic) NRPBSize *sizeValue;
@property (nonatomic, readonly) _Bool hasDictionaryKey;
@property (retain, nonatomic) NRPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;
@property (nonatomic) _Bool hasIsSet;
@property (nonatomic) _Bool isSet;
@property (nonatomic) _Bool hasIsSecurePropertyValue;
@property (nonatomic) _Bool isSecurePropertyValue;
@property (nonatomic) _Bool hasIsDate;
@property (nonatomic) _Bool isDate;
@property (nonatomic) _Bool hasIsError;
@property (nonatomic) _Bool isError;
@property (nonatomic) _Bool hasIsMiniUUIDSet;
@property (nonatomic) _Bool isMiniUUIDSet;

+ (Class)arrayValuesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addArrayValues:(id)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;

@end
