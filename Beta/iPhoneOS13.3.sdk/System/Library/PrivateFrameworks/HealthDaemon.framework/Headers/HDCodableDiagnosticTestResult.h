/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableInspectableValueCollection, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableReferenceRangeList, HDCodableStringList, NSData, NSString;

@interface HDCodableDiagnosticTestResult : PBCodable <Swift>

{
    HDCodableMedicalCodingList *_bodySiteCodings;
    NSString *_category;
    NSString *_comments;
    HDCodableMedicalCodingList *_diagnosticTestCodings;
    NSData *_effectiveEndDate;
    NSData *_effectiveStartDate;
    HDCodableMedicalCodingList *_interpretationCodings;
    NSData *_issueDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_methodCodings;
    HDCodableStringList *_performers;
    HDCodableReferenceRangeList *_referenceRanges;
    HDCodableMedicalCoding *_statusCoding;
    HDCodableInspectableValueCollection *_value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasDiagnosticTestCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodings;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) HDCodableInspectableValueCollection *value;
@property (nonatomic, readonly) _Bool hasReferenceRanges;
@property (retain, nonatomic) HDCodableReferenceRangeList *referenceRanges;
@property (nonatomic, readonly) _Bool hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly) _Bool hasIssueDate;
@property (retain, nonatomic) NSData *issueDate;
@property (nonatomic, readonly) _Bool hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasInterpretationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *interpretationCodings;
@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic, readonly) _Bool hasBodySiteCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodings;
@property (nonatomic, readonly) _Bool hasMethodCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *methodCodings;
@property (nonatomic, readonly) _Bool hasPerformers;
@property (retain, nonatomic) HDCodableStringList *performers;

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
