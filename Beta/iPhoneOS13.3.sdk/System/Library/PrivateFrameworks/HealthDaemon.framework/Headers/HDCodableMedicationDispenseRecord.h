/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableCodedQuantity, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableMedicationDosageList, NSData, NSString;

@interface HDCodableMedicationDispenseRecord : PBCodable <Swift>

{
    HDCodableCodedQuantity *_daysSupplyQuantity;
    HDCodableMedicationDosageList *_dosages;
    NSData *_earliestDosageDate;
    NSData *_handOverDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_medicationCodings;
    NSData *_preparationDate;
    HDCodableCodedQuantity *_quantityDispensed;
    HDCodableMedicalCoding *_statusCoding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasMedicationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodings;
@property (nonatomic, readonly) _Bool hasQuantityDispensed;
@property (retain, nonatomic) HDCodableCodedQuantity *quantityDispensed;
@property (nonatomic, readonly) _Bool hasPreparationDate;
@property (retain, nonatomic) NSData *preparationDate;
@property (nonatomic, readonly) _Bool hasHandOverDate;
@property (retain, nonatomic) NSData *handOverDate;
@property (nonatomic, readonly) _Bool hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (nonatomic, readonly) _Bool hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasDaysSupplyQuantity;
@property (retain, nonatomic) HDCodableCodedQuantity *daysSupplyQuantity;

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
