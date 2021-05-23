/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableInspectableValue, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableConditionRecord : PBCodable <Swift>

{
    HDCodableInspectableValue *_abatement;
    NSString *_asserter;
    HDCodableMedicalCodingListList *_bodySitesCodings;
    HDCodableMedicalCodingList *_categoryCodings;
    HDCodableMedicalCoding *_clinicalStatusCoding;
    HDCodableMedicalCodingList *_conditionCodings;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableInspectableValue *_onset;
    NSData *_recordedDate;
    HDCodableMedicalCodingList *_severityCodings;
    HDCodableMedicalCoding *_verificationStatusCoding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasConditionCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *conditionCodings;
@property (nonatomic, readonly) _Bool hasCategoryCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *categoryCodings;
@property (nonatomic, readonly) _Bool hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (nonatomic, readonly) _Bool hasAbatement;
@property (retain, nonatomic) HDCodableInspectableValue *abatement;
@property (nonatomic, readonly) _Bool hasOnset;
@property (retain, nonatomic) HDCodableInspectableValue *onset;
@property (nonatomic, readonly) _Bool hasRecordedDate;
@property (retain, nonatomic) NSData *recordedDate;
@property (nonatomic, readonly) _Bool hasClinicalStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding;
@property (nonatomic, readonly) _Bool hasVerificationStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *verificationStatusCoding;
@property (nonatomic, readonly) _Bool hasSeverityCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *severityCodings;
@property (nonatomic, readonly) _Bool hasBodySitesCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodings;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;

@end
