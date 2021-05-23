/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableVaccinationRecord : PBCodable <Swift>

{
    NSData *_administrationDate;
    HDCodableMedicalCodingList *_bodySiteCodings;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSData *_expirationDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSString *_performer;
    NSString *_reaction;
    HDCodableMedicalCodingListList *_reasonsCodings;
    HDCodableMedicalCodingListList *_reasonsNotGivenCodings;
    HDCodableMedicalCodingList *_routeCodings;
    HDCodableMedicalCoding *_statusCoding;
    HDCodableMedicalCodingList *_vaccinationCodings;
    _Bool _notGiven;
    _Bool _patientReported;
    struct {
        unsigned int notGiven:1;
        unsigned int patientReported:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasVaccinationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *vaccinationCodings;
@property (nonatomic, readonly) _Bool hasExpirationDate;
@property (retain, nonatomic) NSData *expirationDate;
@property (nonatomic, readonly) _Bool hasDoseNumber;
@property (retain, nonatomic) NSString *doseNumber;
@property (nonatomic, readonly) _Bool hasDoseQuantity;
@property (retain, nonatomic) NSString *doseQuantity;
@property (nonatomic, readonly) _Bool hasPerformer;
@property (retain, nonatomic) NSString *performer;
@property (nonatomic, readonly) _Bool hasBodySiteCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodings;
@property (nonatomic, readonly) _Bool hasReaction;
@property (retain, nonatomic) NSString *reaction;
@property (nonatomic) _Bool hasNotGiven;
@property (nonatomic) _Bool notGiven;
@property (nonatomic, readonly) _Bool hasAdministrationDate;
@property (retain, nonatomic) NSData *administrationDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic) _Bool hasPatientReported;
@property (nonatomic) _Bool patientReported;
@property (nonatomic, readonly) _Bool hasRouteCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *routeCodings;
@property (nonatomic, readonly) _Bool hasReasonsCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsCodings;
@property (nonatomic, readonly) _Bool hasReasonsNotGivenCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotGivenCodings;

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
