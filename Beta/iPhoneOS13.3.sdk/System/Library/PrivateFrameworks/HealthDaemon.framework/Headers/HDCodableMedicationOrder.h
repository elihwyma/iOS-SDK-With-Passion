/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationOrder : PBCodable <Swift>

{
    long long _numberOfFills;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_endedDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    NSString *_prescriber;
    HDCodableMedicalCodingList *_reasonCodings;
    HDCodableMedicalCodingList *_reasonEndedCodings;
    HDCodableMedicalCoding *_statusCoding;
    NSData *_writtenDate;
    struct {
        unsigned int numberOfFills:1;
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
@property (nonatomic, readonly) _Bool hasPrescriber;
@property (retain, nonatomic) NSString *prescriber;
@property (nonatomic) _Bool hasNumberOfFills;
@property (nonatomic) long long numberOfFills;
@property (nonatomic, readonly) _Bool hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (nonatomic, readonly) _Bool hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (nonatomic, readonly) _Bool hasWrittenDate;
@property (retain, nonatomic) NSData *writtenDate;
@property (nonatomic, readonly) _Bool hasEndedDate;
@property (retain, nonatomic) NSData *endedDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasReasonCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonCodings;
@property (nonatomic, readonly) _Bool hasReasonEndedCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonEndedCodings;

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
