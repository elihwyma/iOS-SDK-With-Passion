/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable

{
    double _dateValue;
    double _doubleValue;
    long long _integerValue;
    NSData *_blobValue;
    NSString *_stringValue;
    _DKPRValueType *_type;
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
    } _has;
}

@property (retain, nonatomic) _DKPRValueType *type;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasBlobValue;
@property (retain, nonatomic) NSData *blobValue;
@property (nonatomic) _Bool hasDateValue;
@property (nonatomic) double dateValue;

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
