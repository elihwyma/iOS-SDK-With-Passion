/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableCodedQuantity, HDCodableCodedValueCollection, HDCodableDateComponents, HDCodableMedicalCodingList, HDCodableMedicalDate, HDCodableMedicalDateInterval, HDCodableRatioValue, NSString;

@interface HDCodableInspectableValue : PBCodable <Swift>

{
    HDCodableCodedQuantity *_codedQuantityValue;
    HDCodableCodedValueCollection *_codedValueCollection;
    HDCodableMedicalCodingList *_dataAbsentReasonCodingsValue;
    HDCodableDateComponents *_dateComponentsValue;
    HDCodableMedicalCodingList *_medicalCodingValue;
    HDCodableMedicalDateInterval *_medicalDateIntervalValue;
    HDCodableMedicalDate *_medicalDateValue;
    HDCodableRatioValue *_ratioValue;
    NSString *_stringValue;
}

@property (nonatomic, readonly) _Bool hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic, readonly) _Bool hasRatioValue;
@property (retain, nonatomic) HDCodableRatioValue *ratioValue;
@property (nonatomic, readonly) _Bool hasDateComponentsValue;
@property (retain, nonatomic) HDCodableDateComponents *dateComponentsValue;
@property (nonatomic, readonly) _Bool hasCodedQuantityValue;
@property (retain, nonatomic) HDCodableCodedQuantity *codedQuantityValue;
@property (nonatomic, readonly) _Bool hasMedicalCodingValue;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicalCodingValue;
@property (nonatomic, readonly) _Bool hasCodedValueCollection;
@property (retain, nonatomic) HDCodableCodedValueCollection *codedValueCollection;
@property (nonatomic, readonly) _Bool hasMedicalDateValue;
@property (retain, nonatomic) HDCodableMedicalDate *medicalDateValue;
@property (nonatomic, readonly) _Bool hasMedicalDateIntervalValue;
@property (retain, nonatomic) HDCodableMedicalDateInterval *medicalDateIntervalValue;
@property (nonatomic, readonly) _Bool hasDataAbsentReasonCodingsValue;
@property (retain, nonatomic) HDCodableMedicalCodingList *dataAbsentReasonCodingsValue;

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
