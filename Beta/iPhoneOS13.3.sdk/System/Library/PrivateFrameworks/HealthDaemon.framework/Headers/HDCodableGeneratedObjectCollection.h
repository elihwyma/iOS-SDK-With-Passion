/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <Swift>

{
    NSMutableArray *_accountOwners;
    NSMutableArray *_allergyRecords;
    NSMutableArray *_clinicalRecords;
    NSMutableArray *_conditionRecords;
    NSMutableArray *_diagnosticTestReports;
    NSMutableArray *_diagnosticTestResults;
    NSMutableArray *_medicationDispenseRecords;
    NSMutableArray *_medicationOrders;
    NSMutableArray *_medicationRecords;
    NSMutableArray *_procedureRecords;
    NSMutableArray *_unknownRecords;
    NSMutableArray *_vaccinationRecords;
}

@property (retain, nonatomic) NSMutableArray *medicationOrders;
@property (retain, nonatomic) NSMutableArray *medicationDispenseRecords;
@property (retain, nonatomic) NSMutableArray *medicationRecords;
@property (retain, nonatomic) NSMutableArray *diagnosticTestResults;
@property (retain, nonatomic) NSMutableArray *diagnosticTestReports;
@property (retain, nonatomic) NSMutableArray *vaccinationRecords;
@property (retain, nonatomic) NSMutableArray *conditionRecords;
@property (retain, nonatomic) NSMutableArray *allergyRecords;
@property (retain, nonatomic) NSMutableArray *procedureRecords;
@property (retain, nonatomic) NSMutableArray *accountOwners;
@property (retain, nonatomic) NSMutableArray *unknownRecords;
@property (retain, nonatomic) NSMutableArray *clinicalRecords;

+ (Class)medicationDispenseRecordType;
+ (Class)medicationOrderType;
+ (Class)accountOwnerType;
+ (Class)unknownRecordType;
+ (Class)allergyRecordType;
+ (Class)procedureRecordType;
+ (Class)diagnosticTestResultType;
+ (Class)conditionRecordType;
+ (Class)diagnosticTestReportType;
+ (Class)medicationRecordType;
+ (Class)vaccinationRecordType;
+ (Class)clinicalRecordType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addProcedureRecord:(id)arg1;
- (void)addVaccinationRecord:(id)arg1;
- (void)addDiagnosticTestReport:(id)arg1;
- (void)addMedicationRecord:(id)arg1;
- (void)addClinicalRecord:(id)arg1;
- (void)addMedicationOrder:(id)arg1;
- (void)addUnknownRecord:(id)arg1;
- (void)addAllergyRecord:(id)arg1;
- (id)decodedObjects;
- (_Bool)unitTest_isEquivalentToGeneratedObjectCollection:(id)arg1;
- (void)addMedicationDispenseRecord:(id)arg1;
- (void)addDiagnosticTestResult:(id)arg1;
- (void)addConditionRecord:(id)arg1;
- (void)addAccountOwner:(id)arg1;
- (unsigned long long)medicationOrdersCount;
- (void)clearMedicationOrders;
- (id)medicationOrderAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicationDispenseRecordsCount;
- (void)clearMedicationDispenseRecords;
- (id)medicationDispenseRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicationRecordsCount;
- (void)clearMedicationRecords;
- (id)medicationRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)diagnosticTestResultsCount;
- (void)clearDiagnosticTestResults;
- (id)diagnosticTestResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)diagnosticTestReportsCount;
- (void)clearDiagnosticTestReports;
- (id)diagnosticTestReportAtIndex:(unsigned long long)arg1;
- (unsigned long long)vaccinationRecordsCount;
- (void)clearVaccinationRecords;
- (id)vaccinationRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)conditionRecordsCount;
- (void)clearConditionRecords;
- (id)conditionRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)allergyRecordsCount;
- (void)clearAllergyRecords;
- (id)allergyRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)procedureRecordsCount;
- (void)clearProcedureRecords;
- (id)procedureRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountOwnersCount;
- (void)clearAccountOwners;
- (id)accountOwnerAtIndex:(unsigned long long)arg1;
- (unsigned long long)unknownRecordsCount;
- (void)clearUnknownRecords;
- (id)unknownRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)clinicalRecordsCount;
- (void)clearClinicalRecords;
- (id)clinicalRecordAtIndex:(unsigned long long)arg1;

@end
