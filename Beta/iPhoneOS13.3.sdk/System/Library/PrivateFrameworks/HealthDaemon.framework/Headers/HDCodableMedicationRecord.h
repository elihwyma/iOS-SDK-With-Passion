/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationRecord : PBCodable <Swift>

{
    long long _assertionType;
    NSString *_asserter;
    NSData *_assertionDate;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_effectiveEndDate;
    NSData *_effectiveStartDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    HDCodableMedicalCodingList *_reasonForUseCodings;
    HDCodableMedicalCodingListList *_reasonsNotTakenCodings;
    HDCodableMedicalCoding *_statusCoding;
    _Bool _notTaken;
    struct {
        unsigned int assertionType:1;
        unsigned int notTaken:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasMedicationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodings;
@property (nonatomic) _Bool hasAssertionType;
@property (nonatomic) long long assertionType;
@property (nonatomic, readonly) _Bool hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (nonatomic, readonly) _Bool hasAssertionDate;
@property (retain, nonatomic) NSData *assertionDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (nonatomic, readonly) _Bool hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (nonatomic, readonly) _Bool hasReasonForUseCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonForUseCodings;
@property (nonatomic) _Bool hasNotTaken;
@property (nonatomic) _Bool notTaken;
@property (nonatomic, readonly) _Bool hasReasonsNotTakenCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotTakenCodings;
@property (nonatomic, readonly) _Bool hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (nonatomic, readonly) _Bool hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;

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
