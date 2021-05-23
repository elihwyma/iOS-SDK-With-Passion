/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPDate, FCCKPRecordReference, NSData, NSMutableArray, NSString;

@interface FCCKPRecordFieldValue : PBCodable <Swift>

{
    double _doubleValue;
    long long _signedValue;
    NSData *_bytesValue;
    FCCKPDate *_dateValue;
    NSMutableArray *_listValues;
    FCCKPRecordReference *_referenceValue;
    NSString *_stringValue;
    int _type;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) _Bool hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasDateValue;
@property (retain, nonatomic) FCCKPDate *dateValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasReferenceValue;
@property (retain, nonatomic) FCCKPRecordReference *referenceValue;
@property (retain, nonatomic) NSMutableArray *listValues;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addListValue:(id)arg1;
- (unsigned long long)listValuesCount;
- (void)clearListValues;
- (id)listValueAtIndex:(unsigned long long)arg1;

@end
