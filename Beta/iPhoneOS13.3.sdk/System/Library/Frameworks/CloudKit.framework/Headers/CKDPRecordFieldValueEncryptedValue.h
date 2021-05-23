/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <PBCodable.h>

@class CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, NSMutableArray, NSString;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable

{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _doubleListValues;
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _signedListValues;
    double _doubleValue;
    long long _signedValue;
    NSMutableArray *_dateListValues;
    CKDPDate *_dateValue;
    NSMutableArray *_locationListValues;
    CKDPLocationCoordinate *_locationValue;
    CKDPRecordReference *_referenceValue;
    NSMutableArray *_stringListValues;
    NSString *_stringValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
    } _has;
}

@property (nonatomic) _Bool hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) _Bool hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) _Bool hasDateValue;
@property (retain, nonatomic) CKDPDate *dateValue;
@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasLocationValue;
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue;
@property (nonatomic, readonly) _Bool hasReferenceValue;
@property (retain, nonatomic) CKDPRecordReference *referenceValue;
@property (nonatomic, readonly) unsigned long long signedListValuesCount;
@property (nonatomic, readonly) long long *signedListValues;
@property (nonatomic, readonly) unsigned long long doubleListValuesCount;
@property (nonatomic, readonly) double *doubleListValues;
@property (retain, nonatomic) NSMutableArray *dateListValues;
@property (retain, nonatomic) NSMutableArray *stringListValues;
@property (retain, nonatomic) NSMutableArray *locationListValues;

+ (Class)dateListValueType;
+ (Class)stringListValueType;
+ (Class)locationListValueType;

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
- (void)addDateListValue:(id)arg1;
- (void)addStringListValue:(id)arg1;
- (void)addLocationListValue:(id)arg1;
- (void)clearSignedListValues;
- (long long)signedListValueAtIndex:(unsigned long long)arg1;
- (void)addSignedListValue:(long long)arg1;
- (void)clearDoubleListValues;
- (double)doubleListValueAtIndex:(unsigned long long)arg1;
- (void)addDoubleListValue:(double)arg1;
- (unsigned long long)dateListValuesCount;
- (void)clearDateListValues;
- (id)dateListValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)stringListValuesCount;
- (void)clearStringListValues;
- (id)stringListValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationListValuesCount;
- (void)clearLocationListValues;
- (id)locationListValueAtIndex:(unsigned long long)arg1;
- (void)setSignedListValues:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setDoubleListValues:(double *)arg1 count:(unsigned long long)arg2;

@end
