/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableFHIRIdentifierList, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableDiagnosticTestReport : PBCodable <Swift>

{
    HDCodableMedicalCodingList *_diagnosticTestCodings;
    NSData *_effectiveEndDate;
    NSData *_effectiveStartDate;
    NSData *_issueDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSString *_panelName;
    HDCodableFHIRIdentifierList *_results;
    HDCodableMedicalCoding *_statusCoding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasDiagnosticTestCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodings;
@property (nonatomic, readonly) _Bool hasPanelName;
@property (retain, nonatomic) NSString *panelName;
@property (nonatomic, readonly) _Bool hasResults;
@property (retain, nonatomic) HDCodableFHIRIdentifierList *results;
@property (nonatomic, readonly) _Bool hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;
@property (nonatomic, readonly) _Bool hasIssueDate;
@property (retain, nonatomic) NSData *issueDate;

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
